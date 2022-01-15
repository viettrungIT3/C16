#include <iostream>
#include <math.h>
using namespace std;

void NhapMang(int a[], int n)
{
    // cout << "Nhap vao mang " << n << " so nguyen" << endl;
    for (int i = 0; i < n; i++)
    {
        // cout << "  Nhap a[" << i << "] = ";
        cin >> a[i];
    }
}

void XuatMang(int a[], int n)
{
    // cout << "Mang vua nhap la: ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}

void SapXepT(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

void SapXepG(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] < a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

int main()
{
    int n;

    // cout << "Nhap so nguyen n = ";
    do
    {
        cin >> n;
        if (n < 3 || n > 50)
        {
            cout << "Nhap lai so nguyen duong n = ";
        }

    } while (n < 3 || n > 50);

    int a[n + 5];

    NhapMang(a, n);

    // cout << "\nMang vua nhap la: ";
    // XuatMang(a, n);

    SapXepT(a, n);
    // cout << "\nMang sau khi sap xep la: ";
    // XuatMang(a, n);

    int vtD = 0, i = 0;
    while (true)
    {
        if(a[i] >= 0)
        {
            vtD = i;
            break;
        }   
        i++;
    }

    SapXepG(a, vtD);
    // cout << "\nMang sau khi sap xep la: ";
    XuatMang(a, n);
    
    return 0;
}