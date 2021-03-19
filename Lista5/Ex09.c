#include <stdio.h>

int main()
{

    int Alunos[100],N;

    float desvio = 0, media=0;

    printf("<< Media de n alunos. Maximo 100 alunos  >>\n");

    printf ("Entre com o numero de alunos:");

    scanf ("%i",&N);

    if (N>100)
    {
        printf ("ERRO! O numero maximo de alunos permitido e 100.");
        
        
        return 0;
    }
    

    for (int i = 0; i < N; i++)
    {
        printf ("Digite a nota do aluno %i: ",i+1);
        scanf ("%i",&Alunos[i]);
        media = media + Alunos[i];
    }
    media = media/N;
    
    printf ("Relatorio de Notas\n");

    for (int j = 0; j < N; j++)
    {
        printf ("A nota do aluno %i e: %i \n", j, Alunos[j]);
    }
    


    printf ("A media da turma e:  %.1f", media);
    





}
