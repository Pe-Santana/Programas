#include <stdio.h>

int main() {

  
  int A, B;
  
  printf ("== Operadores Booleanos ==\n");

  printf ("Digite 0 para falso e nao 0 para verdadeiro\n");

 
  printf ("Entre com o primeiro valor (A):");
  
  scanf ("%i", &A);
    

  printf ("Entre com o segundo valor (B):");

  scanf ("%i", &B);

  
  //E logico
  if (A != 0 && B != 0)
  {
    printf ("A and B: 1\n");
  
  }
  else
  {
    printf ("A and B: 0\n");
  }
  
 //Ou Logico 
  if (A == 0 && B == 0)
  {
    printf ("A or B: 0\n");
  
  }
  else
  {
    printf ("A or B: 1\n");
  }

  
  if (A == 0 && B == 0)
  {
    printf ("A xor B: 0\n");
  
  }
  else if (A != 0 && B!=0)
  {
    printf ("A xor B: 0\n");
  }
  else
  {
    printf ("A xor B: 1\n");
  }


  if (A == 0 )
  {
    printf ("not A: 1\n");
  
  }
  else
  {
    printf ("not A: 0\n");
  }



}

