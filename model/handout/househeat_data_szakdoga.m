%   SLDEMO_HOUSEHEAT_DATA
%   This script runs in conjunction with the "sldemo_househeat"
%   house thermodynamics example. Note that time is given in units of hours

%   Copyright 1990-2012 The MathWorks, Inc.

%% Reference to MPC
%not working this waz
%ref=[20*ones(1,3600*24) 25*ones(1,3600*24) 20*ones(1,3600*24) 25*ones(1,3600*24) 20*ones(1,3600*24) 25*ones(1,3600*24) ];




%%


T_s=1800;                     %% second
timeUnit_1min=60/T_s;
timeUnit_1hour=3600/T_s;
timeUnit_1day=timeUnit_1hour*24;
timeUnit_1week=7*timeUnit_1day;

% TinIC = initial indoor temperature = 20 deg C
TinIC = 0;
TinHeatK=273+0; %[K] heating elements
supp_water_initial_temp=0;         %   [Celsius]



                            % -------------------------------
                            % Problem constant
                            % -------------------------------
                            % converst radians to degrees
                            r2d = 180/pi;
                            % -------------------------------
                            % Define the house geometry
                            % -------------------------------
                            % House length = 30 m
                            lenHouse = 30;
                            % House width = 10 m
                            widHouse = 10;
                            % House height = 4 m
                            htHouse = 4;
                            % Roof pitch = 40 deg
                            pitRoof = 40/r2d;
                            % Number of windows = 6
                            numWindows = 6;
                            % Height of windows = 1 m
                            htWindows = 1;
                            % Width of windows = 1 m
                            widWindows = 1;
                            windowArea = numWindows*htWindows*widWindows;
                            wallArea = 2*lenHouse*htHouse + 2*widHouse*htHouse + ...
                                       2*(1/cos(pitRoof/2))*widHouse*lenHouse + ...
                                       tan(pitRoof)*widHouse - windowArea;
                            % -------------------------------
                            % Define the type of insulation used
                            % -------------------------------
                            % Glass wool in the walls, 0.2 m thick
                            % k is in units of J/sec/m/C                                                       NOT convert to J/hr/m/C multiplying by 3600
                            kWall = 0.038;   % second is the time unit
                            LWall = .2;
                            RWall = LWall/(kWall*wallArea);
                            % Glass windows, 0.01 m thick
                            kWindow = 0.78;  % second is the time unit
                            LWindow = .01;
                            RWindow = LWindow/(kWindow*windowArea);
                            % -------------------------------
                            % Determine the equivalent thermal resistance for the whole building
                            % -------------------------------
                            Req = RWall*RWindow/(RWall + RWindow);
% c = cp of air (273 K) = 1005.4 J/kg-K
c = 1005.4;
                            % -------------------------------
                            % Enter the temperature of the heated air
                            % -------------------------------
                            % The air exiting the heater has a constant temperature which is a heater
                            % property. THeater = 50 deg C
                            THeater = 50;
                                                                                                            % Air flow rate Mdot = 1 kg/sec = 3600 kg/hr
                                                                                Mdot = 3600;  % hour is the time unit
% energy per hour is c*Mdot*?t
% -------------------------------
% Radiator parameters
% -------------------------------
% Q=h*A*(Ts-Ti)
% A=n*A0, n tag� radi�torra
                                    N_heater=15; % ennyi db radiator
                                    A_heater=3.5;   % [m^2]
                                    h_heater=11;      % [W/m^2K]
                                    T_heater=60;
% -------------------------------
water_heat_capacity=4183;           % c [J/kgK]
supp_water_flow=0.01;               % m [kg/s]
%heat_transfer_const
%h_c_rad=11;                                                                % k [W/m^2K]
%h_r_radi=0.1*5.67e-8;              % k [W/m^2K^4] q=eps*sigma*A*T^4
h_c_radi=7;                         % k [W/m^2K]
t_w=90;
t_m=60;                             % k�zepes h�mk�l
%h_c_radi=5.29*(t_m/60)^0.25;        % k [W/m^2K] % Csoknai, 337.o. 
h_w_radi=150;                       % k [W/m^2K]

% C11 450 mm magas:
% l_r=1;                              % l [m] a radiator hossza
% m_r=14.4*l_r;                       % m [kg]    --     tomege
% c_metal=464;                        % c [J/kgK] acel fajhoje
% m_w_r=2.3*l_r;                      % m [kg] = rho*V a viz tomege, 1kg/l/rel szamolva
% c_w=4189;                           % c [J/kgK] viz fajhoje

%C22 600 mm magas:
l_r=1.5;                              % l [m] a radiator hossza
area_radiator=l_r*0.8*3;            % A [m^2] - 3-as szorzo: lamellak, stb.
m_r=33.4*l_r;                       % m [kg]    --     tomege
c_metal=464;                        % c [J/kgK] acel fajhoje
m_w_r=6.6*l_r;                      % m [kg] = rho*V a viz tomege, 1kg/l/rel szamolva
c_w=4189;                           % c [J/kgK] viz fajhoje


water_heat_capacity=c_w;
heat_transfer_const_radiator=h_c_radi;

% -------------------------------
% Floor heating parameters
% -------------------------------
area_floor=10;                    % A [m^2]
heat_transfer_const_floorheat=9.5;
supp_water_flow_f=0.035;

% -------------------------------


% -------------------------------
% Custom h�z adatai
% -------------------------------
% Koli: k�ls� falb�l ablak f�mkeretes, 1.75m2/db, ebb�l �veg 1m2/db.
% Kerek�tettem 2m^2-re.
% R�tegtervi h.�b. t�ny. kb. 2-4.5 W/m^2-K
%
% K�ls� fal 4m^2, bels[ falak 80m^2, h.�b. t�ny rendre 1.3 / 1.5.

q_sch_ablak=2*2*4.5;                  % [W/K]
q_sch_fal_kulso=3.3*(0.25+0.95)*1.3;  % [W/K] - kepletben geom. meretekkel
q_sch_fal_belso=2*6*3.3 + ...
                2*6*2.6 + 2.6*3.3;%??? [m2]

% Hoveszteseg a kulso homersekletkulonbseg fv.: Q=?t*?q [W]
q_sch_ext=q_sch_ablak+q_sch_fal_kulso;

%Bentire nem szamolok.

% -------------------------------
% Determine total internal air mass = M
% -------------------------------
% Density of air at sea level = 1.2250 kg/m^3
densAir = 1.2250;
M = (lenHouse*widHouse*htHouse+tan(pitRoof)*widHouse*lenHouse)*densAir;
c_air = 1005.4;
M_air = 51.5*densAir;
% -------------------------------
% Enter the cost of electricity and initial internal temperature
% -------------------------------
% Assume the cost of electricity is $0.09 per kilowatt/hour
% Assume all electric energy is transformed to heat energy
% 1 kW-hr = 3.6e6 J
% cost = $0.09 per 3.6e6 J
cost = 0.09/3.6e6;

