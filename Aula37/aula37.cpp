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
void selectionSort(int vetor[TAM]){

    int pMenor, aux, i, j;

    for(i = 0; i < TAM; i++){
        pMenor = i;
    for(j = i + 1; j < TAM; j++){
        if(vetor[j] < vetor[pMenor]){
            pMenor = j;
        }
    }
    if(pMenor != i){
        aux = vetor[i];
        vetor[i] = vetor[pMenor];
        vetor[pMenor] = aux;
    }

    }


}

int main(){

    int vetor[TAM] = {4,5,4,2,5,10,2,8,9,11};



    selectionSort(vetor);

    imprimeV(vetor);

}
