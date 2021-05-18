#define SUCCESS 0
#define INVALID_NULL_POINTER -1
#define OUT_OF_MEMORY -2
#define OUT_OF_RANGE -3
#define ELEM_NOT_FOUND -4


typedef struct aluno
{

    int matricula;
    char nome[30];
    float n1, n2, n3;
}aluno;

typedef struct TDLinkedList TDLinkedList;

//FUNCOES:

TDLinkedList *list_create();

int list_free(TDLinkedList *l);

int list_push_front(TDLinkedList *l, aluno a);

int list_push_back(TDLinkedList *l, aluno a);

int list_insert(TDLinkedList *l, int pos, aluno a);

int list_size(TDLinkedList *l);

int list_pop_front(TDLinkedList *l);

int list_pop_back(TDLinkedList *l);

int list_erase(TDLinkedList *l, int pos);


