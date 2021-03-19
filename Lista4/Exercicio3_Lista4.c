#include <stdio.h>

int main() {

    int R,C = 11, i;

    printf ("<< Contagem regressiva >>\n");

    for ( i = 1; i < 12; i++)
    {
        R = C - i;

        printf ("%i..", R); 
    }
    
    printf ("FIM!");





}

