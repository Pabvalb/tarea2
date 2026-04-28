#include <stdio.h>
int main()
{
    int a, b;
    printf("Ingresedos números: ");
    scanf("%d %d", &a, &b);
    if (b != 0 && a % b ==0)
    {
        printf("%d es divisor de %d\n", b, a);
    }
    else if (a != 0 && b % a ==0)
    {
        printf("%d es divisor de %d\n", a, b);
    }
    else 
    {
        printf("Ninguno es divisor del otro \n");
    }
    return 0;
}
