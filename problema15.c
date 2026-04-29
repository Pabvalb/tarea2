#include <stdio.h>
int main()
{
    int n, cont, positivos = 0, negativos = 0, nulos = 0;
    printf("Ingrese el tamaño del arreglo: ");
    scanf("%d", &n);
    int lista[n];
    for (cont = 0; cont < n; cont++)
    {
        printf("Ingrese valor %d: ", cont);
        scanf("%d", &lista[cont]);
        if (lista[cont] > 0) positivos++;
        else if (lista[cont] < 0) negativos++;
        else nulos++;
    }
    printf("\n Positivos: %d\n Negativos: %d\n Nulos: %d\n", positivos, negativos, nulos);
    return 0;
}
