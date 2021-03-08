#include <cstdio>
#include <cstring>
#include <iostream>

using namespace std;

int main(){

    int matriz[2][2],i,j;

    matriz[0][0] = 1;
    matriz[0][1] = 2;
    matriz[1][0] = 3;
    matriz[1][1] = 4;

    for(i = 0; i < 2; i++ ){
        for(j = 0; j < 2; j++ ){
     cout << matriz[i][j]  << " "  ;
        }
        cout << "\n";
    }


    return 0;
}