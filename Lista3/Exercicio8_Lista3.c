#include <stdio.h>
#include <math.h>


int main() {


    float R1, R2, A, B, C, Delta;

    printf ("<< Raizes de uma equacao de 2o. grau >>\n");

    
    printf ("Entre com o termo A:");
    
    scanf ("%lf", &A);


    printf ("Entre com o termo B:");
    
    scanf ("%lf", &B);


    printf ("Entre com o termo C:");
    
    scanf ("%lf", &C);

  
    Delta = pow(B,2)- 4*A*C;  

    //Numero complexo

    if (Delta<0)
    {
        R1 = ((-1*B) + sqrt(-1*Delta)) / (2*A);

        R2 = ((-1*B) - sqrt(-1*Delta)) / (2*A);

        printf ("as raizes da equacao sao %.2lf * i e %.2lf * i.", R1, R2);
    }else
    {
        R1 = ((-1*B) + sqrt(Delta)) / (2*A);

        R2 = ((-1*B) - sqrt(Delta)) / (2*A);

        printf ("as raizes da equacao sao %.2lf e %.2lf.", R1, R2);
    }
    
    
    

    

}