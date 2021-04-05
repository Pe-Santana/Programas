#include <stdio.h>
#include <stdlib.h>

int main() {


    int *numeros;

    
    
    numeros = (int *) malloc(5*sizeof(int));

    for (int i = 0; i < 5; i++)
    {
        printf("digite um valor para a posicao %i : ",i+1);
        scanf("%i",&numeros[i]) ;
    }
    
    for (int i = 0; i < 5; i++)
    {
        printf("%i  ",numeros[i]);
    }


    free(numeros);



}
