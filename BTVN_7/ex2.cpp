#include <iostream>
#include <iomanip>
using namespace std;

// Nhap mang
void InputArr(int a[], int &n)
{
    do
    {
        cout << "Nhap so phan tu mang(1<= n < 100): ";
        cin >> n;

    } while (n <= 0 || n > 100);

    cout << "Nhap " << n << " so nguyen: ";
    for (int i = 0; i < n; i++)
    {
        cout << "  Nhap a[" << i << "] = ";
        cin >> a[i];
    }
}

// Xuat mang
void OutPutArr(int a[], int n)
{
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    cout << endl;
}

// Nhap x
void InputX(int &x)
{
    cout << "Nhap so nguyen x: ";
    cin >> x;
}

bool isPrime(int n)
{
    if (n < 2)
        return false;

    for (int i = 2; i * i <= n; i++)
        if (n % i == 0)
            return false;

    return true;
}

// Ham chen
void Insert(int a[], int &n, int val, int pos)
{
    // Dich chuyen mang de tao o trong truoc khi them.
    for (int i = n; i > pos; i--)
        a[i] = a[i - 1];

    // Chen val tai pos
    a[pos] = val;
    // Tang so luong phan tu sau khi chen.
    ++n;
}

// Ham xoa
void Delete(int a[], int &n, int pos)
{
    // Dich chuyen mang
    for (int i = pos; i < n - 1; i++)
        a[i] = a[i + 1];

    // Giam so luong phan tu sau khi xoa.
    --n;
}

// Ham chen x vao sau tat ca cac so nguyen to nho hon 10
void Function1(int a[], int &n, int x)
{
    if (isPrime(x) && x < 10)
        cout << "Khong thuc hien chen do x la so nguyen to nho hon 10" << endl;
    else
    {
        for (int i = 0; i < n; i++)
            if (isPrime(a[i]) && a[i] < 10)
            {
                Insert(a, n, x, i + 1);
                // i--;
            }
        cout << "Mang sau khi chen x vao sau tat ca cac so nguyen to nho hon 10: ";
        OutPutArr(a, n);
    }
}

// Ham xoa tat ca cac so chia het cho 3 nhung khong chia het cho 5
void Function2(int a[], int &n)
{
    for (int i = 0; i < n; i++)
        if (a[i] % 3 == 0 && a[i] % 5 != 0)
        {
            Delete(a, n, i);
            i--;
        }

    cout << "Mang sau khi xoa tat ca cac so chia het cho 3 nhung khong chia het cho 5: ";
    OutPutArr(a, n);
}

// Ham xoa cac phan tu trung lap sao ch moi so chi xuat hien duy nhat 1 lan trong mang
void Function3(int a[], int &n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] == a[j])
            {
                Delete(a, n, j);
                j--;
            }
        }
    }
    cout << "Mang sau khi xoa cac phan tu trung lap: ";
    OutPutArr(a, n);
}

int main(int argc, char const *argv[])
{
    int a[100], n, x;

    InputArr(a, n);
    InputX(x);

    // cout << "Mang ban dau: ";
    // OutPutArr(a, n);

    Function1(a, n, x);
    Function2(a, n);
    Function3(a, n);

    return 0;
}
