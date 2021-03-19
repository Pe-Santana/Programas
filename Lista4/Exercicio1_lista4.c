#include <stdio.h>

int main() {

   int R,C = 11, i=1;

   printf ("<< Contagem regressiva >>\n");


   while (i < 12)
   {
      R = C - i;

      printf ("%i..", R); 

      i++;
   }

   printf ("FIM!");

}