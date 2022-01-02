#include <stdio.h>
#include <math.h>

int main()
{
    int n, a[101], i, j;

    do
    {
        // printf("Nhap n = ");
        scanf("%d", &n);
    } while (n <= 0 || n >= 100);

    for (i = 0; i < n; i++)
    {
        // printf("Nhap a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    // ý a: Đếm và in ra các số chính phương trong mảng. Các số chính phương là các số căn bậc 2 của nó là số nguyên.
    int count = 0;

    // 9 => sqrt(9) = 3
    // 8 => sqrt(8) = 2.

    // printf("y a\n");
    for (i = 0; i < n; i++)
    {
        if (a[i] != 0)
        {
            int temp = sqrt(a[i]);
            if (temp * temp == a[i])
                count++;
        }
    }

    if (count == 0)
        printf("Khong co SCP nao trong mang\n");
    else
    {
        printf("Co %d SCP  trong mang\n", count);
        printf("Cac SCP do la: ");
        for (i = 0; i < n; i++)
        {
            if (a[i] != 0)
            {
                int temp = sqrt(a[i]);
                if (temp * temp == a[i])
                    printf("%d ", a[i]);
            }
        }
    }

    return 0;
}