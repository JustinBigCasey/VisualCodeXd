#include <stdio.h>
#include <math.h>
#include <string.h>
#define PI 3.1415926535

void Wind(int n, int dc, int dg, int sd, char weather[], int sd_1_bc, int sd_1_bg);
void Rain(int n, int dc, int dg, int sd, char weather[], int sd_1_bc, int sd_1_bg);
void Cloud(int n, int dc, int dg, int sd, char weather[], int sd_1_bc, int sd_1_bg);
void Fog(int n, int dc, int dg, int sd, char weather[], int sd_1_bc, int sd_1_bg);
void Sun(int *n, int dc, int dg, int *sd, char weather[], int sd_1_bc, int sd_1_bg);
int soChinhPhuong(long long x);
int Fibonacci(long long n);
int TongUoc(int n);

/* n = So nep
   dc = Do dai canh banh CHUNG
   dg = Duong kinh banh GIAY
   sd = So la dong*/
int main()
{

    FILE *fin = fopen("input.txt", "r");
    FILE *fout = fopen("output.txt", "w");

    int n, dc, dg, sd;
    char weather[50];
    int sd_1_bc, sd_1_bg;
    fscanf(fin, "%d %d %d %d %s", &n, &dc, &dg, &sd, weather);
    if ((n > 2000 || n < 1) || sd < 1 || sd > 600)
    {
        fprintf(fout, "-1 -1 %d", n);
        fclose(fin);
        fclose(fout);
        return 0;
    }

    else
    {
        if (dc < 8)
        {
            sd_1_bc = 1;
        }
        else
        {
            sd_1_bc = 2;
        }
        if (dg < 5)
        {
            sd_1_bg = 1;
        }
        else
        {
            sd_1_bg = 2;
        }
        if (strcmp(weather, "Wind") == 0)
        {
            Wind(n, dc, dg, sd, weather, sd_1_bc, sd_1_bg);
        }
        else if (strcmp(weather, "Rain") == 0)
        {
            Rain(n, dc, dg, sd, weather, sd_1_bc, sd_1_bg);
        }
        else if (strcmp(weather, "Cloud") == 0)
        {
            Cloud(n, dc, dg, sd, weather, sd_1_bc, sd_1_bg);
        }
        else if (strcmp(weather, "Fog") == 0)
        {
            Fog(n, dc, dg, sd, weather, sd_1_bc, sd_1_bg);
        }
        else if (strcmp(weather, "Sun") == 0)
        {
            Sun(&n, dc, dg, &sd, weather, sd_1_bc, sd_1_bg);
        }
    }

    return 0;
}

void Wind(int n, int dc, int dg, int sd, char weather[], int sd_1_bc, int sd_1_bg)
{
    double so_nep_1_bc;
    double so_nep_1_bg;
    double nep_du;
    double nep_used = 0;
    double so_nep_con_lai;
    int sd_used = 0;
    int sd_remain;

    so_nep_1_bc = dc * dc * sqrt(dc);

    so_nep_1_bg = (dg * dg * PI) / 3;

    // Tinh Toan
    int BanhChung = 0, BanhGiay = 0;
    while (((nep_used + so_nep_1_bc <= n) && (sd_used + sd_1_bc <= sd)))
    {                                      // Neu nep_used + so_nep_1_bc > so_nep => out
        BanhChung++;                       // Banh chung tang 1
        nep_used = nep_used + so_nep_1_bc; // nep su dung tang
        nep_du = n - nep_used;
        sd_used = sd_used + sd_1_bc; // sd su dung tang
    }
    while (((nep_used + so_nep_1_bg <= n) && (sd_used + sd_1_bg <= sd)))
    {
        BanhGiay++;
        nep_used = nep_used + so_nep_1_bg; // tuong tu banh chung
        nep_du = n - nep_used;
        sd_used = sd_used + sd_1_bg;
    }
    so_nep_con_lai = n - nep_used;

    FILE *fout = fopen("output.txt", "w");
    fprintf(fout, "%d %d %.3f", BanhChung, BanhGiay, so_nep_con_lai);
    fclose(fout);
}

void Rain(int n, int dc, int dg, int sd, char weather[], int sd_1_bc, int sd_1_bg)
{
    double so_nep_1_bc;
    double so_nep_1_bg;
    double nep_du = n;
    double nep_used = 0;
    double so_nep_used;
    double so_nep_con_lai;
    int sd_used = 0;
    int sd_con_lai;

    so_nep_1_bc = dc * dc * sqrt(dc);

    so_nep_1_bg = (dg * dg * PI) / 3;

    // Tinh Toan
    int BanhChung = 0, BanhGiay = 0;
    while (((nep_used + so_nep_1_bc <= n) && (sd_used + sd_1_bc <= sd)) || ((nep_used + so_nep_1_bg <= n) && (sd_used + sd_1_bg <= sd)))
    {
        if ((nep_used + so_nep_1_bg <= n) && (sd_used + sd_1_bg <= sd))
        {
            // Kiểm tra xem có đúng yêu cầu đề bài và không để vượt quá số lá dong
            BanhGiay++;
            nep_used = nep_used + so_nep_1_bg;
            sd_used = sd_used + sd_1_bg;
        }
        if ((nep_used + so_nep_1_bc <= n) && (sd_used + sd_1_bc <= sd))
        {
            BanhChung++;
            nep_used = nep_used + so_nep_1_bc;
            sd_used = sd_used + sd_1_bc;
        }
    }
    so_nep_con_lai = n - nep_used;
    sd_con_lai = sd - sd_used;

    FILE *fout = fopen("output.txt", "w");
    fprintf(fout, "%d %d %.3f", BanhChung, BanhGiay, so_nep_con_lai);
    fclose(fout);
}

