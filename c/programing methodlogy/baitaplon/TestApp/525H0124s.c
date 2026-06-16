#include <stdio.h>
#include <math.h>
#include <string.h>
#define PI 3.1415926535
#define SIZE 10

int checkDieuKien(int n, int dc, int dg, int ld)
{
    if (n < 1 || n > 2000 || dc < 0 || dg < 0 || (dc == 0 && dg == 0) || ld < 1 || ld > 600)
    {
        return -1;
    }
    return 1;
}

float bc(int dc)
{
    return dc * dc * sqrt(dc);
}

float bg(int dg)
{
    return (dg * dg * PI) / 3.0;
}

void Wind(int n, int dc, int dg, int *p_ld, int *p_bc, int *p_bg, float *p_nd)
{
    float nep_banhchuong = bc(dc);
    float nep_banhgiay = bg(dg);

    int la_dong_bc = (dc < 8) ? 1 : 2;
    int la_dong_bg = (dg < 5) ? 1 : 2;

    *p_nd = (float)n;

    // tinh bc
    int bc_theo_nep = *p_nd / nep_banhchuong;
    int bc_theo_la = *p_ld / la_dong_bc;

    *p_bc = (bc_theo_nep < bc_theo_la) ? bc_theo_nep : bc_theo_la;
    *p_nd -= (*p_bc * nep_banhchuong);
    *p_ld -= (la_dong_bc * *p_bc);

    // tinh bg
    int bg_theo_nep = *p_nd / nep_banhgiay;
    int bg_theo_la = *p_ld / la_dong_bg;

    *p_bg = (bg_theo_nep < bg_theo_la) ? bg_theo_nep : bg_theo_la;
    *p_nd -= (*p_bg * nep_banhgiay);
    *p_ld -= (la_dong_bg * *p_bg);
}

void Rain(int n, int dc, int dg, int *p_ld, int *p_bc, int *p_bg, float *p_nd)
{
    float nep_banhchuong = bc(dc);
    float nep_banhgiay = bg(dg);

    int la_dong_bc = (dc < 8) ? 1 : 2;
    int la_dong_bg = (dg < 5) ? 1 : 2;

    *p_nd = (float)n;

    float tong_nep_1_cap = nep_banhchuong + nep_banhgiay;
    float tong_la_1_cap = la_dong_bc + la_dong_bg;

    int tong_cap_theo_nep = *p_nd / tong_nep_1_cap;
    int tong_cap_theo_la = *p_ld / tong_la_1_cap;

    *p_bc = *p_bg = (tong_cap_theo_nep < tong_cap_theo_la) ? tong_cap_theo_nep : tong_cap_theo_la;
    *p_nd -= (*p_bc * nep_banhchuong) + (*p_bg * nep_banhgiay);
    *p_ld -= (*p_bc * la_dong_bc) + (*p_bg * la_dong_bg);

    // tối ưu nếp để trả lại nếp là tối thiểu
    if (nep_banhchuong < nep_banhgiay)
    {
        int them_bc_nep = *p_nd / nep_banhchuong;
        int them_bc_la = *p_ld / la_dong_bc;
        int them_bc = (them_bc_nep < them_bc_la) ? them_bc_nep : them_bc_la;

        *p_bc += them_bc;
        *p_nd -= them_bc * nep_banhchuong;
        *p_ld -= them_bc * la_dong_bc;

        int them_bg_nep = *p_nd / nep_banhgiay;
        int them_bg_la = *p_ld / la_dong_bg;
        int them_bg = (them_bg_nep < them_bg_la) ? them_bg_nep : them_bg_la;

        *p_bg += them_bg;
        *p_nd -= them_bg * nep_banhgiay;
        *p_ld -= them_bg * la_dong_bg;
    }
    else
    {
        int them_bg_nep = *p_nd / nep_banhgiay;
        int them_bg_la = *p_ld / la_dong_bg;
        int them_bg = (them_bg_nep < them_bg_la) ? them_bg_nep : them_bg_la;

        *p_bg += them_bg;
        *p_nd -= them_bg * nep_banhgiay;
        *p_ld -= them_bg * la_dong_bg;

        int them_bc_nep = *p_nd / nep_banhchuong;
        int them_bc_la = *p_ld / la_dong_bc;
        int them_bc = (them_bc_nep < them_bc_la) ? them_bc_nep : them_bc_la;

        *p_bc += them_bc;
        *p_nd -= them_bc * nep_banhchuong;
        *p_ld -= them_bc * la_dong_bc;
    }
}

int check_fibo(int n)
{
    if (n < 0)
    {
        return -1;
    }
    int a = 0, b = 1;

    while (a < n)
    {
        int temp = a;
        a = b;
        b += temp;
    }
    if (a == n)
        return 1;
    else
        return -1;
}

