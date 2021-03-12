#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

bool retornaBoolean(){
    return true;
}

int main(){

    bool variavelB;

    variavelB = retornaBoolean();

    printf("%d", variavelB);


    //limpa a tela
    system("CLS");

    return 0;
}

