#include <stdio.h>
#include <stdlib.h>
#include "TCircList.h"

typedef struct CLNode CLNode;
struct CLNode
{
    aluno data;
    CLNode *next;
};

typedef struct TCircList 
{
    CLNode *end;
} TCircList;

TCircList *list_create() {

    TCircList *list;
    
    list = malloc(sizeof(TCircList));

    if (list != NULL)
    {
        list->end = NULL;
    }

    return list;

}

int list_free(TCircList *l){

    if (l == NULL)
    {
        return INVALID_NULL_POINTER;
    }
    if (l->end == NULL)
    {
        return SUCCESS;
    }
    else
    {
        CLNode *aux, *aux2;
        aux = l->end->next;

        while (aux->next != l->end)
        {
            aux2 = aux->next;
            free(aux);
            aux = aux2;
        }
        free(l->end);
        free(l);

        return SUCCESS;
    }
}

int list_push_front(TCircList *l, aluno a)
{
    if (l == NULL)
    {
        return INVALID_NULL_POINTER;
    }
    else
    {
        CLNode *node;
        node = malloc(sizeof(CLNode));

        if (node == NULL)
        {
            return OUT_OF_MEMORY;
        }
        
        node->data = a;

        if (l->end == NULL)
        {
            l->end = node;
            node->next = node;
        }
        else
        {
            node->next = l->end->next;
            l->end->next = node;
        }

        return SUCCESS;
    }
}

int list_push_back(TCircList *l, aluno a)
{

    if (l == NULL)
    {
        return INVALID_NULL_POINTER;
    }
    else
    {
        CLNode *node;
        node = malloc(sizeof(CLNode));
        if (node == NULL)
        {
            return OUT_OF_MEMORY;
        }
        node->data = a;
        if (l->end == NULL)
        {
            l->end = node;
            node->next = node;
        }
        else
        {
            node->next = l->end->next;
            l->end->next = node;
            l->end = node;
        }
        return SUCCESS;
    }
}

int list_print_forward(TCircList *l)
{
    if (l == NULL)
        return INVALID_NULL_POINTER;
    
    CLNode *aux;
    aux = l->end;
    printf("\nImprimindo a lista\n");

    while (aux != l->end)
    {
        printf("\n------------------\n");
        printf("Matricula: %d\n", aux->data.matricula);
        printf("Nome: %s\n", aux->data.nome);
        printf("Notas: %.1f; %.1f; %.1f;\n", aux->data.n1, aux->data.n2, aux->data.n3);

        aux = aux->next;
    }
    printf("\nFim da lista \n");
}





