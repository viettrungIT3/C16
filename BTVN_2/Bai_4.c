#include <stdio.h>

int main()
{
    int n, m, k;

    printf("Nhap so ban nhan n = ");
    scanf("%d", &n);
    printf("Nhap so tui keo m = ");
    scanf("%d", &m);
    printf("Nhap so chiec keo trong moi tui k = ");
    scanf("%d", &k);

    if ((m * k) % n == 0)
        printf("no");
    else
        printf("yes");
}