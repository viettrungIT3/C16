#include <stdio.h>
#include <math.h>

int main()
{
    int a;
    printf("Nhap a = ");
    scanf("%d", &a);

    // float kq = (a / 3.0) * (a / 3.0) * (a / 3.0) * (a / 3.0);
    float kq = 0;
    float kq = pow((a/3.0), 4);

    int i;
    for (i = 1; i < 5; i++)
    {
        kq *= (a / 3.0);
        // kq = kq * (a / 3.0);
    }

    printf("Ket qua = %.3f\n", kq);
}