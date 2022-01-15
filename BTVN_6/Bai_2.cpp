#include <iostream>
#include <math.h>
using namespace std;

bool isPrime(int n)
{
    if (n < 2)
        return false;

    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;

    return true;
}

int main()
{
    int n;

    // cout << "Nhap so nguyen n = ";
    do
    {
        cin >> n;
        if (n <= 0)
        {
            cout << "Nhap lai so nguyen duong n = ";
        }

    } while (n <= 0);

    int count = 0, temp1 = n;
    while (temp1 > 0)
    {
        int temp2 = temp1 % 10;
        if (isPrime(temp2))
            count++;

        temp1 /= 10;
    }

    // cout << "So cac chu so nguyen so: ";
    cout << count << endl;

    temp1 = n;
    // cout << "Cac chu so la so nguyen to: ";
    if (count > 0)
    {
        while (temp1 > 0)
        {
            int temp2 = temp1 % 10;
            if (isPrime(temp2))
                cout << temp2 << " ";

            temp1 /= 10;
        }
    }

    return 0;
}