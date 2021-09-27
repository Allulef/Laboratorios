#include <stdio.h>

float tarea1;
float tarea2;
float tarea3;
float laboratorios;
float prueba1;
float prueba2;
int main(){

    printf("Bienvenido\n");
    printf("¿Quieres saber que nota necesitas para apobra el ramo?\n");
    printf("ingrese la nota de la tarea 1 \n");
    scanf("%f", &tarea1);
    printf("ingrese la nota de la tarea 2 \n");
    scanf("%f", &tarea2);
    printf("ingrese la nota de la tarea 3 \n");
    scanf("%f", &tarea3);
    printf("ingrese la nota de los laboratorios \n");
    scanf("%f", &laboratorios);
    printf("ingrese la nota de la prueba 1 \n");
    scanf("%f", &prueba1);

prueba2 = (4.0 -((tarea1 * 0.1) + (tarea2 * 0.1) + (tarea3 * 0.1) + (laboratorios * 0.1) + (prueba1 * 0.25))) / 0.35; 

if(prueba2<=7 && prueba2>=1){

    printf("la nota en la prueba 2 es un %f\n", prueba2);
}
if(prueba2<1){
   printf("has aprobado el ramo\n");
}
if(prueba2>7){
  printf("lo lamento has reprobado el ramo\n");
}
    return 0;
}