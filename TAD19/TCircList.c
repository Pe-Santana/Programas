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

TCircList *list_create()
{

    TCircList *list;

    list = malloc(sizeof(TCircList));

    if (list != NULL)
    {
        list->end = NULL;
    }

    return list;
}

int list_free(TCircList *l)
{

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
    aux = l->end->next;
    printf("\nImprimindo a lista\n");

    while (aux != l->end)
    {
        printf("\n------------------\n");
        printf("Matricula: %d\n", aux->data.matricula);
        printf("Nome: %s\n", aux->data.nome);
        printf("Notas: %.1f; %.1f; %.1f;\n", aux->data.n1, aux->data.n2, aux->data.n3);

        aux = aux->next;
    }
    printf("\n------------------\n");
    printf("Matricula: %d\n", aux->data.matricula);
    printf("Nome: %s\n", aux->data.nome);
    printf("Notas: %.1f; %.1f; %.1f;\n", aux->data.n1, aux->data.n2, aux->data.n3);

    printf("\nFim da lista \n");
}

int list_insert(TCircList *l, int pos, aluno a)
{

    if (l == NULL)
    {
        return INVALID_NULL_POINTER;
    }
    else
    {
        CLNode *node, *aux, *aux2;

        node = malloc(sizeof(CLNode));
        if (node == NULL)
        {
            return OUT_OF_MEMORY;
        }
        if (pos == 0)
        {
            list_push_front(l, a);
        }

        aux = l->end->next;
        aux2 = l->end;

        for (int i = 0; i < pos; i++)
        {
            aux = aux->next;
            aux2 = aux2->next;
        }
        if (aux2 == l->end)
        {
            list_push_back(l, a);
        }
        else
        {
            node->data = a;
            aux2->next = node;
            node->next = aux;
            return SUCCESS;
        }
    }
}
int list_size(TCircList *l)
{

    if (l == NULL)
    {
        return INVALID_NULL_POINTER;
    }
    else
    {
        int tamanho=1;
        CLNode *aux;
        aux = l->end->next;
        while (aux != l->end)
        {
            aux = aux->next;
            tamanho++;
        }
        return tamanho;
    }
}
