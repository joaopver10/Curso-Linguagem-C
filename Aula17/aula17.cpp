#include <cstring>
#include <cstdio>
#include <iostream>

using namespace std;

int main(){

    int a = 20;
    printf("A variavel tem valor: %d \n", a);
    printf("o ponteiro esta no local da memoria de numero: %d  \n", &a);

    // ponteiro
    int *ponteiro;

    ponteiro = &a;

    printf("o ponteiro e: %d  \n", ponteiro);

    *ponteiro = 10;

    printf("o a agora vale %d  \n", a);
    return 0;
}