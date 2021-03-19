#include <stdio.h>
#include <math.h>

int main() {

  double Zr, Zi, Wr, Wi; 
 
 
  printf ("<<Numero complexo>>\n");
    
  printf ("Informe a parte real de z:");

  scanf ("%lf", &Zr);
  

  printf ("Informe a parte imaginaria de z:");

  scanf ("%lf", &Zi);

    
  printf ("Informe a parte real de w:");

  scanf ("%lf", &Wr);
  

  printf ("Informe a parte imaginaria de w:");

  scanf ("%lf", &Wi);


  printf ("z + w = %.1lf + %.1lfi\n", Zr+Wr, Zi+Wi);
  printf ("z - w = %.1lf + %.1lfi\n", Zr-Wr, Zi-Wi);
  printf ("z * w = %.1lf + %.1lfi\n", ((Zr*Wr)-(Zi*Wi)), ((Zr*Wi)+(Wr*Zi)));
  printf("|z| = %.4lf\n",sqrt(Zr*Zr+Zi*Zi));
  printf("|w| = %.4lf",sqrt(Wr*Wr+Wi*Wi));

}