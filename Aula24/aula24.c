#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

void imprimeV(int *vetor, int tam){

    int i;

    for(i = 0; i < tam; i++){
        printf("%d ", vetor[i]);
    }

}

int main(){

    int v[6] = {1, 2, 3, 4, 5, 6};

    imprimeV(v, 6);

    return 0;
}

