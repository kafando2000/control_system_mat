clear;
close all;
clc;

M= 2;
m =0.5;
l=0.5;
g=9.8;
% les matrix du modèle
A = [0 (M+m)*g/(M*l) 0 0;
    1 0 0 0;
    0 -m*g/M 0 0;
    0 0 1 0];
B = [-1/(M*l);0;1/M;0];
C = [0 1 0 0];
D = 0;
% definition du modèle
SYS_INVERTED_PENDULUm = ss(A,B,C,D);
% test stabilité
les_poles = eig(A);
% test controlabilité
cont =rank([B A*B A*A*B A*A*A*B]);
if cont == size(A)
    disp("le système est commandable")
else
    disp("le système n'est pas commandable")
end
%if cont ==size(A)
% test observabilité
observa = rank([C;C*A;C*A*A;C*A*A*A]);
if cont == size(A)
    disp("le système est observable")
else
    disp("le système n'est pas observable")
end
% tectnique de commande stabilisante:calcul de K
nv_poles = [-5 -4 -2+2*1i -2-2*1i];
K = acker(A,B,nv_poles);

A_bf = A-B*K;
SYST_2 = ss(A_bf,B,C,D);
figure(1);
step(SYST_2);
grid on;












