#include <stdio.h>

int elevado(int x, int n)
{
    unsigned long long int resultado = x;

    if (n > 0)
    {
        for (int i = 1; i < n; i++)
        {
            resultado *= x;
        }
        return resultado;
    }
    if (n < 0)
    {
        n *= -1;

        for (int i = 1; i < n; i++)
        {
            resultado *= x;
        }
        return resultado;
    }
    else if (n == 0)
    {
        return 1;
    }
}

int main () {

    int base, expoente;
    unsigned long long int resultado;

    printf("Digite o valor de x: ");
    scanf("%i",&base);

    printf("Digite o valor de n: ");
    scanf("%i",&expoente);

    resultado = elevado(base,expoente);

    if (expoente > 0 || expoente == 0)
    {
        printf("O valor de %i elevado a %i eh %llu",base,expoente,resultado);
    }else {
        printf("O valor de %i elevado a %i eh 1/%llu",base,expoente,resultado);
    }
    











}