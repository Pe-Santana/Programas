#include <stdio.h>

int main () {

    int N ;

    float Neper = 1, Fatorial = 1;


    printf ("<< Numero Neperiano >>\n");


    printf ("Entre com o numero de termos :");

    scanf ("%i", &N);

    for (int i = 1; i < N+1; i++)
    {
        Fatorial = Fatorial*i;

        Neper = (1/Fatorial) + Neper;


    }
    
    
    printf ("e~ %f", Neper);   



}