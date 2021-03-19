#include <stdio.h>
#include <string.h>


int main () {

    char Letra;


    printf ("<< Forca de uma letra so >>\n");

    for (int i = 1; i < 6; i++)
    {
        printf ("Qual a letra?");
        setbuf(stdin,NULL);
        scanf ("%c", &Letra);

        if (Letra == 'q')
        {
            printf ("ACERTOU!");

            break;
        }else
        {
            printf ("Errado! Voce tem mais %i chances\n\n",5-i);
        }
        
        
    }
    



}