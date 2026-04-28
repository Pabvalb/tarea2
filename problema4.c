#include <stdio.h>
int main()
{
    float dinero, interes, cantidad_final;
    printf("Ingrese la cantidad de dinero a invertir: ");
    scanf("%f", &dinero);
    printf("Ingrese la tasa de intéres mensual (en decimal): ");
    scanf("%f", &interes);
    cantidad_final= dinero + (dinero * interes);
    printf("La cantidad de dinero al finalizar el mes es de : %.2f\n", cantidad_final);
    return 0;
}
