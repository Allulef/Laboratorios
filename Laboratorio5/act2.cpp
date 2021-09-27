#include <stdio.h>
char c; 

int main(){

    printf("este es un conversor de caracteres a ACII\n");
    printf("Ingrese caracter\n");
    scanf("%c", &c);

    printf("valor de %c en ACII es: %d", c, c);
}