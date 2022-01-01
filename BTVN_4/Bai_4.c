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

    float maxArr = a[0];
    for (i = 0; i < n; i++)
        if (maxArr < a[i])
            maxArr = a[i];

    for (i = 0; i < n; i++)
        if (maxArr == a[i])
            printf("%d ", i + 1);

    return 0;
}