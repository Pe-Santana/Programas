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
    
    cima = &numeros[0].Y;
    baixo = &numeros[0].Y;
    esquerda = &numeros[0].X;
    direita = &numeros[0].X;
    
    for (int i = 0; i < n; i++)
    {
        if (*cima < numeros[i].Y)
        {
            cima = &numeros[i].Y;
        }
        if (*cima > numeros[i].Y)
        {
            baixo = &numeros[i].Y;
        }
        if (*direita < numeros[i].X)
        {
            direita = &numeros[i].X;
        }
        if (*esquerda > numeros[i].X)
        {
            esquerda = &numeros[i].Y;
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
    printf("\nO ponto mais a cima e (%i)  ",*cima);
    printf("\nO ponto mais a baixo e (%i)  ",*baixo);
    printf("\nO ponto mais a direita e (%i)  ",*direita);
    printf("\nO ponto mais a esquerda e (%i)  ",*esquerda);

    free(numeros);
}