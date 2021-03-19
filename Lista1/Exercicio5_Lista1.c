#include <stdio.h>

int main() {

  float Salario, R;


  printf ("<< Aumento Salarial>>\n");
  printf ("Digite o valor do salario R$:");

  scanf ("%f", &Salario);

  R = Salario * 1.25;

  printf ("Apos 25%% de aumento o salario fica em R$ %.2f ", R);


}