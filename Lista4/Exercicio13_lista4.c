#include <stdio.h>

int main() {

    int n, i, j, C = 0, M = -1;

    printf ("<< Multiplos >>\n");

    printf ("Entre com o valor de n:");

    scanf ("%i", &n);


    printf ("Entre com o valor de i:");

    scanf ("%i", &i);


    printf ("Entre com o valor de j:");

    scanf ("%i", &j);

    printf ("Os multiplos de i ou j sao : ");
    

    while (C<n)
    {
        M++;

        if (M%i == 0 || M%j == 0)
        {
            printf ("%i", M);
            
            if (C<n-1)
            {
                printf (",");
            }
            
            C++;
        }


    }
    
    

}

