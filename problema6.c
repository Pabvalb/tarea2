#include <stdio.h>
int main()
{
    float sueldo, pago_total;
    printf("Ingrese el sueldo: ");
    scanf("%f", &sueldo);
    if (sueldo > 1000)
    {
        pago_total = sueldo * 1.15;
    }
    else
    {
        pago_total = sueldo * 1.12;
    }
    printf("El sueldo total es: %.2f\n", pago_total);
    return 0;
}
