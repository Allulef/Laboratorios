#include <stdio.h>
#include <math.h>

int numero1;
  int numero2;
  int resultado;

int main(){
  
  printf("porfavor ingrese el primer numero:\n");
  scanf("%i", &numero1);
  printf("porfavor ingrese el segundo numero:\n");
  scanf("%i", &numero2);
  resultado = numero1 + numero2;
  printf("resultado de la suma entre %i y %i es: %i\n", numero1, numero2, resultado);
  return 0;
}