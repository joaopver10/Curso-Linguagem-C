#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Aula de exercicio 2

void main(){

    float nota1, nota2, resultado;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    resultado = fabs(nota1 - nota2);

    printf("O resultado absoluto da diferença entre a nota1 e nota2 eh de: %f", resultado);

}