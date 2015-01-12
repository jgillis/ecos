#include "ecos.h"
#include "minunit.h"
idxint lp_blend_n = 114;
idxint lp_blend_m = 114;
idxint lp_blend_p = 74;
idxint lp_blend_l = 114;
idxint lp_blend_ncones = 0;
pfloat lp_blend_c[114] = {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 3.200000000000000178e+00, 2.870000000000000107e+00, 0.0, 0.0, 0.0, 0.0, 0.0, 4.400000000000000265e-03, 0.0, 0.0, 0.0, 0.0, 7.000000000000000666e-02, 3.780000000000000027e-02, 1.549999999999999989e-01, 1.549999999999999989e-01, 1.549999999999999989e-01, 1.549999999999999989e-01, 5.279999999999999971e-02, 5.279999999999999971e-02, 5.279999999999999971e-02, 5.279999999999999971e-02, 1.280000000000000027e-01, 1.180000000000000077e-01, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 9.239999999999999603e-02, -5.360000000000000320e+00, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 9.239999999999999603e-02, -5.080000000000000071e+00, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 9.239999999999999603e-02, -4.509999999999999787e+00, 0.0, 0.0, 0.0, -2.750000000000000000e+00, 0.0, 0.0, -4.200000000000000178e+00, 0.0, 0.0, -3.600000000000000089e+00, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -2.000000000000000000e+00, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 4.000000000000000083e-02, 0.0, 3.000000000000000000e+00, 4.000000000000000222e-01, 0.0, 1.319999999999999993e-02, 1.000000000000000021e-02};
idxint lp_blend_Gjc[115] = {0.0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114};
idxint lp_blend_Gir[114] = {0.0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113};
pfloat lp_blend_Gpr[114] = {-1.000000000000000000e+00, -1.000000000000000000e+00, -1.000000000000000000e+00, -1.000000000000000000e+00, -1.000000000000000000e+00, -1.000000000000000000e+00, -1.000000000000000000e+00, -1.000000000000000000e+00, -1.000000000000000000e+00, -1.000000000000000000e+00, -1.000000000000000000e+00, -1.000000000000000000e+00, -1.000000000000000000e+00, -1.000000000000000000e+00, -1.000000000000000000e+00, -1.000000000000000000e+00, -1.000000000000000000e+00, -1.000000000000000000e+00, -1.000000000000000000e+00, -1.000000000000000000e+00, -1.000000000000000000e+00, -1.000000000000000000e+00, -1.000000000000000000e+00, -1.000000000000000000e+00, -1.000000000000000000e+00, -1.000000000000000000e+00, -1.000000000000000000e+00, -1.000000000000000000e+00, -1.000000000000000000e+00, -1.000000000000000000e+00, -1.000000000000000000e+00, -1.000000000000000000e+00, -1.000000000000000000e+00, -1.000000000000000000e+00, -1.000000000000000000e+00, -1.000000000000000000e+00, -1.000000000000000000e+00, -1.000000000000000000e+00, -1.000000000000000000e+00, -1.000000000000000000e+00, -1.000000000000000000e+00, -1.000000000000000000e+00, -1.000000000000000000e+00, -1.000000000000000000e+00, -1.000000000000000000e+00, -1.000000000000000000e+00, -1.000000000000000000e+00, -1.000000000000000000e+00, -1.000000000000000000e+00, -1.000000000000000000e+00, -1.000000000000000000e+00, -1.000000000000000000e+00, -1.000000000000000000e+00, -9.999999999999998890e-01, -9.999999999999997780e-01, -1.000000000000000000e+00, -1.000000000000000000e+00, -1.000000000000000000e+00, -1.000000000000000000e+00, -1.000000000000000000e+00, -1.000000000000000000e+00, -9.999999999999998890e-01, -9.999999999999997780e-01, -1.000000000000000000e+00, -9.999999999999998890e-01, -1.000000000000000000e+00, -1.000000000000000000e+00, -1.000000000000000000e+00, -1.000000000000000000e+00, -1.000000000000000000e+00, -1.000000000000000000e+00, -9.999999999999998890e-01, -1.000000000000000222e+00, -1.000000000000000000e+00, -1.000000000000000000e+00, -1.000000000000000000e+00, -1.000000000000000000e+00, -1.000000000000000000e+00, -1.000000000000000000e+00, -1.000000000000000000e+00, -1.000000000000000000e+00, -1.000000000000000000e+00, -1.000000000000000000e+00, -1.000000000000000000e+00, -1.000000000000000000e+00, -1.000000000000000000e+00, -1.000000000000000000e+00, -1.000000000000000000e+00, -9.999999999999998890e-01, -1.000000000000000000e+00, -1.000000000000000000e+00, -1.000000000000000000e+00, -1.000000000000000000e+00, -1.000000000000000000e+00, -1.000000000000000000e+00, -1.000000000000000222e+00, -1.000000000000000000e+00, -1.000000000000000000e+00, -1.000000000000000000e+00, -9.999999999999997780e-01, -1.000000000000000000e+00, -1.000000000000000000e+00, -9.999999999999998890e-01, -1.000000000000000222e+00, -1.000000000000000000e+00, -1.000000000000000000e+00, -1.000000000000000000e+00, -9.999999999999998890e-01, -1.000000000000000000e+00, -1.000000000000000000e+00, -1.000000000000000000e+00, -1.000000000000000000e+00, -1.000000000000000000e+00, -1.000000000000000000e+00};
pfloat lp_blend_h[114] = {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
idxint *lp_blend_q = NULL;
idxint lp_blend_Ajc[115] = {0.0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 42, 58, 69, 80, 89, 98, 107, 113, 115, 117, 119, 121, 131, 141, 151, 161, 171, 180, 195, 210, 224, 238, 246, 256, 258, 260, 262, 270, 278, 286, 294, 302, 310, 318, 326, 329, 337, 345, 353, 361, 369, 377, 385, 388, 396, 404, 412, 420, 428, 436, 444, 447, 455, 457, 459, 461, 462, 466, 470, 473, 475, 477, 479, 482, 485, 489, 493, 496, 499, 501, 503, 505, 507, 509, 511, 513, 515, 516, 518, 519, 520, 521, 522};
idxint lp_blend_Air[522] = {43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 1, 2, 3, 4, 5, 6, 39, 40, 41, 42, 66, 0.0, 2, 3, 4, 5, 7, 38, 39, 40, 41, 42, 49, 50, 55, 56, 67, 1, 8, 9, 10, 11, 12, 39, 40, 41, 42, 64, 0.0, 8, 9, 10, 11, 12, 39, 40, 41, 42, 64, 8, 9, 10, 12, 20, 39, 40, 41, 42, 8, 9, 10, 12, 17, 39, 40, 41, 42, 8, 9, 10, 12, 16, 39, 40, 41, 42, 11, 13, 38, 40, 41, 42, 14, 21, 15, 21, 13, 14, 13, 15, 14, 16, 18, 22, 38, 39, 40, 41, 42, 68, 15, 17, 19, 22, 38, 39, 40, 41, 42, 68, 4, 20, 21, 22, 38, 40, 41, 42, 64, 69, 5, 20, 21, 22, 38, 40, 41, 42, 65, 69, 3, 20, 21, 22, 38, 40, 41, 42, 64, 69, 20, 21, 22, 27, 38, 40, 41, 42, 69, 4, 9, 12, 23, 24, 25, 26, 27, 28, 39, 40, 41, 42, 64, 70, 5, 9, 12, 23, 24, 25, 26, 27, 28, 39, 40, 41, 42, 65, 70, 3, 9, 12, 23, 24, 25, 26, 27, 39, 40, 41, 42, 64, 70, 2, 9, 12, 23, 24, 25, 26, 27, 39, 40, 41, 42, 64, 70, 12, 24, 29, 39, 40, 41, 42, 71, 8, 9, 12, 23, 30, 39, 40, 41, 42, 71, 8, 24, 9, 23, 9, 12, 10, 31, 43, 44, 45, 46, 47, 48, 22, 31, 43, 44, 45, 46, 47, 48, 18, 31, 43, 44, 45, 46, 47, 48, 19, 31, 43, 44, 45, 46, 47, 48, 26, 31, 43, 44, 45, 46, 47, 48, 29, 31, 43, 44, 45, 46, 47, 48, 30, 31, 43, 44, 45, 46, 47, 48, 9, 31, 43, 44, 45, 46, 47, 48, 43, 44, 45, 31, 43, 44, 46, 47, 48, 72, 73, 10, 32, 49, 50, 51, 52, 53, 54, 22, 32, 49, 50, 51, 52, 53, 54, 18, 32, 49, 50, 51, 52, 53, 54, 19, 32, 49, 50, 51, 52, 53, 54, 26, 32, 49, 50, 51, 52, 53, 54, 9, 32, 49, 50, 51, 52, 53, 54, 49, 50, 51, 32, 49, 50, 52, 53, 54, 72, 73, 10, 35, 55, 56, 57, 58, 59, 60, 22, 35, 55, 56, 57, 58, 59, 60, 18, 35, 55, 56, 57, 58, 59, 60, 19, 35, 55, 56, 57, 58, 59, 60, 26, 35, 55, 56, 57, 58, 59, 60, 9, 35, 55, 56, 57, 58, 59, 60, 55, 56, 57, 35, 55, 56, 58, 59, 60, 72, 73, 8, 25, 8, 36, 9, 36, 36, 10, 37, 62, 63, 11, 37, 62, 63, 37, 62, 63, 3, 33, 2, 33, 33, 64, 6, 34, 61, 7, 34, 61, 5, 34, 61, 65, 4, 34, 61, 64, 28, 34, 61, 27, 34, 61, 34, 61, 38, 40, 12, 40, 9, 40, 8, 40, 24, 40, 23, 40, 39, 40, 39, 9, 12, 40, 40, 41, 42};
pfloat lp_blend_Apr[522] = {1.000000000000000000e+00, 1.000000000000000000e+00, 1.000000000000000222e+00, 9.999999999999998890e-01, 1.000000000000000000e+00, 1.000000000000000000e+00, 1.000000000000000000e+00, 9.999999999999998890e-01, 1.000000000000000222e+00, 9.999999999999998890e-01, 1.000000000000000000e+00, 1.000000000000000000e+00, 9.999999999999998890e-01, 1.000000000000000222e+00, 1.000000000000000000e+00, 9.999999999999998890e-01, 1.000000000000000000e+00, 1.000000000000000000e+00, 1.000000000000000000e+00, 1.000000000000000000e+00, 1.000000000000000000e+00, 1.000000000000000000e+00, 1.000000000000000000e+00, 1.000000000000000000e+00, 1.000000000000000000e+00, 1.000000000000000000e+00, 1.000000000000000000e+00, 1.000000000000000000e+00, 1.000000000000000000e+00, 1.000000000000000000e+00, 1.000000000000000000e+00, -5.370000000000000329e-01, -1.310000000000000053e-01, -1.155000000000000054e-01, -3.649999999999999772e-02, -1.429999999999999882e-01, -3.699999999999999817e-02, 3.000000000000000062e-03, 5.870000000000000218e-02, 1.499999999999999667e-01, 3.019999999999999907e-01, 1.000000000000000000e+00, -2.931000000000000272e-01, -1.170000000000000068e-01, -6.489999999999999936e-02, -1.233000000000000068e-01, -2.217000000000000082e-01, -1.799999999999999933e-01, 4.199999999999999740e-03, 3.000000000000000062e-03, 1.053000000000000047e-01, 1.849999999999999978e-01, 3.840000000000000080e-01, -8.619999999999999191e-03, -8.620000000000000925e-03, -1.010000000000000134e-02, -1.010000000000000134e-02, 1.000000000000000000e+00, 1.000000000000000000e+00, -2.769999999999999893e-02, -5.630000000000000282e-02, -1.989999999999999825e-01, -6.873000000000000220e-01, -1.700000000000000122e-02, 1.302999999999999992e-02, 5.059999999999999915e-02, 2.089999999999999913e-01, 4.949999999999999956e-01, 1.000000000000000000e+00, 1.000000000000000000e+00, -1.119999999999999989e-02, -3.780000000000000027e-02, -1.502000000000000002e-01, -7.953000000000000069e-01, -9.900000000000000813e-03, 1.302999999999999992e-02, 4.479999999999999954e-02, 1.849999999999999978e-01, 7.209999999999999742e-01, 1.000000000000000000e+00, -1.749999999999999889e-01, -2.700000000000000178e-01, -2.800000000000000405e-02, -4.550000000000000155e-01, 1.000000000000000000e+00, 1.302999999999999992e-02, 5.059999999999999915e-02, 2.089999999999999913e-01, 4.949999999999999956e-01, -2.710000000000000187e-01, -3.285000000000000142e-01, -2.549999999999999836e-02, -2.656000000000000028e-01, 1.000000000000000000e+00, 1.302999999999999992e-02, 5.059999999999999915e-02, 2.089999999999999913e-01, 4.949999999999999956e-01, -2.836000000000000187e-01, -3.285000000000000142e-01, -2.409999999999999989e-02, -2.501999999999999780e-01, 1.000000000000000000e+00, 1.302999999999999992e-02, 5.059999999999999915e-02, 2.089999999999999913e-01, 4.949999999999999956e-01, 1.000000000000000000e+00, -1.000000000000000000e+00, 3.269999999999999296e-02, 9.400000000000000022e-02, 4.499999999999999140e-02, 7.930000000000000382e-01, -1.000000000000000000e+00, 1.000000000000000000e+00, -1.000000000000000000e+00, 1.000000000000000000e+00, 1.000000000000000000e+00, -1.000000000000000000e+00, 1.000000000000000000e+00, -1.000000000000000000e+00, 1.000000000000000000e+00, -5.879999999999999810e-02, -8.145000000000000018e-01, -9.099999999999998715e-03, -8.238999999999998547e-01, 8.099999999999999561e-03, -2.111999999999999988e-01, 3.869999999999999551e-01, 1.030000000000000027e+00, 1.300000000000000266e+00, 1.000000000000000000e+00, -4.039999999999999841e-02, -8.564000000000000501e-01, -6.899999999999999016e-03, -7.688999999999998058e-01, 6.300000000000000044e-03, -1.559999999999999998e-01, 2.969999999999999862e-01, 7.920000000000000373e-01, 1.000000000000000000e+00, 1.000000000000000000e+00, -3.321000000000000063e-01, -5.875000000000000222e-01, -3.619999999999999329e-01, 2.299999999999999378e+00, -2.048999999999999988e-01, 8.259999999999999565e-01, 1.461000000000000121e+01, 1.000000000000000000e+00, 1.000000000000000000e+00, 1.000000000000000000e+00, -3.321000000000000063e-01, -5.875000000000000222e-01, -3.619999999999999329e-01, 2.299999999999999378e+00, -2.048999999999999988e-01, 8.259999999999999565e-01, 1.461000000000000121e+01, 1.000000000000000000e+00, 1.000000000000000000e+00, 1.000000000000000000e+00, -2.414000000000000035e-01, -6.626999999999999558e-01, -2.929999999999999827e-01, 2.299999999999999378e+00, -1.531000000000000139e-01, 8.259999999999999565e-01, 1.461000000000000121e+01, 1.000000000000000000e+00, 1.000000000000000000e+00, -2.414000000000000035e-01, -6.626999999999999558e-01, -2.929999999999999827e-01, 1.000000000000000000e+00, 2.299999999999999378e+00, -1.531000000000000139e-01, 8.259999999999999565e-01, 1.461000000000000121e+01, 1.000000000000000000e+00, 1.000000000000000000e+00, -1.849999999999999908e-02, -5.680000000000000326e-02, -8.060000000000000497e-02, -6.579999999999999738e-02, -3.280000000000000276e-02, -4.934000000000001163e-01, -2.922000000000000153e-01, -9.599999999999999159e-03, -6.539999999999999980e-02, -2.535000000000000031e-01, 6.320000000000000062e-01, 6.806999999999999718e-01, 1.000000000000000000e+00, 1.000000000000000000e+00, 1.000000000000000000e+00, -1.849999999999999908e-02, -5.680000000000000326e-02, -8.060000000000000497e-02, -6.579999999999999738e-02, -3.280000000000000276e-02, -4.934000000000001163e-01, -2.922000000000000153e-01, -9.599999999999999159e-03, -6.539999999999999980e-02, -2.535000000000000031e-01, 6.320000000000000062e-01, 6.806999999999999718e-01, 1.000000000000000000e+00, 1.000000000000000000e+00, 1.000000000000000000e+00, -1.839999999999999969e-02, -5.639999999999999875e-02, -7.799999999999999989e-02, -6.550000000000000266e-02, -3.030000000000000054e-02, -4.749999999999999778e-01, -3.049999999999999933e-01, -6.539999999999999980e-02, -2.702999999999999847e-01, 6.320000000000000062e-01, 6.806999999999999718e-01, 1.000000000000000000e+00, 1.000000000000000000e+00, 1.000000000000000000e+00, -1.839999999999999969e-02, -5.639999999999999875e-02, -7.799999999999999989e-02, -6.550000000000000266e-02, -3.030000000000000054e-02, -4.749999999999999778e-01, -3.049999999999999933e-01, -6.539999999999999980e-02, -2.702999999999999847e-01, 6.320000000000000062e-01, 6.806999999999999718e-01, 1.000000000000000000e+00, 1.000000000000000000e+00, 7.600000000000000089e-01, 5.714000000000000190e-01, -9.999999999999998890e-01, 1.869000000000000106e-01, 2.796000000000000152e-01, 2.241000000000000103e+00, 2.765999999999999570e+00, 1.000000000000000000e+00, -5.709999999999999104e-02, -1.139999999999999868e-02, 6.570999999999999064e-01, 5.713999999999999080e-01, -9.999999999999997780e-01, 1.723999999999999699e-01, 2.578999999999999626e-01, 2.066999999999999726e+00, 2.552000000000000046e+00, 9.999999999999998890e-01, -1.000000000000000000e+00, 1.000000000000000000e+00, -1.000000000000000000e+00, 1.000000000000000000e+00, -1.000000000000000000e+00, 1.000000000000000000e+00, 1.000000000000000000e+00, -9.999999999999998890e-01, -7.950000000000001066e+00, -8.699999999999997513e+00, -3.000000000000000000e+00, 1.399999999999999822e+01, 1.000000000000000000e+00, -1.000000000000000000e+00, 1.000000000000000000e+00, -1.000000000000000000e+00, -8.840000000000001634e+00, -9.449999999999999289e+00, -3.000000000000000000e+00, 1.200000000000000000e+01, 1.000000000000000000e+00, -1.000000000000000000e+00, 9.999999999999998890e-01, -9.999999999999998890e-01, -9.429999999999997939e+00, -9.569999999999998508e+00, -3.000000000000000444e+00, 3.499999999999999556e+00, 2.329999999999999571e-01, -3.579999999999999294e-01, 9.999999999999997780e-01, -9.999999999999998890e-01, -9.030000000000001137e+00, -9.319999999999998508e+00, -2.999999999999999556e+00, 3.500000000000000000e+00, 2.049999999999999600e-01, -3.330000000000000182e-01, 1.000000000000000222e+00, -9.999999999999997780e-01, -9.230000000000000426e+00, -9.220000000000000639e+00, -2.999999999999999112e+00, 6.000000000000000888e+00, 3.810000000000000608e-01, -5.089999999999998970e-01, 1.000000000000000000e+00, -9.999999999999998890e-01, -9.399999999999998579e+00, -9.849999999999997868e+00, -3.000000000000000000e+00, 2.499999999999999556e+00, 3.900000000000000133e-01, -7.699999999999999067e-01, 1.000000000000000000e+00, -9.999999999999998890e-01, -9.740000000000000213e+00, -1.009999999999999964e+01, -3.000000000000000888e+00, 3.299999999999999378e+00, 2.330000000000000127e-01, -5.799999999999999600e-01, 9.999999999999998890e-01, -9.999999999999997780e-01, -9.740000000000000213e+00, -9.899999999999998579e+00, -3.000000000000000000e+00, 6.599999999999998579e+01, 9.999999999999998890e-01, -9.999999999999998890e-01, -4.929999999999999938e-01, -1.650000000000000078e-01, 1.000000000000000222e+00, 9.999999999999998890e-01, 1.002999999999999936e+01, 1.002999999999999936e+01, -9.500000000000001776e+00, -5.000000000000000000e-01, 5.000000000000000000e-01, 6.400000000000000133e-01, 3.499999999999999778e-01, 1.000000000000000222e+00, -1.000000000000000000e+00, -7.980000000000000426e+00, -8.580000000000000071e+00, -3.000000000000000444e+00, 1.400000000000000000e+01, 1.000000000000000000e+00, -1.000000000000000000e+00, 1.000000000000000000e+00, -1.000000000000000222e+00, -8.869999999999999218e+00, -9.330000000000000071e+00, -3.000000000000000444e+00, 1.200000000000000000e+01, 1.000000000000000000e+00, -1.000000000000000000e+00, 9.999999999999998890e-01, -1.000000000000000222e+00, -9.460000000000000853e+00, -9.450000000000001066e+00, -3.000000000000000888e+00, 3.500000000000000000e+00, 2.330000000000000127e-01, -3.579999999999999849e-01, 1.000000000000000000e+00, -9.999999999999998890e-01, -9.059999999999998721e+00, -9.199999999999999289e+00, -2.999999999999999556e+00, 3.499999999999999556e+00, 2.049999999999999600e-01, -3.329999999999999627e-01, 9.999999999999998890e-01, -1.000000000000000000e+00, -9.260000000000001563e+00, -9.129999999999999005e+00, -3.000000000000000000e+00, 5.999999999999999112e+00, 3.180000000000000049e-01, -5.090000000000000080e-01, 9.999999999999998890e-01, -9.999999999999998890e-01, -9.769999999999999574e+00, -9.779999999999997584e+00, -3.000000000000000444e+00, 6.599999999999998579e+01, 9.999999999999998890e-01, -9.999999999999998890e-01, -4.349999999999999978e-01, -2.079999999999999905e-01, 1.000000000000000222e+00, 1.000000000000000000e+00, 9.650000000000000355e+00, 9.650000000000000355e+00, -9.500000000000000000e+00, -4.999999999999999445e-01, 4.999999999999999445e-01, -3.599999999999999312e-01, 3.499999999999999778e-01, 1.000000000000000000e+00, -1.000000000000000000e+00, -7.990000000000000213e+00, -8.589999999999999858e+00, -2.999999999999999556e+00, 1.400000000000000178e+01, 9.999999999999998890e-01, -9.999999999999998890e-01, 1.000000000000000000e+00, -1.000000000000000000e+00, -8.880000000000000782e+00, -9.340000000000001634e+00, -3.000000000000000444e+00, 1.200000000000000000e+01, 1.000000000000000000e+00, -1.000000000000000000e+00, 9.999999999999998890e-01, -9.999999999999997780e-01, -9.470000000000000639e+00, -9.460000000000000853e+00, -3.000000000000000000e+00, 3.500000000000000000e+00, 2.329999999999999849e-01, -3.579999999999999849e-01, 1.000000000000000222e+00, -1.000000000000000000e+00, -9.070000000000000284e+00, -9.210000000000002629e+00, -3.000000000000000000e+00, 3.499999999999999556e+00, 2.050000000000000155e-01, -3.330000000000000737e-01, 1.000000000000000000e+00, -1.000000000000000000e+00, -9.269999999999999574e+00, -9.140000000000002345e+00, -3.000000000000000000e+00, 6.000000000000000000e+00, 3.180000000000000049e-01, -5.090000000000000080e-01, 9.999999999999998890e-01, -1.000000000000000000e+00, -9.779999999999997584e+00, -9.789999999999999147e+00, -2.999999999999999556e+00, 6.599999999999998579e+01, 9.999999999999998890e-01, -9.999999999999998890e-01, -4.259999999999999898e-01, -2.040000000000000147e-01, 1.000000000000000000e+00, 9.999999999999996669e-01, 9.050000000000000711e+00, 9.050000000000000711e+00, -9.500000000000000000e+00, -4.999999999999999445e-01, 4.999999999999999445e-01, -3.599999999999999867e-01, -6.500000000000000222e-01, -1.000000000000000000e+00, 1.000000000000000000e+00, 1.000000000000000000e+00, -1.000000000000000000e+00, 1.000000000000000000e+00, -1.000000000000000000e+00, 1.000000000000000000e+00, 1.000000000000000000e+00, -1.000000000000000000e+00, -1.400000000000000000e+01, 1.400000000000000000e+01, 1.000000000000000000e+00, -1.000000000000000000e+00, -8.000000000000000444e-01, 8.000000000000000444e-01, 1.000000000000000000e+00, 2.000000000000000000e+00, -3.000000000000000000e+00, 1.000000000000000000e+00, -1.000000000000000000e+00, 1.000000000000000000e+00, -1.000000000000000000e+00, 1.000000000000000000e+00, 1.000000000000000000e+00, 1.000000000000000000e+00, -9.999999999999997780e-01, 1.009999999999999964e+01, 1.000000000000000222e+00, -9.999999999999997780e-01, 1.263000000000000256e+01, 1.000000000000000222e+00, -1.000000000000000000e+00, 8.050000000000002487e+00, 1.000000000000000222e+00, 1.000000000000000000e+00, -1.000000000000000000e+00, 6.900000000000002132e+00, 1.000000000000000000e+00, 1.000000000000000000e+00, -1.000000000000000000e+00, 8.050000000000002487e+00, 9.999999999999997780e-01, -9.999999999999997780e-01, 4.399999999999999467e+00, 9.999999999999997780e-01, -1.009999999999999964e+01, 9.999999999999998890e-01, -3.250000000000000111e-01, 1.000000000000000222e+00, -4.152999999999999581e+00, 1.000000000000000000e+00, -4.315999999999999837e+00, 1.000000000000000000e+00, -3.814000000000000501e+00, 1.000000000000000222e+00, -3.807999999999999829e+00, 1.000000000000000000e+00, -4.440000000000000391e+00, -9.999999999999997780e-01, 1.419999999999999707e+00, 1.000000000000000000e+00, -5.000000000000000000e-01, -5.000000000000000000e-01, -1.000000000000000000e+00, 1.000000000000000000e+00, -1.000000000000000000e+00, -1.000000000000000000e+00};
pfloat lp_blend_b[74] = {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.326000000000000156e+01, 5.250000000000000000e+00, 2.632000000000000028e+01, 2.105000000000000071e+01, 1.344999999999999929e+01, 2.580000000000000071e+00, 1.000000000000000000e+01, 1.000000000000000000e+01, 0.0, 0.0};
 
static char * test_lp_blend(){
pwork *mywork;
idxint exitflag;
 
/* print test name */
printf("====================================== lp_blend ======================================\n");
 
/* set up data */
mywork = ECOS_setup(lp_blend_n, lp_blend_m, lp_blend_p, lp_blend_l, lp_blend_ncones, lp_blend_q,
#if defined EXPCONE 
                    0, 
#endif
                    lp_blend_Gpr, lp_blend_Gjc, lp_blend_Gir,
                    lp_blend_Apr, lp_blend_Ajc, lp_blend_Air,
                    lp_blend_c, lp_blend_h, lp_blend_b);
if( mywork != NULL ){
/* solve */
exitflag = ECOS_solve(mywork); }
else exitflag = ECOS_FATAL;
 
/* clean up memory */
ECOS_cleanup(mywork, 0);
 
mu_assert("lp_blend: ECOS failed to produce outputflag OPTIMAL", exitflag == ECOS_OPTIMAL );
return 0;
}
