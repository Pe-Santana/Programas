#include <stdio.h>
#include <stdlib.h>

int main()
{

    int *numeros;

    int pares = 0, impares = 0;

    int n;

    printf("defina o numero de inteiros: ");
    scanf("%i", &n);

    numeros = (int *)malloc(n * sizeof(int));

    for (int i = 0; i < 5; i++)
    {
        printf("digite um valor para a posicao %i : ", i + 1);
        scanf("%i", &numeros[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        if (numeros[i] % 2 == 0)
        {
            pares++;
        }
        else
        {
            impares++;
        }
    }

    printf("O array tem %i pares e %i impares", pares, impares);

    free(numeros);
}