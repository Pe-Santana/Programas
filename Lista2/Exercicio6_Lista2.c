#include <stdio.h>

int main() {

  
  int A, B, aux;
 
 
  printf ("== Troca do conteudo de variaveis ==\n");

  printf ("Entre com o valor de A:");

  scanf ("%i", &A);
    
  
  printf ("Entre com o valor de B:");

  scanf ("%i", &B);

  aux = A;
  A = B;
  B = aux;



  printf ("Apos a troca, o valor de A e %i e o de B e %i", A, B);

  


}