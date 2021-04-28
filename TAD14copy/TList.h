#define MAX 100

typedef struct aluno
{
    int matricula;
    char nome[30];
    float nota1, nota2, nota3;
} aluno;

typedef struct Lista Lista;

Lista *cria_lista();

int libera_lista(Lista *l);

int insere_lista_final(Lista *l, aluno a);

int insere_lista_inicio(Lista *l, aluno a);

int consulta_lista_pos(Lista *l, int pos, aluno *a);

int consulta_lista_mat(Lista *l, int mat, aluno *a);

int insere_lista_ordenada(Lista *l, aluno a);

int imprime_lista(Lista *l);

int remove_lista_inicio(Lista *l);

int remove_lista_final(Lista *l);

int remove_lista(Lista *l, int mat);

int remove_lista_otimizado(Lista *l, int mat);

int tamanho_lista(Lista *l);

int lista_cheia(Lista *l);

int lista_vazia(Lista *l);


