#include <fstream>
#include <string>
#include <iostream>
#include <new>
#define TAM 10
using namespace std;

void imprimeV(int vetor[TAM]){
    int cont;

    cout << "\n";
    for (cont =  0; cont < TAM; cont++){
        cout << vetor[cont] << " - ";
    }
}

void pilhaPush(int pilha[TAM], int valor,int *topo){

    if(*topo == TAM - 1){
        cout << "Pilha cheia:";
    }else{
        *topo = *topo + 1;
        pilha[*topo] = valor;
    }

}
void pilhaPop(int pilha[TAM],int *topo){

    if(*topo == - 1){
        cout << "Pilha vazia:";
    }else{
        cout << "\n Valor retirado: " << pilha[*topo];
        *topo = *topo - 1;
    }

}

int main(){

    int pilha[TAM] = {0,0,0,0,0,0,0,0,0,0};
    int topo = -1;


    pilhaPush(pilha, 5, &topo);
    pilhaPop(pilha, &topo);
    pilhaPush(pilha, 8, &topo);
    pilhaPop(pilha, &topo);
    pilhaPush(pilha, 9, &topo);
    pilhaPop(pilha, &topo);
    pilhaPush(pilha, 10, &topo);
    pilhaPop(pilha, &topo);
    pilhaPush(pilha, 11, &topo);
    pilhaPop(pilha, &topo);



    imprimeV(pilha);


    return 0;
}
