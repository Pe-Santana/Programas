#include <stdio.h>

int main() {

   int N, R = 0, i = 0;

   printf ("<< Soma de n Valores naturais >>\n");

   printf ("Quantos numeros deseja somar?");

   scanf ("%i", &N);

    
    while (i<N)
    {
        i++;
        R = R + i;

        
    }
    
    printf ("A soma dos %i primeiros numeros naturais e: %i", N, R);


}

