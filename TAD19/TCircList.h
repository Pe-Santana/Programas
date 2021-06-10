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

typedef struct TCircList TCircList;

//FUNCOES:

TCircList *list_create();

int list_free(TCircList *l);

int list_push_front(TCircList *l, aluno a);

int list_push_back(TCircList *l, aluno a);

int list_insert(TCircList *l, int pos, aluno a);

int list_size(TCircList *l);

int list_pop_front(TCircList *l);

int list_pop_back(TCircList *l);

int list_erase(TCircList *l, int pos);

int list_find_pos(TCircList *l, int pos, aluno *a);

int list_find_mat(TCircList *l, int mat, aluno *a);

int list_front(TCircList *l, aluno *a);

int list_back(TCircList *l, aluno *a);

int list_get_pos(TCircList *l, int mat, int *pos);

int list_print_forward(TCircList *l);
