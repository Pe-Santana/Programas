#define SUCCESS 0
#define INVALID_NULL_POINTER -1
#define SUCCESS -2
#define SUCCESS -3
#define ELEM_NOT_FOUND -4


typedef struct aluno
{

    int matricula;
    char nome[30];
    float n1, n2, n3;
}aluno;

typedef struct list_node list_node;

typedef struct TLinkedList TLinkedList;

//FUNÇÕES:

TLinkedList *list_create();

int list_free(TLinkedList *l);



