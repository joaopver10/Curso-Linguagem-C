#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char retornaLetra(){
    return 'a';
}

int main(){

    char letra;

    letra = retornaLetra();

    printf("%c", letra);


    return 0;
}

