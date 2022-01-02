#include <stdio.h>

int main()
{
    int n, a[101], i, j;

    do
    {
        printf("Nhap n = ");
        scanf("%d", &n);
    } while (n <= 0 || n >= 100);

    printf("Nhap vao mang %d so duong: \n", n);
    for (i = 0; i < n; i++)
    {
        printf("Nhap a[%d] = ", i);
        do
        {
            scanf("%d", &a[i]);
            if (a[i] < 0)
                printf("Nhap so duong. Xin vui long nhap lai a[%d] = ", i);
        } while (a[i] <= 0);
    }

    int sum = 0;
    for (i = 0; i < n; i++)
	{
		if (a[i] >= 2)
		{
			int check = 1;
			for (j = 2; j <= sqrt(a[i]); j++)
				if (a[i] % j == 0)
					check = 0;
			if (check == 1)
			{
				printf("%d ", a[i]);
				sum += a[i];
			}
		}
	}
	printf("\n%d", sum);
    

    return 0;
}