#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main(){

    int num1, num2;
    int opcao;


    printf("Digite um numero:");
    scanf("%d", &num1);

    printf("Digite outro numero:");
    scanf("%d", &num2);

    printf("\n Para somar digite 1");
    printf("\n Para diminuir digite 2");
    printf("\n Para dividir digite 3");
    printf("\n Para multiplicar digite 4 \n");

    scanf("%d", &opcao);



    switch(opcao) {

        case 1:
            printf("O resultado da soma eh: %d", num1 + num2);
            break;

        case 2:
            printf("O resultado da subtracao eh: %d", num1 - num2);
            break;

        case 3:
            printf("O resultado da divisao eh: %d", num1 / num2);
            break;

        case 4:
            printf("O resultado da multiplicacao eh: %d", num1 * num2);
            break;
    }

}

