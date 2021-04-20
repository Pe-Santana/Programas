#include <stdio.h>
#include "TMat2D.h"

int main () {

    TMat2D *p;

    int l, c;

    double valor;

    printf ("Entre com os valores de Linhas e Colunas:");

    scanf("%i %i", &l, &c);
    
    p = mat2D_create(l,c);


    
    printf ("Entre com as coordenadas para alocar o dado:");
    scanf("%i %i",&l, &c);

    printf ("Entre com o valor para a coordenada [%i,%i]:",l, c);
    scanf("%lf",&valor);

    mat2D_escreve(p,valor,l,c);

   
   
    printf ("Qual cordenada gostaria de acessar?");
    scanf("%i %i",&l, &c);

    mat2D_acessa(p,&valor,l,c);
    
    printf ("%.1lf",valor);

    
    double MAX;
    
    printf ("Entre com o valor MAXIMO para aleatorizar a matriz:");
    scanf("%lf",&MAX);

    mat2D_aleatorio(p,MAX);
    


    mat2D_clear(p);
    return 0;

}