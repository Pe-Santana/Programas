#include <stdlib.h>
#include "TList.h"

struct Lista
{
    int qtd;
    struct aluno dados[MAX];
};

Lista *cria_lista()
{
    Lista *l;
    l = malloc(sizeof(struct Lista));

    if (l == NULL)
    {
        l->qtd = 0;
        return l;
    }
    
}