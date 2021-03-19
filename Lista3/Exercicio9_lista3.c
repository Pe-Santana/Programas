#include <stdio.h>


int main() {


    float Venda, Comissao;

    printf ("<< Valor da Venda >>\n");

    
    printf ("Entre com o valor da venda mensal em R$:");
    
    scanf ("%f", &Venda);

    if (Venda < 20000)
    {
        Comissao = 400 + (Venda*0.14);

        printf ("A comissao desse mes e de R$%.2f.", Comissao);
    }
    else if (Venda < 40000 && Venda>=20000)
    {
        Comissao = 500 + (Venda*0.14);

        printf ("A comissao desse mes e de R$%.2f.", Comissao);
    }
    else if (Venda < 60000 && Venda>=40000)
    {
        Comissao = 550 + (Venda*0.14);

        printf ("A comissao desse mes e de R$%.2f.", Comissao);
    }
    else if (Venda < 80000 && Venda>=60000)
    {
        Comissao = 600 + (Venda*0.14);

        printf ("A comissao desse mes e de R$%.2f.", Comissao);
    }
    else if (Venda < 100000 && Venda>=80000)
    {
        Comissao = 650 + (Venda*0.14);

        printf ("A comissao desse mes e de R$%.2f.", Comissao);
    }
    else if (Venda>=100000)
    {
        Comissao = 700 + (Venda*0.16);

        printf ("A comissao desse mes e de R$%.2f.", Comissao);
    }

}