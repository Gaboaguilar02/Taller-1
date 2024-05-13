#include <stdio.h>
#include "funciones.h"

int main() {
    float  tasadeinteres, montodecredito, tiempodepago;
    printf("Ingrese el monto de credito: ");
    scanf("%f", &montodecredito);
    printf("Ingrese la tasa de interes anual: ");
    scanf("%f", &tasadeinteres);
    printf("Ingresa el tiempo de pago en aplazado en años: ");
    scanf("%f", &tiempodepago);

    calculodepagos(montodecredito, tasadeinteres, tiempodepago);
    return 0;
}
