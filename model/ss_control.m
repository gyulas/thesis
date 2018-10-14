%clear all;
%clc;

%global b m

% mintavételi idö
Ts = 1;

% állapot-egyenlet mátrixai (dot_x = Ax + Bu, y = Cx + Du)
% bemenet: u = valve [0..1]
% kimenet: y = temp

%kiskocsi_ss = sys_ss
% kiskocsi_tf = tf(kiskocsi_ss)
% kiskocsi_zp = zpk(kiskocsi_ss)
%%
% Segitseg fsolvehoz
% x = fsolve('*', [*], optimset('LargeScale','Off'));
% Ap=1;
% Ti=1;
% T=1;
% 
% tau1=0.4;
% tau2=5*tau1;
% 
% W_pid=Ap/Ti*tf(conv([tau1 1],[tau2 1]),conv([1 0],[T 1]))
% 
% func_pid=arg(kiskocsi_tf*W_pid) - (3/4 * pi)


% y=fsolve('pidtf',[1 10 5 1 1])
% 
% Ap=     y(1);
% wc =    y(2);
% Ti =    y(3);
% Td=     y(4);
% T=      y(5);
% 
% W_pid=Ap/Ti*tf([Ti*(Td+T) Ti+T 1],[T 1 0]);
% Wol=kiskocsi_tf*W_pid;
% 
% figure(1)
% margin(Wol);
% Wcl_u=feedback(W_pid,kiskocsi_tf);
% 
% figure(2)
% step(Wcl_u)
% title('beavatkozo jel')
% 
% Wcl=feedback(W_pid*kiskocsi_tf,1);
% 
% figure(3)
% step(Wcl)
% title('ugrasvalasz')
% 
% % Diszkretizalas
% 
% H_pid=c2d(W_pid,10^-3,'zoh')

%% Allapotter

%kiskocsi_ss = ss(A, B, C, D)

househeat_dtss=c2d(sys_ss, 1,'zoh')
Mo=obsv(househeat_dtss)
Mc=ctrb(househeat_dtss)


%% az osszes matrix rangja 2, azaz max., inverzuk letezik.
rank(Mo)
rank(Mc)
rank(househeat_dtss.a)  % phi

%% Polusok specifikacioja
% z=e^(sT) az egysegkoron.
z1=exp(-5*10^-3);
zobs=exp(-25*10^-3);

%% allapotvisszacsatolas
K=acker(househeat_dtss.a,househeat_dtss.b,[z1 z1])

%% allapotmegfigyelo
new_Phi = [ househeat_dtss.a househeat_dtss.b ; 0 0 1 ];
new_Gamma = [househeat_dtss.b ; 0 ];
new_C = [ househeat_dtss.c 0];
new_kiskocsi_dtss = ss(new_Phi,new_Gamma,new_C,0);
Gt=acker((new_Phi)',(new_Phi)'*(new_C)',[zobs zobs zobs]);

G=Gt'
F= new_Phi - G*new_C*new_Phi
H= new_Gamma - G*new_C*new_Gamma


%% Alapjel figyelembe vetele

mat=inv([househeat_dtss.a-eye(2) househeat_dtss.b; househeat_dtss.c 0])*[zeros(2,1); 1];
Nx=mat(1:2)
Nu=mat(3)


















