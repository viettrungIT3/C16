#include <stdio.h>

int main()
{
    int n, i;
    long long gt = 1;


    do
    {
        printf("Nhap so nguyen duong n = ");
        scanf("%d", &n);
    } while ( n <= 0 );
    
    for ( i = 1; i <= n; i++)
    {
        gt *= i;
    }
    
    printf("GT(%d) = %lld\n", n, gt);
    
    return 0;
}