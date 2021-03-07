#include <stdio.h>
#define TAM 3


int main(){

    float array[TAM];

    array[0];
    array[1];
    array[2];

    printf("Digite 3 notas: ");
    for(int i = 0; i < TAM; i++){
        scanf("%f", &array[i]);
    }
    for(int i = 0; i < TAM; i++){
        printf("as notas digitados foram: %.2f \n", array[i]);
    }
    printf("\n A media e: %.2f", (array[0] + array[1] + array[2])/3);

    return 0;
}