#include <stdio.h>

int main()
{
    int m, n;
    float tien;

    printf("Nhap so bong hoa n = ");
    scanf("%d", &n);
    printf("Nhap gia tien m = ");
    scanf("%d", &m);

    if (n%2==1&&n>5)
    {
        // tien = n * m - 0.2 * n * m;
        tien = 0.8 * n * m;
    }
    else if (n % 2 == 0 && n > 4)
    {
        tien = 0.85 * n * m;
    }
    else
    {
        tien = n * m;
    }

    printf("So tien Hung phai tra %.0f", tien);
}