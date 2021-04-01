#include <stdio.h>

void DesenhaLinha (int A) {

    for (int i = 0; i < A; i++)
    {
        printf("=");
    }


}

int main () {
    
    int vezes, tamanho;

    printf("Digite a quantidade de linhas a serem impressas: ");
    scanf ("%i", &vezes);

    printf("Digite o tamanho da linha: ");
    scanf ("%i", &tamanho);

    for (int i = 0; i < vezes; i++)
    {
        DesenhaLinha(tamanho);
        printf("\n");
    }
    


        



}