#include <stdio.h>
#include <math.h>


int main() {

    int i, B, Decimal = 0;


    printf ("<< Conversor binario-decimal >>\n");

    printf ("Entre com o numero de bits :");

    scanf ("%i", &B);

    i = B-1;


    int bits[10];

    for (int j = 0; j < B; j++)
    {
        printf ("Digite o bit #%i :", j+1);
        scanf ("%i",&bits[j]);
    
    }

    for (int j = 0; j < B; j++)
    {
        Decimal = Decimal + (pow(2,(i-j))*bits[j]);
    }

    printf ("O numero binario ");

    for (int j = 0; j < B; j++)
    {
        printf ("%i", bits[j]);
    }
    

    printf (" em decimal e %i", Decimal);

}

