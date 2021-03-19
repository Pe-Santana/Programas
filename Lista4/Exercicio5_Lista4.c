#include <stdio.h>

int main() {

  int R, C, i=0;

  printf ("<< Contagem regressiva >>\n");

  printf ("Qual e o numero inicial?");

  scanf ("%i", &C);

  do
  {
    R = C - i;

    printf ("%i..", R); 

    i++;
  } while (i<C+1);



  printf ("FIM!");

}

