#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

void Input(int &n)
{
    do
    {
        cout << "Nhap so nguyen duong n = ";
        cin >> n;
    } while (n <= 0 || n >= 100);
}

void InputArr(int a[], int n)
{
    cout << "Nhap vao mang " << n << " so nguyen: ";
    for (int i = 0; i < n; i++)
    {
        // cout << "  Nhap a[" << i << "] = ";
        cin >> a[i];
    }
}

void OutputArr(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

bool IsPrime(int n)
{
    if (n < 2)
        return false;

    for (int i = 2; i * i <= n; i++)
        if (n % i == 0)
            return false;

    return true;
}

bool IsSuperPrimeNumber(int n)
{
    if (!IsPrime(n))
        return false;
    else
    {
        while (n > 0)
        {
            int temp = n % 10;
            if (!IsPrime(temp))
            {
                return false;
            }
            n /= 10;
        }
    }

    return true;
}

bool IsSquareNumber(int n)
{
    int sqr = sqrt(n);
    if (sqr * sqr == n)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int CountSquareNumberArray(int a[], int n)
{

    int countS = 0;
    for (int i = 0; i < n; i++)
        if (IsSquareNumber(a[i]))
            countS++;

    return countS;
}

float AVGSquareNumberArray(int a[], int n)
{

    int countS = 0;
    float sumS = 0;
    for (int i = 0; i < n; i++)
        if (IsSquareNumber(a[i]))
        {
            countS++;
            sumS += a[i];
        }

    return 1.0 * sumS / countS;
}

void Insert(int a[], int &n, int val, int pos)
{
    for (int i = n; i > pos; i--)
    {
        a[i] = a[i - 1];
    }

    a[pos] = val;

    n++;
}

void InsertK(int a[], int &n, int k)
{
    for (int i = 0; i < n; i++)
    {
        if (IsPrime(a[i]))
        {
            Insert(a, n, k, i);
            i++;
        }
    }
}

void Delete(int a[], int &n, int pos)
{
    for (int i = pos; i < n - 1; i++)
    {
        a[i] = a[i + 1];
    }
    n--;
}

void DeleteSuperPrimeNumber(int a[], int &n)
{
    for (int i = 0; i < n; i++)
    {
        if ( IsSuperPrimeNumber(a[i]))
        {
            Delete(a, n, i);
            i--;
        }
    }
}

int main(int argc, char const *argv[])
{
    int n, a[100], k;

    Input(n);
    InputArr(a, n);

    cout << "Mang vua nhap la: ";
    OutputArr(a, n);

    int countS = CountSquareNumberArray(a, n);
    if (countS == 0)
        cout << "NO" << endl;
    else
    {
        cout << "So so chinh phuong co trong mang la: ";
        cout << countS << endl;

        cout << "Trung binh cong cua cac so chinh phuong la: ";
        cout << AVGSquareNumberArray(a, n) << endl;
    }

    do
    {
        cout << "Nhap so nguyen(khong la so nguyen to) k = ";
        cin >> k;
    } while (IsPrime(k));

    InsertK(a, n, k);
    cout << "Mang sau khi chen ... : ";
    OutputArr(a, n);

    DeleteSuperPrimeNumber(a, n);
    cout << "Mang sau khi xoa ... : ";
    OutputArr(a, n);

    return 0;
}
