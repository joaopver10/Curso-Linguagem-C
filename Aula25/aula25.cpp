#include <cstdio>
#include <cstdlib>
#include <new>

int main(){

    int tamanho, cont;

    printf("Digite o tamanho: ");
    scanf("%d", &tamanho);

    int *vetor = new int[tamanho];

    for(cont = 0; cont < tamanho; cont++){
        vetor[cont] = cont;
        printf("\n%d", vetor[cont]);
    }

    free(vetor);
    return 0;

}