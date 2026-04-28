#include <stdio.h>
   int main()
   {
    int tiempo;
    float ticket, distancia;
    float precio_km = 0.23;
    printf("Ingrese la cantidad de días de estancia y la distancia de ida y vuelta: ");
    scanf("%d %f", &tiempo, &distancia);
    ticket = distancia * precio_km;
    if (tiempo > 7 && distancia > 800)
    {
    ticket = ticket * 0.70;
    printf("Se aplico desvuento de 30%% por estancia larga y distancia \n");
    }
    printf("El consto total de Ticket es: $%.2f\n", ticket);
    return 0;
}
