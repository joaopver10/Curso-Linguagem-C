#include <stdio.h>
#define TAM 5
int main(){

    int array[TAM];

    array[0];
    array[1];
    array[2];
    array[3];
    array[4];
/*
    for(int cont = 0; cont < TAM; cont++){
        printf("na posicao %d o valor %d \n", cont, array[cont]);
    }
*/

    for(int cont = 0; cont < TAM; cont++){
        scanf("%d", &array[cont]);
    }
    for(int cont = 0; cont < TAM; cont++){
        printf("na posicao %d o valor %d \n", cont, array[cont]);
    }


    return 0;
}