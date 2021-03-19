#include <stdio.h>

int main() {


    int fatorial = 1;

    printf ("<< Fatorial >>\n");

    for (int i = 1; i < 11; i++)
    {
        
        fatorial = i*fatorial;
        
        printf ("%i! = %i\n", i, fatorial);
    } 

}

