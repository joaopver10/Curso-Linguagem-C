#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>


int retornaMaior(int numero){
    return numero + 10;
}

void retornaM(int *numero){
 *numero *= 10;
}

int main(){

    int a = 5;

    printf("%d\n", a);

    retornaM(&a);

    printf("%d\n", a);


    return 0;
}

