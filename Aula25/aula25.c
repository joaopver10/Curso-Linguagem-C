#include <stdio.h>
#include <stdlib.h>

int* alocaV(int tamanho){

    int *aux;

    aux = (int*) malloc(tamanho * sizeof(int));

    return aux;
}

int main(){
    //alocação dinamica

    int *vetor, tamanho, cont;

    printf("Digite um tamanho para o vetor: ");
    scanf("%d", &tamanho);

    vetor = alocaV(tamanho);

    vetor[0] = 3;
    vetor[1] = 2;
    vetor[2] = 5;
    vetor[3] = 7;

    for(cont = 0; cont < tamanho; cont++){
        printf("%d\n", vetor[cont]);
    }
    free(vetor);

    return 0;
}

