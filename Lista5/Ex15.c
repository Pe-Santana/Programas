#include <stdio.h>

int main()
{

    int V[8], iguais[8], n = 1, valores = 0;

    printf("<< Valores iguais  >>\n");

    for (int i = 0; i < 8; i++)
    {
        printf("Entre com o numero %i: ", i + 1);
        scanf("%i", &V[i]);
    }

    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (V[i] == V[j] && i != j)
            {
                for (int k = 0; k < 8; k++)
                {
                    if (V[i] == iguais[k])
                    {
                        n = 0;
                    }
                }
                if (n == 1)
                {
                    iguais[valores] = V[i];
                    valores++;
                }
            }
            n = 1;
        }
    }

    printf("Valores repetidos: ");

    for (int i = 0; i < valores; i++)
    {
        printf(" %i", iguais[i]);
        if (i < valores - 1)
        {
            printf(",");
        }
    }

    

}
