#include <stdio.h>

int main() {

    int J = 50000, C = 25000, Tj, Tc;


    printf ("<< Mais dinheiro >>\n");

    for (int i = 1; i < 100; i++)
    {
        Tj = J + i*(12*800);
        Tc = C + i*(12*3000);

        if (Tc>Tj)
        {
            
            
            printf ("Levara %i ano(s) para que Carlos fique com mais dinheiro que o Jose.", i);

            break;
        }
        

    }
    








}

