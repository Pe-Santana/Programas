#include <stdio.h>

int main() {

  int C, F;

  printf ("<< Conversor Temperatura>>\n");
  printf ("Digite a temperatura (em Celsius):");
  
  scanf ("%i", &C);

  F = (C * 9/5)+ 32;


  printf ("%i graus Celsius correspondem a %i Fahrenheit", C, F);


}