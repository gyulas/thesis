#include <iostream>
#include <iomanip>
#include <fstream>
#include <valarray>
#include <vector>
#include <mutex>
#include <string>
#include <memory>
#include <thread>
#include <tuple>
#include <chrono>
#include <system_error>
#include <boost/bind.hpp>
#include <boost/shared_ptr.hpp>
#include <boost/asio.hpp>
#include "ofxGPIO.h"
#include "ofxGPIO.h"

class LEDCont{
    GPIO gpio;
    SPI2 spi;
    bool debug = true;
    int char_num_printed = 0;
    const int header_for_lines_num = 20;
    std::once_flag flag;
    unsigned int channel = 0;
    unsigned int setup_channel = 0;
    unsigned int microseconds = 100000;
    std::ofstream log;
    const std::vector<unsigned char> magic = {'0','0','0','0','1','1','1','7','L','C','Z','0','0','0','0','7','0','1','0'};

public:
    LEDCont(){
        gpio.setup(GPIO8,OUT,HIGH);
        spi.setup("/dev/spidev0.0", setup_channel, 5000000);
        log.open("logfile",std::ios_base::app);
    }

    ~LEDCont(){
        log.close();
    }

    auto& Debug(){
        return debug;
    }

    auto& Channel(){
        return channel;
    }

    auto SendMessage(std::uint8_t num){
        auto invalid_args = false;
        if( num > 100 )
            invalid_args = true;

        if(invalid_args)
            throw std::make_error_code(std::errc::invalid_argument);
		/////////////////////////////////////////////////////////////
		// construct SPI message for LED controller command

		//header
        std::vector<unsigned char> message = magic;

		// writing data from Simulink to 4 LED channels
        unsigned char filler;
        if(num > 0)
            filler = static_cast<unsigned char>(1);
        else 
            filler = static_cast<unsigned char>(0);
        for(size_t i = 0; i < 4; i++)
            message.push_back(filler);
        for(size_t i = 0; i < 4; i++)
            message.push_back(static_cast<unsigned char>(num));

		//further settings

		while (message.size() < 36)
		{
			// on/off time and type of input
			message.push_back('0');
		}

		while (message.size() < 64)
		{
			// don't care
			message.push_back('X');
		}
		/////////////////////////////////////////////////////////////

		// cute comment on terminal

        if(char_num_printed == 0)
            if(debug)
            {
                for(auto i = 0; i<64; i++){
                    std::cout<<" "<<i/10<<";";
                    log<<" "<<i/10<<";";
                }
                std::cout<<std::endl;
                log<<std::endl;
                for(auto i = 0; i<64; i++){
                    std::cout<<" "<<i%10<<";";
                    log<<" "<<i%10<<";";
                }
                std::cout<<std::endl;
                log<<std::endl;
                for(auto i = 0; i<64; i++){
                    std::cout<<"  |";
                    log<<"  |";
                }
                std::cout<<std::endl;
                log<<std::endl;
            }

        char_num_printed++;
        if(char_num_printed == header_for_lines_num)
            char_num_printed = 0;

        if(debug){
            std::cout<<"sn|";
            log<<"sn|";
            auto i = 0;
            for(; i<22; i++){
                std::cout<<"  |";
                log<<"  |";
            }
            for( ; i<26; i++){
                std::cout<<"XX|";
                log<<"XX|";
            }
            for( ; i<63; i++){
                std::cout<<"  |";
                log<<"  |";
            }
            std::cout<<std::endl;
            log<<std::endl;

            for( auto& ch : message){
                if ( ch > 99 ){
                    std::cout << " " << ch << ";";
                    log << " " << ch << ";";
                }
                else{
                    std::cout << std::setfill(' ') << std::setw(2) << static_cast<int>(ch) << ";";
                    log << std::setfill(' ') << std::setw(2) << static_cast<int>(ch) << ";";
                    //std::cout << std::setfill(' ') << std::setw(2) << std::hex << static_cast<int>(ch) << ";";
                }
            }
            std::cout<<std::endl;
            log<<std::endl;
        }
        
        for( auto& ch : message){
            gpio.set(LOW);
            spi.readWrite(channel,&ch,1);
            gpio.set(HIGH);
        }

        usleep(microseconds);
        return message;
    }

    auto ReceiveMessage(){

        if(char_num_printed == 0)
                if(debug)
                {
                    for(auto i = 0; i<64; i++){
                        std::cout<<" "<<i/10<<";";
                        log<<" "<<i/10<<";";
                    }
                    std::cout<<std::endl;
                    log<<std::endl;
                    for(auto i = 0; i<64; i++){
                        std::cout<<" "<<i%10<<";";
                        log<<" "<<i%10<<";";
                    }
                    std::cout<<std::endl;
                    log<<std::endl;
                    for(auto i = 0; i<64; i++){
                        std::cout<<"  |";
                        log<<"  |";
                    }
                    std::cout<<std::endl;
                    log<<std::endl;
                }

        char_num_printed++;
        if(char_num_printed == header_for_lines_num)
            char_num_printed = 0;

        if(debug){
            std::cout<<"rcv|";
            log<<"rcv|";
            for(auto i = 1; i<64; i++){
                std::cout<<"  |";
                log<<"  |";
            }
            std::cout<<std::endl;
            log<<std::endl;
        }

        std::valarray<unsigned char> message(64);

        for( auto& ch : message){
            gpio.set(LOW);
            spi.readWrite(channel,&ch,1);
            gpio.set(HIGH);
        }

        if(debug){
            for( auto& ch : message){
                if ( ch > 99 )
                    std::cout << " " << ch << ";";
                else
                    std::cout << std::setfill(' ') << std::setw(2) << static_cast<int>(ch) << ";";
            }
            std::cout<<std::endl;
            log<<std::endl;
        }

        if(debug){
            for( auto& ch : message){
                if ( ch > 99 )
                    std::cout << " " << ch << ";";
                else
                    std::cout << std::setfill(' ') << std::setw(2) << static_cast<int>(ch) << ";";
            }
            std::cout<<std::endl;
            log<<std::endl;
        }
        
        usleep(microseconds);
        return message;
    }
};

