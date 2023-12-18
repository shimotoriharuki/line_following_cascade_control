clear

K_t = 1;
V = 2;
K_e = 1;
n = 1;
R = 1;
r = 1;
m = 1;

num = K_t*((V - K_e*n)/R);
den = [r*m, 1];
H = tf(num,den)
Hi = inv(H)