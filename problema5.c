#include <stdio.h>
int main()
{
    float total, valor_compra;
    float descuento = 0.08;
    printf("Ingrese el total de la compra: ");
    scanf("%f", &valor_compra);
    if (valor_compra > 2500)
    {
    total = valor_compra * (1 - descuento);
    printf("Se aplico descuento del 8%%.\n");
    }
    else 
    {
        total = valor_compra;
    }
    printf("La cantidad a pagar es: %.2f\n", total);
    return 0;
}
