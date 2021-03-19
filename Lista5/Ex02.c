#include <stdio.h>

int main () {

    int V[6];

    printf ("<< Listando um vetor >>\n");

    for (int i = 0; i < 6; i++)
    {
        printf ("Entre com o numero %i: ",i+1);

        scanf ("%i", &V[i]);
    }
    
    printf ("Os valores lidos sao:");

    for (int j = 0; j < 6; j++)
    {
        printf (" %i",V[j]);
    }
    



}