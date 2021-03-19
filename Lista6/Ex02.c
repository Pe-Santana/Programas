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

     printf("O nome digitado e: ");

    for (int k = 0; k < i; k++)
    {
        printf ("%c", nome[k]);
    }


}
