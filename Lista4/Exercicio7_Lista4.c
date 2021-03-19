#include <stdio.h>

int main() {

   int R, C, i=0;

   printf ("<< Contagem progressiva ate 0 >>\n");

   printf ("Qual e o numero inicial?");

   scanf ("%i", &C);


   while (i > C-1)
   {
      R = C - i;

      printf ("%i..", R); 

      i--;
   }

   printf ("FIM!");

}

