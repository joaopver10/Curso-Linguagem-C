#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    int a = 50;
    printf("O numero de a e = %d \n ", a);
    scanf("%d", &a);
    printf(" a variavel b agora vale = %d \n ",a);

    float b = 2.3;
    printf("o numero b e = %f \n ", b);
    scanf("%f", &b);
    printf("a variavel b agora vale = %f \n", b);

    char d = 't';
    printf("a variavel d tem a letra = %c \n", d);
    fflush(stdin );
    scanf(" %c", &d);
    printf("a variavel d agora tem a letra = %c", d);

    return 0;
}