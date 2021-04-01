#include <stdio.h>

void DesenhaLinha (int A) {

    for (int i = 0; i < A; i++)
    {
        printf("========\n");
    }


}

int main () {
    
    int vezes;

    printf("Digite a quantidade de linhas a serem impressas: ");
    scanf ("%i", &vezes);

    DesenhaLinha(vezes);

        



}