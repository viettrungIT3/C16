#include <stdio.h>

int main()
{
    int n, a[101], i;

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

    int count1 = 0, count2 = 0;

    for (i = 0; i < n - 1; i++)
    {
        if (a[i] < a[i + 1])
        {
            count1++;
        }
        if (a[i] > a[i + 1])
        {
            count2++;
        }
    }

    if (count1 == n - 1)
        printf("YES");
    else if (count2 == n - 1)
        printf("NO");
    else
        printf("-1");

    return 0;
}