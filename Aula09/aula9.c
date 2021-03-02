#include <stdio.h>
#include <stdlib.h>

void main(){

    int lado1, lado2, lado3;

    printf("Digite o primeiro lado: ");
    scanf("%d", &lado1);
    printf("Digite o segundo lado: ");
    scanf("%d", &lado2);
    printf("Digite o terceiro lado: ");
    scanf("%d", &lado3);

    if((lado1 == lado2 ) && (lado2 == lado3)){
        printf("os lados sao iguais %d, %d, %d ou seja eh equilatero", lado1, lado2,lado3);
    }else if ((lado1 == lado2 ) || (lado2 == lado3) || (lado3 == lado1 )){
        printf("possui dois lados iguais %d, %d, %d ou seja isoceles", lado1, lado2,lado3);
    }else {
        printf("todos os lados sao diferentes ou seja eh escaleno");
    }

}