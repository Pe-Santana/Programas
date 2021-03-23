#include <stdio.h>

int main()
{

    int N[5], maior = 0;

    printf("<< Normalizando as notas >>\n");

    for (int i = 0; i < 5; i++)
    {
        printf ("Entre com a nota do aluno %i: ",i+1);
        scanf ("%i",&N[i]);

        if (N[i] > maior)
        {
            maior = N[i];
        }
        
    }

    printf("\nNotas normalizadas\n\n");

    for (int j = 0; j < 5; j++)
    {
        N[j] = N[j]*100/maior;
    
        printf ("A nota do aluno %i e %i\n", j +1,N[j]);

    }
    
    





}