void Fog(int n, int dc, int dg, int *p_ld, int *p_bc, int *p_bg, float *p_nd)
{
    int check_dc = check_fibo(dc);
    int check_dg = check_fibo(dg);

    // kiem tra do dai
    if (check_dc == 1 && check_dg == 1)
    {
        dc *= 0.5;
        dg *= 0.5;
    }
    else
    {
        dc *= 2;
        dg *= 2;
    }

    float nep_banhchuong = bc(dc);
    float nep_banhgiay = bg(dg);

    int la_dong_bc = (dc < 8) ? 1 : 2;
    int la_dong_bg = (dg < 5) ? 1 : 2;

    *p_nd = (float)n;

    // tinh bc
    int bc_theo_nep = *p_nd / nep_banhchuong;
    int bc_theo_la = *p_ld / la_dong_bc;

    *p_bc = (bc_theo_nep < bc_theo_la) ? bc_theo_nep : bc_theo_la;
    *p_nd -= (*p_bc * nep_banhchuong);
    *p_ld -= (la_dong_bc * *p_bc);

    // tinh bg
    int bg_theo_nep = *p_nd / nep_banhgiay;
    int bg_theo_la = *p_ld / la_dong_bg;

    *p_bg = (bg_theo_nep < bg_theo_la) ? bg_theo_nep : bg_theo_la;
    *p_nd -= (*p_bg * nep_banhgiay);
    *p_ld -= (la_dong_bg * *p_bg);
}

int Sobanbe(int n, int ld)
{
    int sum1 = 0, sum2 = 0;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            sum1 += i;
        }
    }
    for (int j = 1; j < ld; j++)
    {
        if (ld % j == 0)
        {
            sum2 += j;
        }
    }
    if (sum1 == ld && sum2 == n)
        return 1;
    return -1;
}

void Cloud(int n, int dc, int dg, int *p_ld, int *p_bc, int *p_bg, float *p_nd)
{
    // check so ban be
    *p_nd = (float)n;
    int check_sobanbe = Sobanbe(n, *p_ld);

    if (check_sobanbe == 1)
        return;

    float nep_banhchuong = bc(dc);
    float nep_banhgiay = bg(dg);

    int la_dong_bc = (dc < 8) ? 1 : 2;
    int la_dong_bg = (dg < 5) ? 1 : 2;

    // tinh bg
    int bg_theo_nep = *p_nd / nep_banhgiay;
    int bg_theo_la = *p_ld / la_dong_bg;

    *p_bg = (bg_theo_nep < bg_theo_la) ? bg_theo_nep : bg_theo_la;
    *p_nd -= (*p_bg * nep_banhgiay);
    *p_ld -= (la_dong_bg * *p_bg);

    // tinh bc
    int bc_theo_nep = *p_nd / nep_banhchuong;
    int bc_theo_la = *p_ld / la_dong_bc;

    *p_bc = (bc_theo_nep < bc_theo_la) ? bc_theo_nep : bc_theo_la;
    *p_nd -= (*p_bc * nep_banhchuong);
    *p_ld -= (la_dong_bc * *p_bc);
}

int giatri_x(int dc, int ld)
{
    int array[5][6] = {
        {5, 7, 10, 12, 15, 20},
        {20, 5, 7, 10, 12, 15},
        {15, 20, 5, 7, 10, 12},
        {12, 15, 20, 5, 7, 10},
        {10, 12, 15, 20, 5, 7}};
    int g = dc % 6, h = ld % 5;

    return array[h][g];
}

void Sun(int n, int dc, int dg, int *p_ld, int *p_bc, int *p_bg, float *p_nd)
{
    int x = giatri_x(dc, *p_ld);

    *p_nd = n * (1 + x / 100.0);
    *p_ld = *p_ld - x;

    int thay_doi = (dc + dg) % 3;
    if (thay_doi == 0)
        Rain(*p_nd, dc, dg, p_ld, p_bc, p_bg, p_nd);
    else if (thay_doi == 1)
        Wind(*p_nd, dc, dg, p_ld, p_bc, p_bg, p_nd);
    else
        Cloud(*p_nd, dc, dg, p_ld, p_bc, p_bg, p_nd);
}

void Solieu_ketqua(FILE *f_in, FILE *f_out)
{
    // input
    int n, dc, dg, ld;
    char w[SIZE];

    // output
    int bc = 0, bg = 0;
    float nd;

    fscanf(f_in, "%d %d %d %d %s", &n, &dc, &dg, &ld, w);
    if (checkDieuKien(n, dc, dg, ld) == -1)
    {
        fprintf(f_out, "-1 -1 %d", n);
        return;
    }
    else if (strcmp(w, "Wind") == 0)
        Wind(n, dc, dg, &ld, &bc, &bg, &nd);
    else if (strcmp(w, "Rain") == 0)
        Rain(n, dc, dg, &ld, &bc, &bg, &nd);
    else if (strcmp(w, "Fog") == 0)
        Fog(n, dc, dg, &ld, &bc, &bg, &nd);
    else if (strcmp(w, "Cloud") == 0)
        Cloud(n, dc, dg, &ld, &bc, &bg, &nd);
    else if (strcmp(w, "Sun") == 0)
        Sun(n, dc, dg, &ld, &bc, &bg, &nd);
    else
        fprintf(f_out, "-1 -1 %d", n);
    fprintf(f_out, "%d %d %.3f", bc, bg, nd);
}

int main()
{
    FILE *f_in = fopen("input.inp", "r");
    FILE *f_out = fopen("output.out", "w");

    Solieu_ketqua(f_in, f_out);

    fclose(f_in);
    fclose(f_out);
    return 0;
}
