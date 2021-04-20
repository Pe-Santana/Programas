#include <stdio.h>
#include "TMat2D.h"

int main () {

    TMat2D *p;

    int l, c;
    printf ("Entre com os valores de Linhas e Colunas:");

    scanf("%i %i", &l, &c);
    
    p = mat2D_create(l,c);


    printf ("CAVALO");

    mat2D_clear(p);
    return 0;

}