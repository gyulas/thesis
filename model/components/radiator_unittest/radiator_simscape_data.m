%   SLDEMO_HOUSEHEAT_DATA
%   This script runs in conjunction with the "sldemo_househeat"
%   house thermodynamics example. Note that time is given in units of hours

%   Copyright 1990-2012 The MathWorks, Inc.

T_s=60;                     %% second
timeUnit_1min=60/T_s;
timeUnit_1hour=3600/T_s;
timeUnit_1day=timeUnit_1hour*24;
timeUnit_1week=7*timeUnit_1day;

% TinIC = initial indoor temperature = 20 deg C
TinIC = 20;
TinHeatK=273+20; %[K] heating elements

            % -------------------------------
            % Radiator parameters
            % -------------------------------
            % Q=h*A*(Ts-Ti)
            % A=n*A0, n tagú radiátorra
%                                                 N_heater=15; % ennyi db radiator
%                                                 A_heater=3.5;   % [m^2]
%                                                 h_heater=11;      % [W/m^2K]
%                                                 T_heater=60;
            % -------------------------------
            %heat_transfer_const
            %h_c_rad=11;                                                                % k [W/m^2K]
            %h_r_radi=0.1*5.67e-8;              % k [W/m^2K^4] q=eps*sigma*A*T^4

% -------------------------------
% Radiator 
% -------------------------------

% Steady-state
h_c_radi=7;                         % k [W/m^2K] Convective heat transfer at radiator surface area.
h_w_radi=150;                       % k [W/m^2K] Conductive heat from water to metal

                                    % C22 900 mm magas:
height=0.9;
l_r=1.5;                            % l [m] a radiator hossza
area_radiator=2;                    % A [m^2]

% Transient behavior

m_r=50.1*l_r;                       % m [kg]    --     tomege
c_metal=464;                        % c [J/kgK] acel fajhoje
m_w_r=8.9*l_r;                      % m [kg] = rho*V a viz tomege, 1kg/l/rel szamolva
c_w=4189;                           % c [J/kgK] viz fajhoje

% https://www.purmo.com/hu/termekek/lapradiatorok/purmo-compact.htm#tab-muszaki-adatok
% -------------------------------

%heat_transfer_const_radiator=h_c_radi;


% -------------------------------
% Room
% -------------------------------

%area 19m^2, height 2.6m

c_air = 1005.4;
densAir = 1.2250;
M_air = 51.5*densAir;

