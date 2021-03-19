#include <stdio.h>
#include <math.h>

int main()
{

    int V[5];

    double desvio = 0, media=0;

    printf("<< Media e desvio-padrao >>\n");

    for (int i = 0; i < 5; i++)
    {
        printf ("Digite o valor %i: ",i+1);
        scanf ("%i",&V[i]);
        media = media + V[i];
    }
    media = media/5;

    for (int j = 0; j < 5; j++)
    {
        desvio = ((V[j] - media)*(V[j] - media)) + desvio;
    }
    desvio = sqrt(desvio/4.0);

    printf ("A media e %.0lf e o desvio-padrao e %lf", media, desvio);
    





}
