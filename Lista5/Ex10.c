#include <stdio.h>

int main()
{

    int A[3], B[3], C[3];


    printf("<< Subtracao de vetores  >>\n");

    for (int i = 0; i < 3; i++)
    {
        printf ("Digite o valor %i de A: ", i+1);
        scanf ("%i",&A[i]);

    }
    
    printf ("\n");

    for (int j = 0; j < 3; j++)
    {
        printf ("Digite o valor %i de B: ", j+1);
        scanf ("%i",&B[j]);

    }

    for (int k = 0; k < 3; k++)
    {
        C[k] = A[k] - B[k];
    }
    
    printf (" O vetor C, definido como C = A - B e (%i, %i, %i)", C[0], C[1], C[2]);


}
