#include <stdio.h>

int main() {

  double A, R;


  printf ("<< Calculo do Quadrado de n>>\n");
  printf ("Digite um numero:");

  scanf ("%lf", &A);

  R = A*A;

  printf ("O valor de %.2lf ao quadrado e  %.2lf", A, R);


}