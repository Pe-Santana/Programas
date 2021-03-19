#include <stdio.h>

int main() {

  int A, B, C; 
 
  float soma, Premio, premio_A, premio_B, premio_C;


  printf ("<< Loteria >>\n");
    
  printf ("Bolao jogador 1 R$:");

  scanf ("%i", &A);


  printf ("Bolao jogador 2 R$:");

  scanf ("%i", &B);


  printf ("Bolao jogador 3 R$:");

  scanf ("%i", &C);
  
  soma = A + B + C;

  printf ("Informe o valor do premio:");

  scanf ("%f", &Premio);

  premio_A = Premio*A/soma;

  premio_B = Premio*B/soma;

  premio_C = Premio*C/soma;


  printf ("Jogador 1 recebera R$: %.1f\n", premio_A);
  printf ("Jogador 2 recebera R$: %.1f\n", premio_B);
  printf ("Jogador 3 recebera R$: %.1f\n", premio_C);

}