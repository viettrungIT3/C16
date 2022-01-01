#include <stdio.h>

int main()
{
    int tuoi;
    printf("Nhap so tuoi: ");
    scanf("%d", &tuoi);
    (tuoi >= 18) ? printf("Da du tuoi") : printf("Chua du tuoi");
}