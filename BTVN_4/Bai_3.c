#include <stdio.h>
#include <math.h>

int main()
{
    int n, a[101], i, j;

    do
    {
        printf("Nhap n = ");
        scanf("%d", &n);
    } while (n <= 0 || n >= 100);

    for (i = 0; i < n; i++)
    {
        printf("Nhap a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    // ý a: Đếm và in ra các số chính phương trong mảng. Các số chính phương là các số căn bậc 2 của nó là số nguyên.
    int count = 0;

    // printf("y a\n");
    for (i = 0; i < n; i++)
    {
        int temp = sqrt(a[i]);
        if (temp * temp == a[i])
            count++;
    }

    if (count == 0)
        printf("0\n");
    else
    {
        printf("%d\n", count);
        for (i = 0; i < n; i++)
        {
            int temp = sqrt(a[i]);
            if (temp * temp == a[i])
                printf("%d ", a[i]);
        }
    }

    // ý b: Đếm và in ra các số hoàn hảo trong mảng. Số hoàn hảo là số mà tổng các ước bằng 2 lần chính nó.
    int count2 = 0;

    // printf("\ny b\n");
    for (i = 0; i < n; i++)
    {
        int sum = 0;
        for (j = 1; j <= a[i]; j++)
            if (a[i] % j == 0)
                sum += j;

        if (sum == 2 * a[i])
            count2++;
    }

    if (count2 == 0)
        printf("0\n");
    else
    {
        printf("%d\n", count2);
        for (i = 0; i < n; i++)
        {
            int sum = 0;
            for (j = 1; j <= a[i]; j++)
                if (a[i] % j == 0)
                    sum += j;

            if (sum == 2 * a[i])
                printf("%d ", a[i]);
        }
    }

    return 0;
}