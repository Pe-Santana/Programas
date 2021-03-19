#include <stdio.h>

int main() {

    int N, R = 0, i;

    printf ("<< Soma de n Valores naturais >>\n");

    printf ("Quantos numeros deseja somar?");

    scanf ("%i", &N);


    for ( i = 1; i < N + 1; i++)
    {
        R = R + i;
    }


        

    printf ("A soma dos %i primeiros numeros naturais e: %i", N, R);


}

