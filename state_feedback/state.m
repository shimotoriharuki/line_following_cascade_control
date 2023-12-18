clear

%パラメータ
L = 0.045; %端子間インダクタンス[mH]　
R = 2.9; %端子間抵抗[ohm]
Kt = 3.52e-3; %トルク定数[Nm/A]
J = 0.151e-7; %イナーシャ[kgm^2]
d = 0.000001; % 粘性抵抗
Ke = 1 / (2 * pi * 2710 / 60); %逆起電定数 [V/(rad/s)]

r = 0.012; %タイヤの半径 [m]
m = 0.150; %ロボットの重量[kg]
g = 1; %減速比

%状態空間表現
A = [d/(m*r^2 + J),Kt/(m*r^2 + J); -Ke/L, -R/L];
B = [0; 1/L];
C = [1, 0];
D = 0;
sys_state = ss(A,B,C,D);

%状態空間でシミュレーション
dt = 0.001;
t = 0 : dt : 10;
N = length(t);
i = 0;
x = [0; 0];
u = 1;
x1 = zeros(1, N);
x2 = zeros(1, N);
for n = t
    i = i + 1;
    dx = A * x + B * u;
    x = x + dx * dt;
    
    x1(i) = [x(1)];
    x2(i) = [x(2)];
end

figure(1)
subplot(1, 2, 1)
plot(t, x1);
legend('omega')
title('状態方程式のシミュレーション')

subplot(1, 2, 2)
plot(t, x2);
legend('i')
title('状態方程式のシミュレーション')

%伝達関数に変換
figure(2)
[b, a] = ss2tf(A,B,C,D); %b/a
sys_tf = tf(b, a);

step(sys_tf, 10)