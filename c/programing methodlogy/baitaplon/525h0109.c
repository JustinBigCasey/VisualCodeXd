#include <stdio.h>
#include <string.h>
#include <math.h>

#define PI 3.1415926535

double nepBanhChung(int dc);
double nepBanhGiay(int dg);
int soLaBanhChung(int dc);
int soLaBanhGiay(int dg);
int Fibo(long long n);
int tongUoc(int n);
void inputLoi(int n, int sd);
void output(int bc, int bg, double nd);
void lamBanh(int *b, double *nepDung, int *laDung, double nep, int la, int n, int lg);
void Wind(int n, int dc, int dg, int lg);
void Rain(int n, int dc, int dg, int lg);
void Sun(int n, int dc, int dg, int lg);
void Fog(int n, int dc, int dg, int lg);
void Cloud(int n, int dc, int dg, int lg);

int main()
{
    int n, dc, dg, ld; // n: so nep / dc: do dai canh / dg: duong kinh / ld: la dong /
    char w[10];        // w: thoi tiet /

    FILE *fin = fopen("input.txt", "r");
    if (fin == NULL)
        return 1;

    fscanf(fin, "%d %d %d %d %s", &n, &dc, &dg, &ld, w);
    fclose(fin);

    // check input khong hop le
    if ((n > 2000 || n < 1) || ld < 1 || ld > 600 || dc < 0 || dg < 0 || (dc == 0 && dg == 0))
    {
        inputLoi(n, ld);
        return 0;
    }

    // check thoi tiet
    if (strcmp(w, "Wind") == 0)
        Wind(n, dc, dg, ld);

    else if (strcmp(w, "Rain") == 0)
        Rain(n, dc, dg, ld);

    else if (strcmp(w, "Sun") == 0)
        Sun(n, dc, dg, ld);

    else if (strcmp(w, "Fog") == 0)
        Fog(n, dc, dg, ld);

    else if (strcmp(w, "Cloud") == 0)
        Cloud(n, dc, dg, ld);

    else
    {
        inputLoi(n, ld);
        return 0;
    }

    return 0;
}

double nepBanhChung(int dc)
{
    return pow(dc, 2) * sqrt(dc);
}

double nepBanhGiay(int dg)
{
    return (pow(dg, 2) * PI) / 3;
}

int soLaBanhChung(int dc)
{
    return (dc < 8) ? 1 : 2;
}

int soLaBanhGiay(int dg)
{
    return (dg < 5) ? 1 : 2;
}

int Fibo(long long n)
{
    long long a = (long long)(sqrt(5.0 * n * n + 4) + 0.5);
    long long b = (long long)(sqrt(5.0 * n * n - 4) + 0.5);

    return (a * a == 5 * n * n + 4) || (b * b == 5 * n * n - 4);
}

int tongUoc(int n)
{
    if (n <= 1)
        return 0;

    int sum = 1;

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            sum += i;
            if (i != n / i)
                sum += n / i;
        }
    }

    return sum;
}

void inputLoi(int n, int sd)
{
    FILE *fout = fopen("output.txt", "w");
    fprintf(fout, "-1 -1 %d", n);
    fclose(fout);
}

void output(int bc, int bg, double nd)
{
    FILE *fout = fopen("output.txt", "w");
    fprintf(fout, "%d %d %.3f", bc, bg, nd);
    fclose(fout);
}

void lamBanh(int *b, double *nepDung, int *laDung, double nep, int la, int n, int lg)
{
    while (*nepDung + nep <= n && *laDung + la <= lg)
    {
        (*b)++;
        *nepDung += nep;
        *laDung += la;
    }
}

// WIND: cang nhieu banh cang tot
void Wind(int n, int dc, int dg, int lg)
{
    int bc = 0, bg = 0;         // bc: banh chung / bg: banh giay
    double nepDung = 0, nd = 0; // nepDung: so nep da su dung / nd: so nep du
    int laDung = 0;             // laDung: so la da su dung

    double nepChung = nepBanhChung(dc);
    double nepGiay = nepBanhGiay(dg);
    int laChung = soLaBanhChung(dc);
    int laGiay = soLaBanhGiay(dg);

    lamBanh(&bc, &nepDung, &laDung, nepChung, laChung, n, lg);
    lamBanh(&bg, &nepDung, &laDung, nepGiay, laGiay, n, lg);

    nd = n - nepDung;

    output(bc, bg, nd);
}

