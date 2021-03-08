#include <stdio.h>
#include <string.h>

int main(){

    char teste[255];

    printf("Digite uma palavra: ");

    //Limpa o buffer
    setbuf(stdin, 0);

    //Lê string
    fgets(teste, 255, stdin);

    printf("%s", teste);

    teste[strlen(teste) - 1]  = '\0' ;



    return 0;
}

