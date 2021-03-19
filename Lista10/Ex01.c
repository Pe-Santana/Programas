#include <stdio.h>

int main()
{

    int val[5] = {2, 4, 5, 8, 10};

    unsigned int endereco_2;

    endereco_2 = &val[2];

    scanf("%d", endereco_2);

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", val[i]);
    }
}