#include <stdio.h>

int main() {

  float Premio;


  printf ("<< Loteria >>\n");
    
  printf ("Valor total do premio:");

  scanf ("%f", &Premio);


  

  printf ("Primeiro vencedor:%.2f\n", Premio*0.46);
  printf ("Segundo vencedor:%.2f\n", Premio*0.32);
  printf ("Terceiro vencedor:%.2f\n", Premio*0.22);

}