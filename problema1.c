#include <stdio.h>
int main()
{
    int num1, num2;
    int suma, resta, multiplicacion;
    printf("Introduce dos números separados por espacio: ");
    scanf("%d %d", &num1, &num2);
    suma= num1 + num2;
    resta= num1 - num2;
    multiplicacion= num1 * num2;
    printf("\n Resultados \n");
    printf("El resultado de la suma es: %d + %d = %d\n", num1, num2, suma);
    printf("El resultado de la resta es: %d - %d = %d\n", num1, num2, resta);
    printf("El resultado de la multiplicación es: %d * %d = %d\n", num1, num2, multiplicacion);
    return 0;
}
