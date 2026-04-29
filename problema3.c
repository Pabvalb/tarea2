#include <stdio.h>
int main()
{
    float dolares, pesos;
    float cambio = 11.96;
    printf("Ingrese la cantidad de dolares: ");
    scanf("%f", &dolares);
    pesos= dolares * cambio;
    printf("la cantidad en pesos es: %.2f\n", pesos);
    return 0;
}
