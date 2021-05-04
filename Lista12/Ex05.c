#include <stdio.h>
#include <math.h>

int quadrado_perfeito(int n)
{
    double confere;
    
    confere = sqrt(n);

    if (confere != (int) confere)
    {
        return 0;
    }
    else
    {
        return 0;
    }
    
}

int main () {

    int n, verificador;

    printf("Digite o valor de n: ");
    scanf("%i",&n);

    verificador= quadrado_perfeito(n);

    if (verificador == 0)
    {
        printf("O numero %i nao eh um quadrado perfeito",n);
    }else
    {
        printf("O numero %i eh um quadrado perfeito",n);

    }
    
    









}