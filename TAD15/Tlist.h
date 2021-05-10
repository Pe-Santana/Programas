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


typedef struct TLinkedList TLinkedList;

//FUNÇÕES:

TLinkedList *list_create();

int list_free(TLinkedList *l);

int list_push_front(TLinkedList *l, aluno a);

int list_push_back(TLinkedList *l, aluno a);

int list_insert(TLinkedList *l, int pos, aluno a);

int list_size(TLinkedList *l);

int list_print(TLinkedList *l);

int list_pop_front(TLinkedList *l);

int list_pop_back(TLinkedList *l);

int list_erase_data(TLinkedList *l, int mat);

int list_erase_pos(TLinkedList *l, int pos);

int list_find_pos(TLinkedList *l, int pos, aluno *a); 

int list_find_mat(TLinkedList *l, int mat, aluno *a);
