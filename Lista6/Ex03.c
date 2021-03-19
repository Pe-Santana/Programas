#include <stdio.h>

int main()
{

    int i=0;

    char nome[50];

    printf("<< Vetor de char>>\n");

    printf("Digite um nome: ");

    while ((nome[i] = getchar ()) != '\n')
    {
        i++;
    }

    for (int j = 0; j < 50; j++)
    {
        if (nome[j] < 123 && nome[j] > 96)
        {
            nome[j] = nome[j] - 32;
        }
    }

     printf("O nome digitado e: ");

    for (int k = 0; k < i; k++)
    {
        printf ("%c", nome[k]);
    }
}