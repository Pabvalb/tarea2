#include <stdio.h>
int main()
{
    int suma = 0;
    int cont;
    for (cont = 10; cont <= 50; cont += 2)
    {
        suma += cont;
    }
        printf("La suma de los pares entre 10 y 50 es: %d\n", suma);
    return 0;
}
