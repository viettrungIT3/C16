#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

double L(int n, float x)
{
    double l = 0;
    if (n % 2 == 0)
        l = fabs( log(x) / log(2) + exp(n) + 2021);
    else
    {
        double tu = -1;
        double mau = 1.0;
        for (int i = 1; i <= n; i++)
        {
            tu += 2 ;
            mau *= x;
            l += tu/mau;
        }   
        l += 2021;
    }

    return l;
}

int main(int argc, char const *argv[])
{
    int n;
    double x, l = 0;

    // cout << "Nhap so nguyen n = ";
    cin >> n;
    // cout << "Nhap so thuc x = ";
    cin >> x;

    // if (n % 2 == 0)
    //     l = fabs( log(x) / log(2) + exp(n) + 2021);
    // else
    // {
    //     float tu = -1;
    //     float mau = 1.0;
    //     for (int i = 1; i <= n; i++)
    //     {
    //         tu += 2 ;
    //         mau *= x;
    //         l += tu/mau;
    //     }   
    //     l += 2021;
    // }


    // cout << " Ket qua = " << setprecision(4) << fixed << l;
    // cout << " Ket qua = ";
    cout << setprecision(4) << fixed << L( n, x);

    return 0;
}
