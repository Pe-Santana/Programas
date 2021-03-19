#include <stdio.h>

int main()
{

    int N[5];


    printf("<< Zerando negativos  >>\n");

    for (int i = 0; i < 5; i++)
    {
        printf ("Entre com o numero %i: ", i+1);
        scanf ("%i",&N[i]);

        if (N[i] < 0)
        {
            N[i] = 0;
        }
        
    }
    
    printf ("\nZerando os negativos, obtem-se:");

    for (int j = 0; j < 5; j++)
    {
        printf (" %i", N[j]);


    }

}
