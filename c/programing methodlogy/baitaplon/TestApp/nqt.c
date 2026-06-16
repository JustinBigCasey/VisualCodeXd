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
    float nep_bc = bc(dc);
    float nep_bg = bg(dg);
    int la_bc = (dc < 8) ? 1 : 2;
    int la_bg = (dg < 5) ? 1 : 2;

    int bc1 = n / nep_bc;
    if (bc1 > *p_ld / la_bc)
        bc1 = *p_ld / la_bc;
    float nd1_temp = n - (bc1 * nep_bc);

    int ld1_temp = *p_ld - (bc1 * la_bc);

    int bg1 = nd1_temp / nep_bg;
    if (bg1 > ld1_temp / la_bg)
        bg1 = ld1_temp / la_bg;
    float nd1 = nd1_temp - (bg1 * nep_bg);

    int best_bc = bc1;
    int best_bg = bg1;
    float best_nd = nd1;

    int max_bc_theo_nep = n / nep_bc;
    int max_bc_theo_la = *p_ld / la_bc;

    if (nep_bg > nep_bc && max_bc_theo_la < max_bc_theo_nep)
    {
        int bg2 = n / nep_bg;
        if (bg2 > *p_ld / la_bg)
            bg2 = *p_ld / la_bg;
        float nd2_temp = n - (bg2 * nep_bg);

        int ld2_temp = *p_ld - (bg2 * la_bg);

        int bc2 = nd2_temp / nep_bc;
        if (bc2 > ld2_temp / la_bc)
            bc2 = ld2_temp / la_bc;
        float nd2 = nd2_temp - (bc2 * nep_bc);

        if (nd2 < nd1)
        {
            best_bc = bc2;
            best_bg = bg2;
            best_nd = nd2;
        }
    }

    *p_bc = best_bc;
    *p_bg = best_bg;
    *p_nd = best_nd;
    *p_ld -= (best_bc * la_bc + best_bg * la_bg);
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
    *p_bc = 0;
    *p_bg = 0;

    if (nep_banhchuong > nep_banhgiay)
    {
        if (nep_banhchuong > 0)
        {
            int bc_theo_nep = *p_nd / nep_banhchuong;
            int bc_theo_la = *p_ld / la_dong_bc;
            *p_bc = (bc_theo_nep < bc_theo_la) ? bc_theo_nep : bc_theo_la;
            *p_nd -= (*p_bc * nep_banhchuong);
            *p_ld -= (la_dong_bc * *p_bc);
        }

        if (nep_banhgiay > 0)
        {
            int bg_theo_nep = *p_nd / nep_banhgiay;
            int bg_theo_la = *p_ld / la_dong_bg;
            *p_bg = (bg_theo_nep < bg_theo_la) ? bg_theo_nep : bg_theo_la;
            *p_nd -= (*p_bg * nep_banhgiay);
            *p_ld -= (la_dong_bg * *p_bg);
        }
    }
    else
    {
        if (nep_banhgiay > 0)
        {
            int bg_theo_nep = *p_nd / nep_banhgiay;
            int bg_theo_la = *p_ld / la_dong_bg;
            *p_bg = (bg_theo_nep < bg_theo_la) ? bg_theo_nep : bg_theo_la;
            *p_nd -= (*p_bg * nep_banhgiay);
            *p_ld -= (la_dong_bg * *p_bg);
        }

        if (nep_banhchuong > 0)
        {
            int bc_theo_nep = *p_nd / nep_banhchuong;
            int bc_theo_la = *p_ld / la_dong_bc;
            *p_bc = (bc_theo_nep < bc_theo_la) ? bc_theo_nep : bc_theo_la;
            *p_nd -= (*p_bc * nep_banhchuong);
            *p_ld -= (la_dong_bc * *p_bc);
        }
    }
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
    if (Sobanbe(n, *p_ld) == 1)
    {
        *p_bc = 0;
        *p_bg = 0;
        return;
    }

    float nep_bc = bc(dc);
    float nep_bg = bg(dg);
    int la_bc = (dc < 8) ? 1 : 2;
    int la_bg = (dg < 5) ? 1 : 2;

    // KỊCH BẢN 1: Làm theo ý Vua (Ưu tiên Bánh Giầy)
    int bg1 = n / nep_bg;
    if (bg1 > *p_ld / la_bg)
        bg1 = *p_ld / la_bg;
    float nd1_temp = n - (bg1 * nep_bg);

    int ld1_temp = *p_ld - (bg1 * la_bg);

    int bc1 = nd1_temp / nep_bc;
    if (bc1 > ld1_temp / la_bc)
        bc1 = ld1_temp / la_bc;
    float nd1 = nd1_temp - (bc1 * nep_bc);

    int best_bc = bc1;
    int best_bg = bg1;
    float best_nd = nd1;

    int max_bg_theo_nep = n / nep_bg;
    int max_bg_theo_la = *p_ld / la_bg;

    if (nep_bc > nep_bg && max_bg_theo_la < max_bg_theo_nep)
    {
        int bc2 = n / nep_bc;
        if (bc2 > *p_ld / la_bc)
            bc2 = *p_ld / la_bc;
        float nd2_temp = n - (bc2 * nep_bc);

        int ld2_temp = *p_ld - (bc2 * la_bc);

        int bg2 = nd2_temp / nep_bg;
        if (bg2 > ld2_temp / la_bg)
            bg2 = ld2_temp / la_bg;
        float nd2 = nd2_temp - (bg2 * nep_bg);

        if (nd2 < nd1)
        {
            best_bc = bc2;
            best_bg = bg2;
            best_nd = nd2;
        }
    }

    *p_bc = best_bc;
    *p_bg = best_bg;
    *p_nd = best_nd;
    *p_ld -= (best_bc * la_bc + best_bg * la_bg);
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
    {
        fprintf(f_out, "-1 -1 %d", n);
        return;
    }

    fprintf(f_out, "%d %d %.3f", bc, bg, nd);
}

int main()
{
    FILE *f_in = fopen("input.txt", "r");
    FILE *f_out = fopen("output.txt", "w");

    Solieu_ketqua(f_in, f_out);

    fclose(f_in);
    fclose(f_out);
    return 0;
}
