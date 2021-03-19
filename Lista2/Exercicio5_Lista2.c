#include <stdio.h>
#include <math.h>

int main() {


  
  int B1, B2, B3, B4, D;
 
 
  printf ("== Conversor de numeros binarios ==\n");

  printf ("Digite o 1o. bit:");

  scanf ("%i", &B1);
    
  
  printf ("Digite o 2o. bit:");

  scanf ("%i", &B2);


  printf ("Digite o 3o. bit:");

  scanf ("%i", &B3);


  printf ("Digite o 4o. bit:");

  scanf ("%i", &B4);



  D= (pow(2,3)*B1) + (pow(2,2)*B2) + (pow(2,1)*B3) + (pow(2,0)*B4);

  printf ("O numero binario %i%i%i%i corresponde ao numero decimal %i", B1, B2, B3, B4, D);

  


}