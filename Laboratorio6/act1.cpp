#include <stdio.h>

int numero1;
int division;

int main(){
    printf("ingrese un numero\n");
    scanf("%d", &numero1);
    division = numero1%2;


    if(division ==0){
        printf("el numero es par\n");

    }else{
        printf("el numero es impar\n");
        
    }
return 0;
}