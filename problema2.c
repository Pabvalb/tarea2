#include <stdio.h>
int main()
{
    float pi=3.1416;
    float area, radio, circunferencia;
    printf("Introduce el valor del radio del círculo: ");
    scanf("%f", &radio);
    area= pi * radio * radio;
    circunferencia= 2 * pi * radio;
    printf("\n Resultados: \n");
    printf("El área es: %.2f\n", area);
    printf("La circunferencia es: %.2f\n", circunferencia);
    return 0;
}