// RAIN: 2 banh can bang nhau
void Rain(int n, int dc, int dg, int lg)
{
    int bc = 0, bg = 0;         // bc: banh chung / bg: banh giay
    double nepDung = 0, nd = 0; // nepDung: so nep da su dung / nd: so nep du
    int laDung = 0;             // laDung: so la da su dung

    double nepChung = nepBanhChung(dc);
    double nepGiay = nepBanhGiay(dg);
    int laChung = soLaBanhChung(dc);
    int laGiay = soLaBanhGiay(dg);

    // khong rang buoc do dai canh
    if (dc == 0)
    {
        while (nepDung + nepGiay <= n && laDung + laGiay <= lg)
        {
            bg++;
            nepDung += nepGiay;
            laDung += laGiay;
        }
    }

    // khong rang buoc duong kinh
    else if (dg == 0)
    {
        while (nepDung + nepChung <= n && laDung + laChung <= lg)
        {
            bc++;
            nepDung += nepChung;
            laDung += laChung;
        }
    }

    // tinh binh thuong
    else
    {
        while ((nepDung + nepChung <= n && laDung + laChung <= lg) ||
               (nepDung + nepGiay <= n && laDung + laGiay <= lg))
        {
            if (nepDung + nepGiay <= n && laDung + laGiay <= lg)
            {
                bg++;
                nepDung += nepGiay;
                laDung += laGiay;
            }

            if (nepDung + nepChung <= n && laDung + laChung <= lg)
            {
                bc++;
                nepDung += nepChung;
                laDung += laChung;
            }
        }
    }

    nd = n - nepDung;

    output(bc, bg, nd);
}

// SUN: thay doi nep va la va thoi tiet
void Sun(int n, int dc, int dg, int lg)
{
    int X[5][6] = {
        {5, 7, 10, 12, 15, 20},
        {20, 5, 7, 10, 12, 15},
        {15, 20, 5, 7, 10, 12},
        {12, 15, 20, 5, 7, 10},
        {10, 12, 15, 20, 5, 7},
    };

    int g = dc % 6;
    int h = lg % 5;

    int x = X[h][g];

    // thay doi nep va la
    n = (int)(n * (1 + x / 100.0));
    lg = (lg - x < 0) ? 0 : lg - x;

    int t = (dc + dg) % 3;

    // thay doi thoi tiet
    if (t == 0)
        Rain(n, dc, dg, lg);

    else if (t == 1)
        Wind(n, dc, dg, lg);

    else
        Cloud(n, dc, dg, lg);
}

// FOG: Fibo giam nep va la, nguoc lai tang
void Fog(int n, int dc, int dg, int lg)
{
    if (Fibo(dc) && Fibo(dg))
    {
        dc = dc / 2;
        dg = dg / 2;
    }

    else
    {
        dc = dc * 2;
        dg = dg * 2;
    }

    int bc = 0, bg = 0;         // bc: banh chung / bg: banh giay
    double nepDung = 0, nd = 0; // nepDung: so nep da su dung / nd: so nep du
    int laDung = 0;             // laDung: so la da su dung

    double nepChung = nepBanhChung(dc);
    double nepGiay = nepBanhGiay(dg);
    int laChung = soLaBanhChung(dc);
    int laGiay = soLaBanhGiay(dg);

    if (nepChung > nepGiay)
    {
        lamBanh(&bc, &nepDung, &laDung, nepChung, laChung, n, lg);
        lamBanh(&bg, &nepDung, &laDung, nepGiay, laGiay, n, lg);
    }

    else
    {
        lamBanh(&bg, &nepDung, &laDung, nepGiay, laGiay, n, lg);
        lamBanh(&bc, &nepDung, &laDung, nepChung, laChung, n, lg);
    }

    nd = n - nepDung;
    output(bc, bg, nd);
}

// CLOUD: so dong ban be va nhieu banh giay nhat
void Cloud(int n, int dc, int dg, int lg)
{
    // kiem tra so ban be
    if (tongUoc(n) == lg && tongUoc(lg) == n)
    {
        output(0, 0, (double)n);
        return;
    }

    // tinh binh thuong
    int bc = 0, bg = 0;         // bc: banh chung / bg: banh giay
    double nepDung = 0, nd = 0; // nepDung: so nep da su dung / nd: so nep du
    int laDung = 0;             // laDung: so la da su dung

    double nepChung = nepBanhChung(dc);
    double nepGiay = nepBanhGiay(dg);
    int laChung = soLaBanhChung(dc);
    int laGiay = soLaBanhGiay(dg);

    lamBanh(&bg, &nepDung, &laDung, nepGiay, laGiay, n, lg);
    lamBanh(&bc, &nepDung, &laDung, nepChung, laChung, n, lg);

    nd = n - nepDung;

    output(bc, bg, nd);
}
