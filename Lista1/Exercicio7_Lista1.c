#include <stdio.h>

int main() {

  int dias; 
  float bruto, liquido;


  printf ("<< Pagamento encanador >>\n");
    
  printf ("Digite o numero de dias trabalhados:");

  scanf ("%i", &dias);

  bruto = dias * 30;
  
  liquido = bruto - (0.12 * bruto);

  printf ("Valor bruto R$ %.2f\n", bruto);
  printf ("Valor liquido R$ %.2f\n",liquido);
  printf ("ISS R$:%.2f\n", bruto*0.04);
  printf ("IR R$:%.2f\n", bruto*0.08);

}