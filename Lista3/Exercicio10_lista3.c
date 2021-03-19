#include <stdio.h>

int main() {


    int  A, B;

    printf ("== Operadores Booleanos ==\n");

    
    printf ("Entre com o primeiro valor (A):");
    
    scanf ("%i", &A);


    printf ("Entre com o segundo valor (B):");
    
    scanf ("%i", &B);


    //E logico
    if (A != 0 && B != 0)
    {
        printf ("A and B: VERDADEIRO\n");
    
    }
    else
    {
        printf ("A and B: FALSO\n");
    }
    
    //Ou Logico 
    if (A == 0 && B == 0)
    {
        printf ("A or B: FALSO\n");
    
    }
    else
    {
        printf ("A or B: VERDADEIRO\n");
    }

    
    if (A == 0 && B == 0)
    {
        printf ("A xor B: FALSO\n");
    
    }
    else if (A != 0 && B != 0)
    {
        printf ("A xor B: FALSO\n");
    }
    else
    {
        printf ("A xor B: VERDADEIRO\n");
    }


    if (A == 0 )
    {
        printf ("not A: VERDADEIRO\n");
    
    }
    else
    {
        printf ("not A: FALSO\n");
    }



    



    

}