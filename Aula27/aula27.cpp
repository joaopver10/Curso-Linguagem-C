#include <cstdio>
#include <cstdlib>
#include <new>
#include <iostream>
#include <cstring>

using namespace std;

struct fruta{

    string cor;
    string nome;

};

int main(){

    fruta *primeiraF = new fruta;

    primeiraF ->cor = "Verde";
    primeiraF ->nome= "Limao";

    cout << "Fruta: " << primeiraF->nome  << ", cor: " << primeiraF->cor;


    fruta *listadeF = new fruta[2];

    listadeF[0].cor = "azul";
    listadeF[0].nome = "banana";
    listadeF[1].cor = "branco";
    listadeF[1].nome = "goiaba";


    int cont;

    for(cont = 0; cont < 2; cont++){
        cout << "\n Fruta: " << listadeF[cont].nome  << ", cor: " << listadeF[cont].cor;
    }



    return 0;
}
