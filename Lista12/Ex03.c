#include <stdio.h>

void DesenhaLinha (int A) {

    for (int i = 0; i < A; i++)
    {
        printf("=");
    }
}

int Fatorial (int A){
    
    signed long long int fat =1;

    for (int i = A; i > 0 ; i--)
    {
        fat *=  i;
    }
    return fat;
}

int main (){

    int num, tamanho;
    signed long long int fatorial;

  
    printf("Digite o tamanho da linha: ");
    scanf ("%i", &tamanho);

    printf("Digite numero que deseja calcular o fatorial: ");
    scanf ("%i", &num);

    DesenhaLinha(tamanho);
    printf("\n");

    fatorial = Fatorial(num);
    printf("O fatorial de %i eh %lli \n",num,fatorial);

    DesenhaLinha(tamanho);

}