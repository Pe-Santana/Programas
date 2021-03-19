#include <stdio.h>

int main() {

  float A, B, C, D, M;

  //como geralmente notas possuem 2 casas decimais, mantive como float pois requer menos espaço de armazenamento.

  printf ("<< Media aritmetica>>\n");
  printf ("Digite a 1a nota:S");

  scanf ("%f", &A);

  printf ("Digite a 2a nota:");

  scanf ("%f", &B);

  printf ("Digite a 3a nota:");

  scanf ("%f", &C);

  printf ("Digite a 4a nota:");

  scanf ("%f", &D);

  printf ("===Notas===\n");

  M = (A + B + C + D)/4;

  printf ("Nota 1: %.2f; Nota 2: %.2f; Nota 3: %.2f; Nota 4: %.2f\n", A, B, C, D);

  printf ("Media: %.2f", M);


}