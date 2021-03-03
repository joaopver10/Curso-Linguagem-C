#include <stdlib.h>
#include <stdio.h>
#include <time.h>

void main(){

    srand((unsigned) time(NULL));

    int aleatorio = (rand() % 5) + 1;

    printf("%d", aleatorio);
}