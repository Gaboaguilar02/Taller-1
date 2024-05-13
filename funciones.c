#include <stdio.h>
#include "funciones.h"

void calculodepagos(float montodecredito, float tasadeinteres, float tiempodepago) {
    float capitalpago, interesanual, capitalinteres, cuotamensual;
     float tasamensual= tasadeinteres/100/12;
    float monto= montodecredito;
// Suma total de intereses anuales
    float sumadeinterestotal=0; 
// Suma total de capital más intereses
    float sumadecapitalinteres=0; 
// Se calcula el capital a pagar por año una vez
    capitalpago = montodecredito / tiempodepago; 
    printf("Capital restante a pagar:");
    printf("Capital a pagar por año:");
    printf("Interes anual:");
    printf("Capital mas el Interes:");
    printf("Cuota mensual por año:");
    for (int año=1; año<=tiempodepago; año++) {
        interesanual=monto*tasadeinteres / 100;
        capitalinteres=capitalpago+interesanual;
        cuotamensual=capitalinteres / 12;
        montodecredito-=capitalpago;
        monto-=capitalpago;
        // Se suma el total de intereses anuales y el total de capital más intereses
        sumadeinterestotal+=interesanual;
         sumadecapitalinteres+=capitalinteres;
    }
    printf("La suma total de interes anual es: %.2f", sumadeinterestotal);
    printf("La suma total de capital incluyendo el interes es: %.2f", sumadecapitalinteres);
}