#include <stdio.h>

int main() {

  //devido a limitação do tamanho em que o tipo inteiro atua, valores com mais de 10 digitos são comprometidos.
  //para contornar o problema basta aprimorar o tipo interio LONGO 2x.

  long long int fatorial = 1;

  printf ("<< Fatorial >>\n");

  for ( int i = 1; i < 16; i++)
  {
      
      fatorial = i*fatorial;
      
      if (i>=11)
      {
        printf ("%i! = %lld\n", i, fatorial);
      }
      
  } 

}

