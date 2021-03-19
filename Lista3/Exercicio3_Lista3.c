#include <stdio.h>

int main() {


    int Unidade;

    float Valor, R; 


    printf ("<< Valor do Produto com imposto >>\n");

    printf ("Digite o valor do produto R$:");

    scanf ("%f", &Valor);

    printf ("Digite a unidade da federacao:");

    scanf ("%i", &Unidade);

    if (Unidade == 1)
    {
        R = Valor + (Valor*0.07);

        printf ("Valor final com impostos R$: %.2f", R);

    }
    if (Unidade == 2)
    {
        R = Valor + (Valor*0.12);

        printf ("Valor final com impostos R$: %.2f", R);

    }
    if (Unidade == 3)
    {
        R = Valor + (Valor*0.15);

        printf ("Valor final com impostos R$: %.2f", R);

    }
    if (Unidade == 4)
    {
        R = Valor + (Valor*0.08);

        printf ("Valor final com impostos R$: %.2f", R);

    }
    

    




}