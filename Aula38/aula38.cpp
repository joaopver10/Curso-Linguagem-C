#include <fstream>
#include <string>
#include <iostream>
#include <new>
#define TAM 10

using namespace std;

//bubble sort
void imprimeV(int vetor[]){
    int i;

    cout << "\n";
    for (i =  0; i < TAM; i++){
        cout << " |" << vetor[i] << "| ";
    }
}

int main(){

    int vetor[TAM] = {4,5,4,2,5,10,2,8,9,11};
    int x, y, aux;

    for(x = 0; x < TAM; x++){
        for(y = x + 1; y < TAM; y++){

            if( vetor[x] > vetor[y]){

                aux = vetor[x];
                vetor[x] = vetor[y];
                vetor[y] = aux;

            }
        }

    }

    imprimeV(vetor);

}
