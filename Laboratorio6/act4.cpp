#include <stdio.h>
#include <math.h>

float radio;
float perimetro;
float area;

int main(){
    printf ("Bienvenido a la calculadora de areas y perimetros\n");
    printf("ingrese radio \n");
    scanf("%f", &radio);

    perimetro = (2 * M_PI * radio);
    area = (M_PI * radio);

    printf ("el resultado de perimetro es %f y el area es %f", perimetro, area);   
}