#include <stdio.h>

int main() {

    int N, V = 0;


    printf ("<< Triangulo de Floyd >>\n");

    printf ("Digite o numero de linhas do triangulo : ");

    scanf ("%i", &N);


    for (int i = 0; i <= N; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            V++;
            printf ("%i ", V);
        }
        
        printf ("\n");
    }
    







}

