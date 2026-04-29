#include <stdio.h>
int main()
{
    int n, buscador, cont, veces = 0;
    printf("Ingrese la cantidad de elemetos: ");
    scanf("%d", &n);
    int arreglo[n];
    for (cont = 0; cont < n; cont++)
    {
        printf("Dato %d: ", cont + 1);
        scanf("%d", &arreglo[cont]);
    }
    printf("\n Ingresa el número que deseas buscar: ");
    scanf("%d", &buscador);
    for (cont = 0; cont < n; cont++)
    {
        if(arreglo[cont] == buscador)
        {
            veces++;
        }
    }
    printf("El número buscado %d está %d veces \n", buscador, veces);
    return 0;
}
