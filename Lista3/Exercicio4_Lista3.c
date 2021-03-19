#include <stdio.h>

int main() {


    char A, B, C;

    double Nota1, Nota2, Nota3; 


    printf ("<< Notas da Turma >>\n");

    printf ("Entre com o nome do aluno #1:");

    setbuf(stdin,NULL);
    
    scanf ("%c", &A);

    printf ("Entre com a nota do aluno #1:");

    scanf ("%lf", &Nota1);


    printf ("Entre com o nome do aluno #2:");

    setbuf(stdin,NULL);

    scanf ("%c", &B);

    printf ("Entre com a nota do aluno #2:");

    scanf ("%lf", &Nota2);

   
    printf ("Entre com o nome do aluno #3:");

    setbuf(stdin,NULL);

    scanf ("%c", &C);

    printf ("Entre com a nota do aluno #3:");

    scanf ("%lf", &Nota3);


    if (Nota1>Nota2 && Nota2>Nota3)
    {
        
        printf ("%c. tem a maior nota (%.1lf) e %c. a menor (%.1lf)", A, Nota1, C, Nota3);

    }
    if (Nota1>Nota3 && Nota3>Nota2)
    {
        
        printf ("%c. tem a maior nota (%.1lf) e %c. a menor (%.1lf)", A, Nota1, B, Nota2);

    }
    if (Nota2>Nota1 && Nota1>Nota3)
    {
        
        printf ("%c. tem a maior nota (%.1lf) e %c. a menor (%.1lf)", B, Nota2, C, Nota3);

    }
    if (Nota2>Nota3 && Nota3>Nota1)
    {
        
        printf ("%c. tem a maior nota (%.1lf) e %c. a menor (%.1lf)", B, Nota2, A, Nota1);

    }
    if (Nota3>Nota2 && Nota2>Nota1)
    {
        
        printf ("%c. tem a maior nota (%.1lf) e %c. a menor (%.1lf)", C, Nota3, A, Nota1);

    }
    if (Nota3>Nota1 && Nota1>Nota2)
    {
        
        printf ("%c. tem a maior nota (%.1lf) e %c. a menor (%.1lf)", C, Nota3, B, Nota2);

    }





}