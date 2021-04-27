#define MAX 100

typedef struct aluno
{
    int matricula;
    char nome[30];
    float nota1, nota2, nota3;
} aluno;

typedef struct Lista Lista;

Lista *cria_lista();


