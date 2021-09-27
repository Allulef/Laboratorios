#include <stdio.h>

float numero1;
float numero2;
float multiplicacion;

int main(){
    printf("Ingrese por favor dos numeros reales de la forma: X.X , Y.Y\n");
    scanf("%f , %f", &numero1, &numero2);
    multiplicacion = numero1 * numero2;
    printf("La multiplicacion entre %.2f y %.2f es: %.2f\n", numero1, numero2, multiplicacion);
    return 0;
}