class temp_sender{
    boost::asio::io_service io;
    boost::asio::ip::tcp::socket socket{io};
    bool end = false;
    boost::asio::io_service io_for_out;
    boost::asio::ip::udp::endpoint remote_endpoint_;
    boost::asio::ip::udp::socket socket_;

public:
    temp_sender(boost::asio::ip::udp::endpoint target, std::tuple<std::string,short unsigned> ngbs_addr):remote_endpoint_{target.address(),target.port()},socket_{io_for_out, remote_endpoint_}{
std::cout << "sender constructing" << std::endl;
        socket.connect(boost::asio::ip::tcp::endpoint{boost::asio::ip::address_v4::from_string(std::get<0>(ngbs_addr)),std::get<1>(ngbs_addr)});
    }

    void send_end_signal(){
        end = true;
    }

    void run(){
        while(!end){
            std::vector<char> out{0,0,0,0,0,6,0};
            const int channel = 1;
            const int thermostat = 25;
            const int command = 3; //read
            out.push_back(static_cast<char>(command));
            out.push_back(static_cast<char>(channel));
            out.push_back(static_cast<char>(thermostat));
            out.push_back(static_cast<char>(0));
            out.push_back(static_cast<char>(1));

            socket.send(boost::asio::buffer(out.data(),out.size()));
            boost::asio::streambuf buff;
            auto temp = buff.prepare(11);
            auto num = socket.receive(temp);
            buff.commit(num);
            std::istream is(&buff);

            if(num != 11)
                std::cout << "not matching input" << num << std::endl;
            else{
                std::vector<std::uint8_t> temp_res;
                for(auto i = 0; i < num; i++){
                    std::uint8_t d;
                    is >> d;
                    if( i > 8 )
                        temp_res.push_back(d);
                }
                std::cout << "sending temp message: " << temp_res[0] << ":" << temp_res[1] << std::endl;
                socket_.send(boost::asio::buffer(out.data(),out.size()));
                std::this_thread::sleep_for(std::chrono::seconds(1));
            }
        }
    }
};


using boost::asio::ip::udp;

class data_receiver{
    LEDCont leds{};

public:
  data_receiver(boost::asio::io_service& io_service) : socket_(io_service, udp::endpoint(udp::v4(), 9090)){
    start_receive();
  }

private:
  void start_receive(){
    socket_.async_receive_from(
        boost::asio::buffer(buff.prepare(1500)), remote_endpoint_,
        boost::bind(&data_receiver::handle_receive, this,boost::asio::placeholders::error,boost::asio::placeholders::bytes_transferred));
  }

  void handle_receive(const boost::system::error_code& error,std::size_t size){
/*    if(!out_temp){
        remote_endpoint_.port(9089);
        std::tuple<std::string,short unsigned> ngbs_addr{"192.168.0.115",502};
	std::cout<< "constructing thread" << std::endl;
        out_temp = std::make_unique<std::thread>([=](){
		std::cout<< "made thread" << std::endl;
		temp_sender temp_thing{remote_endpoint_,ngbs_addr}; 
		std::cout<< "created temp thing" << std::endl;
		temp_thing.run();
	});
    }*/

    if (!error || error == boost::asio::error::message_size){
      buff.commit(size);
      std::istream is{&buff};
      std::uint8_t data;
      is >> data;

      try{
          leds.SendMessage(data);
      }
      catch( std::error_code& ec ){
          switch(ec.value()){
              case static_cast<int>(std::errc::invalid_argument):
                  std::cout << "don't send me a num over 100" << std::endl;
                  break;
              default:
                  std::cout << "I don't know what happend" << std::endl;
          }
      }

      start_receive();
    }
    else{
        std::cout << error.message() << std::endl;
    }
  }

  void handle_send(std::string /*message*/,const boost::system::error_code& /*error*/, std::size_t /*bytes_transferred*/){
  }

  udp::socket socket_;
  udp::endpoint remote_endpoint_;
  boost::asio::streambuf buff;
  std::vector<char> out;
  std::unique_ptr<std::thread> out_temp;
};

int main()
{
  try
  {

    boost::asio::io_service io_service;
    data_receiver server(io_service);
    io_service.run();
    
//WTF soha nnem hivjuk
    auto sned_data = [](){
        boost::asio::io_service io;
        boost::asio::ip::tcp::socket socket{io};
        socket.connect(boost::asio::ip::tcp::endpoint{boost::asio::ip::address_v4::from_string("192.168.0.115"),502});
    };

  }
  catch (std::exception& e)
  {
    std::cerr << e.what() << std::endl;
  }

  return 0;
}
