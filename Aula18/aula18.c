#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int retornaDez();
float retornaQueb();

int main(){

    int a;
    float b;

    a = retornaDez();
    b = retornaQueb();

    printf("%d \n", a);
    printf("%.2f", b);


    return 0;
}

int retornaDez(){
    printf("o valor é \n");
    return 10;
}

float retornaQueb(){
    return 1.8;
}