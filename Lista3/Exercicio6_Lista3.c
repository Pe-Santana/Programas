#include <stdio.h>
#include <math.h>


int main() {

    int A, aux;

    float N;

    printf ("<< Quadrado Perfeito >>\n");

    printf ("Entre com um numero:");
    
    scanf ("%i", &A);


    N = sqrt(A);

    aux = N;
    if (aux == N)
    {
        printf ("O valor %i e um quadrado perfeito e sua raiz e %.0f", A, N);

    }else
    {
        printf ("O valor %i NAO e um quadrado perfeito", A);
    }
    
    




}