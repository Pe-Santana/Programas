#include <stdio.h>
#include <stdlib.h>

struct coordenada
{
    int X,Y;
};


int main()
{

    struct coordenada *numeros;

    int n;

    printf("Quantos pontos deseja digitar: ");
    scanf("%i", &n);

    numeros = (int *)malloc(2*n * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        printf("Entre com a coordenada x do ponto %i: ", i + 1);
        scanf("%i", &numeros[i].X);

        printf("Entre com a coordenada y do ponto %i: ", i + 1);
        scanf("%i", &numeros[i].Y);

    }

    printf("Pontos digitados: ");

    for (int i = 0; i < n; i++)
    {
        printf("(%i,%i)",numeros[i].X, numeros[i].Y);

        if (i<n-1)
        {
            printf("; ");
        }
        
    }


    free(numeros);
}