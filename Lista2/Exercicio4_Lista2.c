#include <stdio.h>

int main() {

  //como geralmente notas possuem 2 casas decimais, mantive como float pois requer menos espaço de armazenamento.

  char nome[10];

  int P1, P2, P3;

  float N1, N2, N3, M; 


  printf ("<< Calculo da Media >>\n");

  printf ("Digite o nome do aluno:");

  scanf ("%s", &nome);
    
  printf ("Digite a nota da prova 1:");

  scanf ("%f", &N1);


  printf ("Digite a nota da prova 2:");

  scanf ("%f", &N2);


  printf ("Digite a nota da prova 3:");

  scanf ("%f", &N3);

  printf ("Digite o peso da prova 1:");

  scanf ("%i", &P1);


  printf ("Digite o peso da prova 2:");

  scanf ("%i", &P2);


  printf ("Digite o peso da prova 3:");

  scanf ("%i", &P3);



  M = (N1*P1 + N2*P2 + N3*P3)/ (P1 + P2 + P3);

  printf ("A nota media do aluno %s. e %.2f", nome, M);




}