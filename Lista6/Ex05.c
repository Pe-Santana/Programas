#include <stdio.h>

int main()
{
    int iguais = 1, limite1, limite2;
    

    char nome1[50], nome2[50];

    printf("<< Compara nomes>>\n");

    printf("Digite um nome 1: ");

    scanf("%s", &nome1);

    printf("Digite um nome 2: ");

    scanf("%s", &nome2);

    for (int i = 0; i < 50; i++)
    {
        if (nome1[i] < 123 && nome1[i] > 96)
        {
            nome1[i] = nome1[i] - 32;
        }
    }
    for (int i = 0; i < 50; i++)
    {
        if (nome2[i] < 123 && nome2[i] > 96)
        {
            nome2[i] = nome2[i] - 32;
        }
    }






    for (int i = 0; i < 50; i++)
    {
        if (nome1[i] == '\0')
        {
            limite1 = i;

            break;
        }
        
    }
    for (int i = 0; i < 50; i++)
    {
        if (nome2[i] == '\0')
        {
            limite2 = i;

            break;
        }
        
    }

    if (limite1 != limite2)
    {
        iguais = 0;
    }else
    {
        for (int i = 0; i < limite1; i++)
        {
            if (nome1[i] != nome2[i])
            {
                iguais = 0;
                break;
            }
        }

    }
    
    
    
    
    if (iguais == 1)
    {
        printf("Os nomes digitados sao iguais ");
    }else
    {
        printf("Os nomes digitados sao diferentes ");
    }
    
    
}