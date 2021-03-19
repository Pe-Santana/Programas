#include <stdio.h>

int main() {

  int R, C, i;

  printf ("<< Contagem regressiva >>\n");

  printf ("Qual e o numero inicial?");

  scanf ("%i", &C);

  for ( i = 0; i < C+1; i++)
  {
    R = C - i;

    printf ("%i..", R); 

  }



  printf ("FIM!");

}

