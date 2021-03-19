#include <stdio.h>

int main()
{

    double Cores[4], soma = 0;


    printf("<< Probabilidades >>\n");

    printf("Digite a quantidade de bolinhas\n");

    printf("Verde:");
    scanf("%lf", &Cores[0]);
    
    printf("Azul:");
    scanf("%lf", &Cores[1]);

    printf("Amarela:");
    scanf("%lf", &Cores[2]);

    printf("Vermelha:");
    scanf("%lf", &Cores[3]);

    for (int i = 0; i < 4; i++)
    {
        soma = soma + Cores[i];
    }

    for (int i = 0; i < 4; i++)
    {
        Cores[i] = 100*Cores[i]/soma;
    }
    
    printf ("\nProbabilidades");
    if (Cores[0]> Cores[1] && Cores[0] > Cores[2] && Cores[0] > Cores[3])
    {
        printf ("\nVerde: %.2lf%%. << Maior probabilidade",Cores[0]);
        printf ("\nAzul: %.2lf%%. ",Cores[1]);
        printf ("\nAmarela: %.2lf%%. ",Cores[2]);
        printf ("\nVermelha: %.2lf%%. ",Cores[3]);
    }

    if (Cores[1]> Cores[2] && Cores[1] > Cores[3] && Cores[1] > Cores[0])
    {
        printf ("\nVerde: %.2lf%% ",Cores[0]);
        printf ("\nAzul: %.2lf%% << Maior probabilidade",Cores[1]);
        printf ("\nAmarela: %.2lf%% ",Cores[2]);
        printf ("\nVermelha: %.2lf%% ",Cores[3]);
    }

    if (Cores[2]> Cores[1] && Cores[2] > Cores[3] && Cores[2] > Cores[0])
    {
        printf ("\nVerde: %.2lf%% ",Cores[0]);
        printf ("\nAzul: %.2lf%% ",Cores[1]);
        printf ("\nAmarela: %.2lf%% << Maior probabilidade",Cores[2]);
        printf ("\nVermelha: %.2lf%% ",Cores[3]);
    }

    if (Cores[3]> Cores[1] && Cores[3] > Cores[2] && Cores[3] > Cores[0])
    {
        printf ("\nVerde: %.2lf%% ",Cores[0]);
        printf ("\nAzul: %.2lf%% ",Cores[1]);
        printf ("\nAmarela: %.2lf%% ",Cores[2]);
        printf ("\nVermelha: %.2lf%% << Maior probabilidade",Cores[3]);
    }

}
