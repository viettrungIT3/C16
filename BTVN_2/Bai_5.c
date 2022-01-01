#include <stdio.h>

int main()
{
    int n, m;

    printf("Nhap so nam N = ");
    scanf("%d", &n);
    printf("Nhap so thang M = ");
    scanf("%d", &m);

    if (m >= 1 && m <= 12 && n >= 0)
    {
        if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
        {
            printf("Thang %d co 31 ngay", m);
        }
        else if (m == 4 || m == 6 || m == 9 || m == 11)
        {
            printf("Thang %d co 30 ngay", m);
        }
        else
        {
            if (n % 4 == 0 && n % 100 != 0 || n % 400 == 0)
            {
                printf("Thang %d co 29 ngay", m);
            }
            else
            {
                printf("Thang %d co 28 ngay", m);
            }
        }
    }
    else
        printf("Khong thoa man dau bai");
}
