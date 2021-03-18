#include <fstream>
#include <string>
#include <iostream>
#include <new>
#define TAM 10
using namespace std;


int main(){

    int vetor[TAM] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int valorP;
    int posicaoEnc;
    int cont;
    bool aux;

    for(cont = 0; cont < TAM; cont++){
    cout << vetor[cont] << " - ";
    }

    printf("\n Qual numero desejar encontrar? ");
    scanf("%d", &valorP);

    for(cont = 0; cont < TAM; cont++){
        if(vetor[cont] == valorP){
            aux = true;
            posicaoEnc = cont;
        }
    }
    if(aux){
        cout << "O valor foi encontrado na posicao: " << posicaoEnc;
    }else{
        cout << "O valor nao foi encotrado";
    }

    return 0;
}

