#include <stdio.h>

int main()
{
    int n, i, j;
    float a[101];

    do
    {
        printf("Nhap n = ");
        scanf("%d", &n);
    } while (n <= 0 || n >= 100);

    for (i = 0; i < n; i++)
    {
        printf("Nhap a[%d] = ", i);
        scanf("%f", &a[i]);
    }

    for (i = 0; i < n; i++)
        if (a[i] < 0)
        {
            for (int j = 0; j < n; j++)
                if (a[i] > a[j])
                {
                    int temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
        }

    printf("\nMang sau khi sap xep la: ");
    for (i = 0; i < n; i++)
        printf("%f ", a[i]);

    return 0;
}