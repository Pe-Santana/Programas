#include <stdio.h>

int main() {


    char Unidade;

    int T,R, i = 0; 


    printf ("<< Conversor de Temperatura >>\n");

    printf ("Digite a temperatura:");

    scanf ("%i", &T);

    printf ("Digite a unidade:");


    
    while (i == 0)
    {
        setbuf(stdin,NULL);

        scanf ("%c", &Unidade);


        if (Unidade == 'c')
        {
            R = (T * 9/5) + 32;

            printf ("%i graus Celsius equivale a %i graus Fahrenheit", T, R);

            i++;

        }else if (Unidade == 'f')
        {
            R = (T - 32) * 5/9;

            printf ("%i graus Fahrenheit equivale a %i graus Celsius", T, R);

            i++;
    
    
        }else
        {
           
           //substui a mensagem de erro por uma solicitação nova de unidade
           
            printf ("Valor de Unidade invalido. Digite um valor valido:");
          
            
            /*
            printf ("Erro");
            
            i++;
            */
            
   
        }   
    
    }
    
    
    

    




}