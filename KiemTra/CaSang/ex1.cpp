#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

void Nhap(int &n, float &x)
{
    do
    {
        cout << "Nhap so nguyen duong n = ";
        cin >> n;
    } while (n <= 0);

    cout << "Nhap x = ";
    cin >> x;
}

float Pow(float x, int n)
{
    float p = 1;
    for (int i = 1; i <= n; i++)
    {
        p *= x;
    }

    return p;
}

float Result(float x, int n)
{
    float s = 0;

    if (n % 2 == 1)
    {
        float x1 = x + 1;
        for (int i = 1; i <= n; i++)
        {
            s += Pow(x1, i);
        }
        s += sqrt(2022);
    }
    else
    {
        s = log(x) / log(n) + sqrt( 1808.0 * exp(x));
    }

    return s;
}

int main()
{
    int n;
    float x;

    Nhap( n, x);

    cout << "Gia tri bieu thuc: S(" << x << ", " << n << ") = ";
    cout << fixed << setprecision(4) << Result( x, n) << endl;

    return 0;
}
