#include <stdio.h>


int main() {

    int P, Div = 2, resto;

    int Primo = 0;

    printf ("<< Numeros primos >>\n");

    printf ("Entre com o valor :");

    scanf ("%i", &P);

    if (P<= 1)
    {
        Primo = 1;
    }
    
    while (Primo == 0 && Div <= P/2)
    {
        resto = P%Div;

        if (resto == 0)
        {
            Primo = 1;
            
        }
        
        Div++;
    }
    
    if (Primo == 0)
    {
        printf ("O numero %i e primo", P);
    }else
    {
        printf ("O numero %i NAO e primo", P);
    }
    
    
    

}

