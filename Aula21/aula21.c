#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

void mostraProx(int num){
    printf(" O sucessor de %d eh %d", num, num + 1);
}

int main(){

    int a;

    printf("Digite um valor: ");
    scanf("%d", &a);


    system("CLS");

    mostraProx(a);
    printf("\n Fim do programa");

    return 0;
}

