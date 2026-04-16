#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define pi 3.1415926535

double nep_mot_banh_chung(int dc){
    return dc*dc*sqrt(dc);
}

double nep_mot_banh_giay(int dg){
    return (dg*dg*pi)/3;
}

int la_cho_banh_chung(int dc){
    if (dc < 8){
        return 2;
    }
    else{
        return 1;
    }
}

int la_cho_banh_giay(int dg){
    if (dg < 5){
        return 2;
    }
    else{
        return 1;
    }
}

int fibonacci(int n){
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

void Troigio(int n, int dc, int dg, int ld, double *nd, int *bc, int *bg){
    double nep_bc;
    double nep_bg;
    double nep_con_lai;
    int la_bc;
    int la_bg;
    int la_con_lai;
    int banhchung, banhgiay;
    int giam_bc;
    nep_bc = nep_mot_banh_chung(dc);
    nep_bg = nep_mot_banh_giay(dg);
    la_bc = la_cho_banh_chung(dc);
    la_bg = la_cho_banh_giay(dg);
    if (n/nep_bc > ld/la_bc){
        banhchung = ld/la_bc;
    }
    else{
        banhchung = (n/nep_bc);    
    }
    nep_con_lai = n - banhchung*nep_bc;
    la_con_lai = ld - banhchung*la_bc;
    if (nep_con_lai/nep_bg > la_con_lai/la_bg){
        banhgiay = la_con_lai/la_bg;
    }
    else{
        banhgiay = nep_con_lai/nep_bg;
    }
    *bc = banhchung;
    *bg = banhgiay;
    *nd = nep_con_lai - banhgiay*nep_bg;
}

void Troimua(int n, int dc, int dg, int ld, double *nd, int *bc, int *bg){
    double nep_bc;
    double nep_bg;
    double nep_con_lai;
    double nepdu = n;
    int la_bc;
    int la_bg;
    int la_con_lai;
    int banhchung, banhgiay;
    int tang_bc;
    int chenh_lech;
    int toi_thieu = 1000;
    nep_bc = nep_mot_banh_chung(dc);
    nep_bg = nep_mot_banh_giay(dg);
    la_bc = la_cho_banh_chung(dc);
    la_bg = la_cho_banh_giay(dg);
    if (n/nep_bc > ld/la_bc){
        banhchung = ld/la_bc;
    }
    else{
        banhchung = n/nep_bc;    
    }
    for (tang_bc = 0; tang_bc <= banhchung; tang_bc++){
        nep_con_lai = n - tang_bc*nep_bc;
        la_con_lai = ld - tang_bc*la_bc;
        if (nep_con_lai/nep_bg > la_con_lai/la_bg){
            banhgiay = la_con_lai/la_bg;
        }
        else{
            banhgiay = (nep_con_lai/nep_bg);
        }
        *nd = nep_con_lai - banhgiay*nep_bg;
        chenh_lech = abs(tang_bc - banhgiay); 
        if (tang_bc == banhgiay){
            if (*nd < nepdu){
                *bc = tang_bc;
                *bg = banhgiay;
                nepdu = *nd;   
            }
        }
        else if(chenh_lech < toi_thieu){
            if (*nd < nepdu){
                *bc = tang_bc;
                *bg = banhgiay;
                nepdu = *nd;
            }
        }
    }
    *nd = nepdu;
}

void Troinang(int n, int dc, int dg, int ld, double *nd, int *bc, int *bg){
    int G;
    int H;
    int nepthem;
    int ladong;
    int thoitiet;
    int X[5][6] = {{5, 7, 10, 12, 15, 20}, {20, 5, 7, 10, 12, 15}, {15, 20, 5, 7, 10, 12}, {12, 15, 20, 5, 7, 10}, {10, 12, 15, 20, 5, 7}};
    G = dc%6;
    H = ld%5;
    nepthem = n * (double)((100+X[H][G])/100);
    ladong = ld - X[H][G];
    thoitiet = (dc + dg)%3;
    if (thoitiet == 0){
        Troimua(nepthem, dc, dg, ladong, nd, bc, bg);
    }
    else if (thoitiet == 1){
        Troigio(nepthem, dc, dg, ladong, nd, bc, bg);
    }
    else{
        Troimay(nepthem, dc, dg, ladong, nd, bc, bg);
    }
}

void Troisuong(int n, int dc, int dg, int ld, double *nd, int *bc, int *bg){
    double dc_moi = dc;
    double nep_bc;
    double nep_bg;
    double nep_con_lai;
    double nepdu = n;
    int dg_moi = dg;
    int la_bc;
    int la_bg;
    int la_con_lai;
    int banhchung, banhgiay;
    int tang_bc;
    int gioihan = 1000;
    int tongbanh;
    if (dc == fibonacci(dc-1) + fibonacci(dc-2) && dg == fibonacci(dg-1) + fibonacci(dg-2)){
        dc_moi = 0.5*dc;
        dg_moi = 2*(dc+dg);
    }
    nep_bc = nep_mot_banh_chung(dc);
    nep_bg = nep_mot_banh_giay(dg);
    la_bc = la_cho_banh_chung(dc);
    la_bg = la_cho_banh_giay(dg);
    if (n/nep_bc > ld/la_bc){
        banhchung = ld/la_bc;
    }
    else{
        banhchung = n/nep_bc;    
    }
    for (tang_bc = 0; tang_bc <= banhchung; tang_bc++){
        nep_con_lai = n - tang_bc*nep_bc;
        la_con_lai = ld - tang_bc*la_bc;
        if (nep_con_lai/nep_bg > la_con_lai/la_bg){
            banhgiay = la_con_lai/la_bg;
        }
        else{
            banhgiay = (nep_con_lai/nep_bg);
        }
        *nd = nep_con_lai - banhgiay*nep_bg;
        tongbanh = tang_bc + banhgiay;
        if (tongbanh < gioihan){
            gioihan = tongbanh;
            nepdu = *nd;
            *bc = banhchung;
            *bg = banhgiay;
        }
        else if (tongbanh == gioihan){
            if (*nd < nepdu){
                nepdu = *nd;
                *bc = banhchung;
                *bg = banhgiay;
            }
        }
    }
    *nd = nepdu;
}