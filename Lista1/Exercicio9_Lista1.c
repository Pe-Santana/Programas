#include <stdio.h>
#include <math.h>

int main() {

  int x, y; 
 
  float H;


  printf ("<< Distância >>\n");
    
  printf ("Entre com a coordenada x:");

  scanf ("%i", &x);
  
  printf ("Entre com a coordenada y:");

  scanf ("%i", &y);

  H = (x*x) + (y*y);


  printf ("A distancia entre os pontos (%i,%i) e (0,0)  eh %.1f", x, y, sqrt(H));


}