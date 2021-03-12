#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

void mostraSoma(int num1,int num2){
    printf("A soma entre %d e %d eh de %d \n",num1, num2, num1 + num2 );
}

int retornaSoma(int num1,int num2){
    return num1 + num2;
}

int main(){

    int a = 11; int b = 12;

    mostraSoma(a, b);


    printf("A soma entre %d e %d eh de %d ",a, b,retornaSoma(a, b));

    return 0;
}

