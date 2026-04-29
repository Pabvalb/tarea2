#include <stdio.h>
int main()
{
    int pares[100];
    int cont;
    for (cont = 0; cont <100; cont++)
    {
        pares[cont] = (cont + 1) *2;
    }
    printf("los primeros 100 números pares son: \n");
    for (cont = 0; cont <100; cont++)
    {
        printf("%d ", pares[cont]);
        if ((cont+1) % 10 == 0)
        {
        printf("\n");
        }
    }
    return 0;
}
