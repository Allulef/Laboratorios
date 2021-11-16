#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

char tablero[3][3];
int fila;
int columna;
int ganador = false;
int rondas = 0;

void jugadas();
void tablero_1();
void tablero_2();
void vencedor();




int main(){

    tablero_1();

    while(!ganador && rondas < 9){

        jugadas();
        tablero_2();

        vencedor();
}
    return 0; 
}

void tablero_1(){
for(int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j < 3 ; j++){
            tablero[i][j] = '-';
        }
    }

    printf("%c  |  %c  |  %c\n", tablero[0][0], tablero[0][1], tablero[0][2]);
    printf("----------------\n");
    printf("%c  |  %c  |  %c\n", tablero[1][0], tablero[1][1], tablero[1][2]);
    printf("----------------\n");
    printf("%c  |  %c  |  %c\n", tablero[2][0], tablero[2][1], tablero[2][2]);


}
void jugadas(){

 if(rondas%2 == 0){
            printf("Jugador X -> Ingrese su jugada de la forma fila,columna:\n");
            scanf("%d,%d", &fila,&columna);

            while (tablero [fila - 0][columna - 0] != '-')
            {
                printf("esta jugada ya esta ingresada, por favor ingrese otra\n");
                scanf("%d,%d", &fila, &columna);
            }

            tablero[fila - 0][columna - 0] = 'X'; 
        } else {
            printf("Jugador O -> Ingrese su jugada de la forma fila,columna:\n");
            scanf("%d,%d", &fila, &columna);

            while (tablero[fila - 0][columna - 0] != '-')
            {
                printf("esta jugada ya esta ingresada, por favor ingrese otra\n");
                scanf("%d,%d", &fila, &columna);
            }

            tablero[fila - 0][columna - 0] = 'O'; 
              }
}

void tablero_2(){
printf("%c  |  %c  |  %c\n", tablero[0][0], tablero[0][1], tablero[0][2]);
        printf("----------------\n");
        printf("%c  |  %c  |  %c\n", tablero[1][0], tablero[1][1], tablero[1][2]);
        printf("----------------\n");
        printf("%c  |  %c  |  %c\n", tablero[2][0], tablero[2][1], tablero[2][2]);
}
void vencedor(){

        if((tablero[2][0] == tablero[2][1]) && (tablero[2][1] == tablero[2][2]) && (tablero[2][0] != '-')){
            printf("Ganador!");
            ganador = 1;
        }
        if((tablero[1][0] == tablero[1][1]) && (tablero[1][1] == tablero[1][2]) && (tablero[1][0] != '-')){
            printf("Ganador!");
            ganador = 1;
        }
        if((tablero[0][0] == tablero[0][1]) && (tablero[0][1] == tablero[0][2]) && (tablero[0][0] != '-')){
            printf("Ganador!");
            ganador = 1;
        }

        
        if((tablero[0][0] == tablero[1][0]) && (tablero[1][0] == tablero[2][0]) && (tablero[0][0] != '-')){
            printf("Ganador!");
            ganador = 1;
        }
        if((tablero[0][1] == tablero[1][1]) && (tablero[1][1] == tablero[2][1]) && (tablero[0][1] != '-')){
            printf("Ganador!");
            ganador = 1;
        }
       if((tablero[0][2] == tablero[1][2]) && (tablero[1][2] == tablero[2][2]) && (tablero[0][2] != '-')){
            printf("Ganador!");
            ganador = 1;
        }

      
        if((tablero[0][0] == tablero[1][1]) && (tablero[1][1] == tablero[2][2]) && (tablero[0][0] != '-')){
            printf("Ganador!");
            ganador = 1;
        }
        if((tablero[0][2] == tablero[1][1]) && (tablero[1][1] == tablero[2][0]) && (tablero[0][2] != '-')){
            printf("Ganador!");
            ganador = 1;
        }


        rondas++;


}