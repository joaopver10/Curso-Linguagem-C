#include <stdio.h>
#include <stdlib.h>

void main(){

    float nota1, nota2, nota3, media;

    printf("Digite sua primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3) / 3;

    if(media >= 7){
        printf("Parabens aprovado, sua media foi de: %.2f", media);
    }else{
        printf("Voce foi reprovado, sua media foi de %.2f", media);
    }
}
