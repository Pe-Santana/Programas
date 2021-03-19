#include <stdio.h>

int main()
{

    int M[10000], N;

    float CRA[10000];

    char Classe[1] [10000];

    printf("<< Universidade X  >>\n");

    printf ("Quantos alunos serao cadastrados: ");

    scanf ("%i", &N);

    for (int i = 0; i < N; i++)
    {
        printf ("Entre com o numero do aluno: ");
        
        scanf ("%i",&M[i]);
        
        printf ("entre com a classe social do aluno %i: ", M[i]);
        setbuf (stdin, NULL);
        scanf ("%c",&Classe[i]);

        printf ("entre com o CRA do aluno %i: ", M[i]);

        scanf ("%f",&CRA[i]);

        printf ("\n");


                
    }
    
    printf ("==== Alunos Cadastrados ====\n");

    for (int i = 0; i < N; i++)
    {
        printf ("Numero: %i Classe Social: %c CRA: %.2f\n", M[i], Classe[i], CRA[i]);
    }
    


}
