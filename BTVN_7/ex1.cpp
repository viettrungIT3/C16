#include <iostream>
#include <iomanip>
using namespace std;

// Ham nhap
void Nhap(float &x, int &n)
{
    cout << "Nhap x: ";
    cin >> x;
    cout << "Nhap n(n>=0): ";
    do
    {
        cin >> n;
        if (n < 0)
        {
            cout << "Nhap lai n(n>=0): ";
        }

    } while (n < 0);
}

// Ham tinh toan
float Tinh(float x, int n)
{
    float l, luyThua, capSoCong, giaiThua;

    if (n % 2 == 1)
    {
        // Cong thuc 2
        l = 2022.0;
        luyThua = 1.0;
        capSoCong = 0;

        for (int i = 1; i <= n; i++)
        {
            luyThua *= x;   // Tang x lan sau moi vong lap
            capSoCong += i; // Tang them i gia tri sau moi vong lap
            l += (luyThua + 2 * i) / capSoCong;
        }
    }
    else
    {
        // Cong thuc 1
        l = 2021.0;
        luyThua = 1.0;
        giaiThua = 1.0;

        for (int i = 1; i <= n; i++)
        {
            luyThua *= x;   // Tang x lan sau moi vong lap
            giaiThua *= i;  // Tang i lan sau moi vong lap
            l += (luyThua + 2 * i) / giaiThua;
        }
    }

    return l;
}

int main(int argc, char const *argv[])
{
    int n;
    float x;

    Nhap(x, n);

    cout << fixed << setprecision(4) << Tinh(x, n);

    return 0;
}
