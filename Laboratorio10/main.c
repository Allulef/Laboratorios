#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "libreriagato.h"





int main(){
    int ganador = 0;
    int rondas = 0;


    tablero_1();

    while(!ganador && rondas < 9){

        jugada();
        tablero_2();

        victoria();
}
    return 0; 
}