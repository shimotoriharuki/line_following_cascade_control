clear
syms v_m dv_m R i_m di_m L K_e omega domega K_t D r m J

f1 = v_m == R * i_m + L * di_m + K_e * omega;
f2 = domega == (K_t * i_m - D * omega - r^2 * m * domega) / J;
f2 = isolate(f2, domega)

f_im = isolate(f1, i_m); %i_mについて変形
% f_omega = isolate(f2, omega); %omegaについて変形

%f2のi_mにf1を代入
f_domega = subs(f2, i_m, rhs(f_im))

% f_omega = simplify(f_omega)
f_domega = collect(f_domega, v_m) %v_mでまとめる
