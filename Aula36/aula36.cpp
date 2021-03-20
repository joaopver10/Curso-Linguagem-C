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

void insertionSort(int vetor[TAM]){
    int i, j, atual;

    for(i = 1; i < TAM; i++){

        atual = vetor[i];
        j = i - 1;
        while( (j >= 0) && (atual < vetor[j])){

            vetor[j + 1] = vetor[j];

            j--;
        }
        vetor[j + 1] = atual;
        imprimeV(vetor);
    }
}

int main(){

    int vetor[TAM] = {4,5,4,2,5,10,2,8,9,11};
    int x, y, aux;

    insertionSort(vetor);
    //imprimeV(vetor);

}
