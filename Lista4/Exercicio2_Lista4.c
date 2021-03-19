#include <stdio.h>

int main() {

    int R,C = 11, i=1;

    printf ("<< Contagem regressiva >>\n");


    do
    {
        R = C - i;

        printf ("%i..", R); 

        i++;
    } while (i < 12);



    printf ("FIM!");



}

