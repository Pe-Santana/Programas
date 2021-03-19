#include <stdio.h>

int main() {

   int R, C, i=0;

   printf ("<< Contagem progressiva ate 0 >>\n");

   printf ("Qual e o numero inicial?");

   scanf ("%i", &C);

    do
    {
        R = C - i;

        printf ("%i..", R); 

        i--;
    } while (i > C-1);
    

    //devido a disposição da estrutura, o comando ombrigatoriamente ira ser executado pelo menos 1 vez. 
   printf ("FIM!");

}

