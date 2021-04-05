#include <stdio.h>
#include <stdlib.h>

struct coordenada
{
    int X,Y;
};


int main()
{

    struct coordenada *numeros;

    int *esquerda, *direita, *cima, *baixo;
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
    
    cima = &numeros[0];
    baixo = &numeros[0];
    esquerda = &numeros[0];
    direita = &numeros[0];
    
    for (int i = 0; i < n; i++)
    {
        if (numeros[i+1].Y > numeros[i].Y)
        {
            cima = &numeros[i+1];
        }
        if (numeros[i+1].Y < numeros[i].Y)
        {
            baixo = &numeros[i+1];
        }
        if (numeros[i+1].X > numeros[i].X)
        {
            direita = &numeros[i+1];
        }
        if (numeros[i+1].X < numeros[i].X)
        {
            esquerda = &numeros[i+1];
        }
        

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
    printf("O ponto mais a cima e (%i)  ",cima);

    free(numeros);
}