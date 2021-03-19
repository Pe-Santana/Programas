#include <stdio.h>

int main()
{
    int i = 0, j = 0, l = 0, limite_nome, limite_sobrenome;

    char nome[40], primeiro [40], sobrenome[40];


    printf("<< Nomes >>\n");

    printf("Digite o primeiro nome e ultimo nome: ");

    while ((nome[i] = getchar ()) != '\n')
    {
        i++;
    }
    
    while (nome[j] != 32)
    {
        primeiro[j] = nome[j];
        j++;
    }
    limite_nome = j;

    
    while (j != i)
    {
        sobrenome[l] = nome[j];
        l++;
        j++;
    }
    limite_sobrenome = l;

    printf ("Nome: ");

    for (int k = 0; k < limite_nome; k++)
    {
        printf ("%c", primeiro[k]);
    }
    
    printf ("\n");

    printf ("Sobrenome: ");

    for (int k = 0; k < limite_sobrenome; k++)
    {
        printf ("%c", sobrenome[k]);
    }

















}