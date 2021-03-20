#include <fstream>
#include <string>
#include <iostream>
#include <new>

using namespace std;

void imprime(){
    cout << "\n---------------\n";
}

int main(){

    int cont, i;
    imprime();
   for(i  ; ; i++){
        cout << "\nEscolha umas das opcao baixo";
        cout << "\n1- Digite 1 para entrar na sua conta";
        cout << "\n2- Digite 2 para se cadastrar";
        cout << "\n3- Digite 3 para recuperar sua senha";
        cout << "\n4- Digite 4 para sair\n";
        cin >> cont;
    if(cont == 4){
        cout << "Saindo.";
        break;

    }else{
        switch (cont) {

            case 1:
                cout << "Entrou";
                imprime();
                break;
            case 2:
                cout << "Cadastrou";
                imprime();
                break;
            case 3:
                cout << "Recuperado";
                imprime();
                break;

        }
    }
   }

    return 0;
}
