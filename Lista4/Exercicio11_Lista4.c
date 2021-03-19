#include <stdio.h>

int main() {

    int N, R = 0, i = 0;

    printf ("<< Soma de n Valores naturais >>\n");

    printf ("Quantos numeros deseja somar?");

    scanf ("%i", &N);


    do
    {
        i++;
        R = R + i;
        
    } while (i<N);

        

    printf ("A soma dos %i primeiros numeros naturais e: %i", N, R);


}

