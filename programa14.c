#include <stdio.h>
int main()
{
    int numero, suma = 0, cont;
    printf("Ingresa el número de elemenotos que tendrá el arreglo: ");
    scanf("%d", &numero);
    int arreglo[numero];
    for (cont = 0; cont < numero; cont++)
    {
        printf("Elementos [%d]: ", cont);
        scanf("%d", &arreglo[cont]);
    }
    for (cont = 0; cont < numero; cont++)
    {
        suma += arreglo[cont];
    }
    printf("\n La suma de los elementos es: %d\n", suma);
    return 0;
}
