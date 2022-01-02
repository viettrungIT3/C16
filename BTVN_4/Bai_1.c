#include <stdio.h>
#include <stdlib.h>

int main()
{
    // dieu kien nhap
    int n;
    printf("Nhap so luong phan tu: ");
    do
    {
        scanf("%d", &n);
        if (n <= 0 || n >= 100)
        {
            printf("Khong thoa man, nhap lai: ");
        }
    }
    while (n <= 0 || n >= 100);
    // nhap mang n phan tu
    int i;
    double arr[99];
    printf("Nhap cac phan tu: ");
    for (i = 0; i < n; i++)
    {
        scanf("%lf", &arr[i]);
    }
    // sap xep
    int j;
    for (i = 0; i < n - 1; i++)
    {
        if (arr[i] < 0)
        {
            for (j = i + 1; j < n; j++)
            {
                if (arr[j] < 0 && arr[i] < arr[j])
                {
                    double c = arr[i];
                    arr[i] = arr[j];
                    arr[j] = c;
                }
            }
        }
    }
    // xuat ket qua
    printf("Cac phan tu sau khi sap xep so am giam dan: ");
    for (i = 0; i < n; i++)
    {
        printf("%.1lf ", arr[i]);
    }
    return 0;
}