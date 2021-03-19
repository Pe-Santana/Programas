#include <stdio.h>

int main() {

//como geralmente notas possuem 2 casas decimais, mantive como float pois requer menos espaço de armazenamento.

    char nome;

    float N1, N2, N3, M; 


    printf ("<< Calculo da Media >>\n");

    printf ("Digite a inicial do nome do aluno:");

    setbuf(stdin,NULL);

    scanf ("%c", &nome);

    printf ("Digite a nota da prova 1:");

    scanf ("%f", &N1);


    printf ("Digite a nota da prova 2:");

    scanf ("%f", &N2);


    printf ("Digite a nota da prova 3:");

    scanf ("%f", &N3);



    M = (N1*1 + N2*1 + N3*2)/4;

    //supondo que a media para aprovação seja 60
    if (M >= 60)
    {
        printf ("A nota media do aluno %c. e %.2f => APROVADO!", nome, M);
    }else
    {
        printf ("A nota media do aluno %c. e %.2f => REPROVADO!", nome, M);
    }
    
    




}