// Cloud
int TongUoc(int n)
{ // lý thuyết: Số bạn bè là tổng ước của số này bằng số kia
    int sum = 0;
    int i; // tính tổng ước
    for (i = 1; i <= n / 2; i++)
    {
        if (n % i == 0)
        {                  // tổng ước là tổng các số nguyên
            sum = sum + i; // mà số đó chia hết
        }
    }
    return sum;
}

void Cloud(int n, int dc, int dg, int sd, char weather[], int sd_1_bc, int sd_1_bg)
{
    int sumNep = TongUoc(n);
    int sumSD = TongUoc(sd);
    double so_nep_1_bc;
    double so_nep_1_bg;
    int sd_used = 0;
    double nep_used = 0;
    double nep_du;
    double so_nep_con_lai;

    so_nep_1_bc = dc * dc * sqrt(dc);

    so_nep_1_bg = (dg * dg * PI) / 3;

    FILE *fout = fopen("output.txt", "w");
    if (sumNep == sd && sumSD == n)
    { // Tổng ước của nếp = số lá dong và tổng ước số la dong = nếp
        fprintf(fout, "0 0 %.3f", (double)n);
    }
    else
    { // VD 500 10 5 20 Cloud
        int BanhChung = 0, BanhGiay = 0;
        while (((nep_used + so_nep_1_bg <= n) && (sd_used + sd_1_bg <= sd)))
        {
            BanhGiay++;
            nep_used = nep_used + so_nep_1_bg;
            nep_du = n - nep_used;
            sd_used = sd_used + sd_1_bg;
        }
        while (((nep_used + so_nep_1_bc <= n) && (sd_used + sd_1_bc <= sd)))
        {
            BanhChung++;
            nep_used = nep_used + so_nep_1_bc;
            nep_du = n - nep_used;
            sd_used = sd_used + sd_1_bc;
        }
        so_nep_con_lai = n - nep_used;

        fprintf(fout, "%d %d %.3f", BanhChung, BanhGiay, so_nep_con_lai);
        fclose(fout);
    }
}

// Fog
int soChinhPhuong(long long x)
{                                     // Kiem tra so chinh phuong x
    long long s = (long long)sqrt(x); // x là gí trị để n được truyền vào
    return (s * s == x);              // VD: n = 8 = > x = 324
                                      // s = 18 => return (18*18 == 324) => return 1
}
int Fibonacci(long long n)
{
    return soChinhPhuong(5 * n * n + 4) || soChinhPhuong(5 * n * n - 4); // 1 trong 2 thoa => return 1;
}
void Fog(int n, int dc, int dg, int sd, char weather[], int sd_1_bc, int sd_1_bg)
{
    if (Fibonacci(dc) && Fibonacci(dg))
    {
        dc = dc / 2.0;
        dg = dg / 2.0;
    }
    else
    {
        dc = dc * 2;
        dg = dg * 2;
    }
    double so_nep_1_bc;
    double so_nep_1_bg;
    double nep_du;
    double nep_used = 0;
    double so_nep_con_lai;
    int sd_used = 0;
    int sd_remain;

    so_nep_1_bc = dc * dc * sqrt(dc);

    so_nep_1_bg = (dg * dg * PI) / 3;

    // Tinh Toan
    int BanhChung = 0, BanhGiay = 0;
    while (((nep_used + so_nep_1_bc <= n) && (sd_used + sd_1_bc <= sd)))
    {
        BanhChung++;
        nep_used = nep_used + so_nep_1_bc;
        nep_du = n - nep_used;
        sd_used = sd_used + sd_1_bc;
    }
    while (((nep_used + so_nep_1_bg <= n) && (sd_used + sd_1_bg <= sd)))
    {
        BanhGiay++;
        nep_used = nep_used + so_nep_1_bg;
        nep_du = n - nep_used;
        sd_used = sd_used + sd_1_bg;
    }
    so_nep_con_lai = n - nep_used;

    FILE *fout = fopen("output.txt", "w");
    fprintf(fout, "%d %d %.3f", BanhChung, BanhGiay, so_nep_con_lai);
    fclose(fout);
}

// sun
void Sun(int *n, int dc, int dg, int *sd, char weather[], int sd_1_bc, int sd_1_bg)
{
    int X[5][6] = {
        {5, 7, 10, 12, 15, 20},
        {20, 5, 7, 10, 12, 15},
        {15, 20, 5, 7, 10, 12},
        {12, 15, 20, 5, 7, 10},
        {10, 12, 15, 20, 5, 7},
    };
    int g, h;
    g = dc % 6;
    h = (*sd) % 5;
    int x = X[h][g];
    *n = (int)(*n * (1.0 + (float)x / 100.0));
    *sd = *sd - x;
    if (*sd < 0)
    {
        *sd = 0;
    }
    if ((dc + dg) % 3 == 0)
        strcpy(weather, "Rain");
    if ((dc + dg) % 3 == 1)
        strcpy(weather, "Wind");
    if ((dc + dg) % 3 == 2)
        strcpy(weather, "Cloud");

    if (strcmp(weather, "Cloud") == 0)
    {
        Cloud(*n, dc, dg, *sd, weather, sd_1_bc, sd_1_bg);
    }
    else if (strcmp(weather, "Rain") == 0)
    {
        Rain(*n, dc, dg, *sd, weather, sd_1_bc, sd_1_bg);
    }
    else if (strcmp(weather, "Wind") == 0)
    {
        Wind(*n, dc, dg, *sd, weather, sd_1_bc, sd_1_bg);
    }
}
