#include <stdio.h>
#include <math.h>

int main () {

    int Bits;

    double Memoria;


    printf ("<< Quantidade de Enderecos de Memorias >>\n");

    for (Bits = 1; Bits < 129; Bits= Bits*2)
    {
        Memoria = pow(2, Bits);

        printf ("Com %i bits e possivel enderecar %.0f posicoes de memoria\n", Bits, Memoria);

    }
    










}