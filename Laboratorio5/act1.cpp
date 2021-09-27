#include <stdio.h>
#include <math.h>

int numero1;
  int numero2;
  int resultado;

int main(){
  printf("suma entre numeros\n");
  printf("porfavor ingrese el primer numero:\n");
  scanf("%d", &numero1);
  printf("porfavor ingrese el segundo numero:\n");
  scanf("%d", &numero2);
  resultado = numero1 + numero2;
  printf("resultado de la suma entre %d y %d es: %d\n", numero1, numero2, resultado);
  return 0;
}