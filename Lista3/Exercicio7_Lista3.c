#include <stdio.h>
#include <math.h>


int main() {

    int A, B, C;


    printf ("<< Tipo de Triangulo >>\n");

    printf ("Entre com o 1o. lado do triangulo:");
    
    scanf ("%i", &A);
   
   
    printf ("Entre com o 2o. lado do triangulo:");
    
    scanf ("%i", &B);
   
   
    printf ("Entre com o 3o. lado do triangulo:");
    
    scanf ("%i", &C);


    if (A<1 || B<1 || C<1)
    {
        printf (" ERRO. Valores negativos nao suportados");
    }else
    {
        if (A>B+C || B>A+C || C>A+B)
        {
            printf ("Nao e triangulo");
        }
        if (pow(A,2) == (pow(B,2)+pow(C,2)) || pow(B,2) == (pow(A,2)+pow(C,2)) || pow(C,2) == (pow(B,2)+pow(A,2)))
        {
            printf ("O triangulo e RETANGULO");
        }else
        {
            if (pow(A,2) > (pow(B,2)+pow(C,2)) || pow(B,2) > (pow(A,2)+pow(C,2)) || pow(C,2) > (pow(B,2)+pow(A,2)))
            {
                printf ("O triangulo e OBTUSANGULO");
            }else
            {
                if (pow(A,2) < (pow(B,2)+pow(C,2)) || pow(B,2) < (pow(A,2)+pow(C,2)) || pow(C,2) < (pow(B,2)+pow(A,2)))
                {
                    printf ("O triangulo e ACUANGULO");
                }
                

            }

        }
        
        


    
    
    
    }
    
    
    
    
    




}