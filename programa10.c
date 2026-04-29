#include <stdio.h>
int main()
{
    int numeros, cont;
    int positivos = 0, negativos = 0, nulos = 0;
    printf("Introduce 100 números: \n");
    for (cont = 1; cont <=100; cont++)
    {
        scanf("%d", &numeros);
        if (numeros > 0) positivos++;
        else if (numeros < 0) negativos++;
        else nulos++;
    }
    printf("Positivos: %d\n Negativos: %d\n nulos: %d\n", positivos, negativos, nulos);
    return 0;
}
