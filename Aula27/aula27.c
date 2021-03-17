#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct palavra{

    int ordem;
    char letra;
    char texto[255];

};

int main(){

    struct palavra primeiraP;

    primeiraP.ordem = 0;
    strcpy(primeiraP.texto, "Palavrinhaaaa");

    printf("Ordem: %d, Primeira Palavra: %s", primeiraP.ordem, primeiraP.texto);

    struct palavra listaDeP[3];

    listaDeP[0].ordem = 0;
    listaDeP[1].ordem = 1;
    listaDeP[2].ordem = 2;
    listaDeP[0].letra = 'a';
    listaDeP[1].letra = 'b';
    listaDeP[2].letra = 'c';
    strcpy(listaDeP[0].texto, "aloha") ;
    strcpy(listaDeP[1].texto, "salve") ;
    strcpy(listaDeP[2].texto, "familia") ;

    int cont;

    for(cont = 0; cont < 3; cont++){
        printf("\n Ordem: %d, Letra: %c, Palavra: %s",
               listaDeP[cont].ordem,
               listaDeP[cont].letra,
               listaDeP[cont].texto
               );
    }

    return 0;
}

