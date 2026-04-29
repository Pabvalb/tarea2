#include <stdio.h>
int main()
{
    int n;
    int producto = 1;
    int cont;
    printf("Introduce el valor de N: ");
    scanf("%d", &n);
    for (cont = 1; cont <= n; cont++)
    {
      producto *= cont;
    }
    printf("El producto de los primeros %d números es %d\n", n, producto);
    return 0;
}
