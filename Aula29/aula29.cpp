#include <fstream>
#include <cstdio>
#include <iostream>


using namespace std;

int main(){

    ofstream arquivoSaida;

    arquivoSaida.open("Texto.txt", std::ios_base::app);

    arquivoSaida << "ola mundo";

    arquivoSaida.close();



    return 0;
}

