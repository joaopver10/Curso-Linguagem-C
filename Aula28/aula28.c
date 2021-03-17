#include <stdio.h>
#include <stdlib.h>

typedef struct Data{
    int dia;
    int mes;
    int ano;
}Data;

struct aluno{
    int id;
    Data nascimento;
};


int main(){

    struct aluno aluno1;

    aluno1.id = 142;
    aluno1.nascimento.ano = 1999;
    aluno1.nascimento.mes = 9;
    aluno1.nascimento.dia = 1;

    printf("id do aluno: %d e sua data de nascimento eh em: %d/%d/%d ",
           aluno1.id, aluno1.nascimento.ano,
           aluno1.nascimento.mes,
           aluno1.nascimento.dia
           );

    return 0;
}

