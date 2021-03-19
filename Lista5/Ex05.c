#include <stdio.h>

int main()
{

    int V[5], maior, menor, soma = 0;
    float media;

    printf("<< 5 valores >>\n");

    for (int i = 0; i < 5; i++)
    {
        printf("Entre com o numero %i: ", i + 1);

        scanf("%i", &V[i]);
        
    }

    maior = V[0];
    menor = V[0];
    

    printf("Os numeros digitados sao sao:");

    for (int j = 0; j < 5; j++)
    {
        printf(" %i", V[j]);
    }


    for (int k = 0; k < 5; k++)
    {
        if (V[k]>maior)
        {
            maior = V[k];
        }
        if (V[k]<menor)
        {
            menor = V[k];
        }
        soma = soma + V[k];    
    }
    media = soma/5.0;
    
    printf ("\nO maior valor e: %i", maior);
    printf ("\nO menor valor e: %i", menor);
    printf ("\nA media e: %.1f", media);
}
