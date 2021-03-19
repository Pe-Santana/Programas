#include <stdio.h>


int main() {

//como geralmente notas possuem 2 casas decimais, mantive como float pois requer menos espaço de armazenamento.

  float N1, N2, M; 
 
 
  printf ("<< Calculo da Media >>\n");
    
  printf ("Digite a nota da prova 1:");

  scanf ("%f", &N1);
 
 
  printf ("Digite a nota da prova 2:");

  scanf ("%f", &N2);
  
  M = (N1 + N2)/ 2;

  printf ("A nota media e %.2f", M);

  


}