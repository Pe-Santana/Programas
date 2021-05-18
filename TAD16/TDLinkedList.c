#include <stdio.h>
#include <stdlib.h>
#include "TDLinkedList.h"

typedef struct DLNode DLNode;
struct DLNode
{
    aluno data;
    DLNode *next;
    DLNode *prev;
    int size;
};

typedef struct TDLinkedList
{
    DLNode *begin;
    DLNode *end;
    int size;
} TDLinkedList;

TDLinkedList *list_create()
{

    TDLinkedList *list;

    list = malloc(sizeof(TDLinkedList));

    if (list != NULL)
    {
        list->begin = NULL;
        list->end = NULL;
        list->size = 0;
    }
    return list;
}

int list_free(TDLinkedList *l)
{
    if (l == NULL)
    {
        return INVALID_NULL_POINTER;
    }
    else
    {
        DLNode *aux;
        aux = l->begin;
        while (aux != NULL)
        {
            l->begin = aux->next;
            free(aux);
            aux = l->begin;
        }
        free(l);
    }
    return SUCCESS;
}

int list_push_front(TDLinkedList *l, aluno a)
{
    if (l == NULL)
    {
        return INVALID_NULL_POINTER;
    }
    else
    {
        DLNode *node;
        node = malloc(sizeof(DLNode));

        node->data = a;
        node->next = l->begin;
        node->prev = NULL;

        if (node == NULL)
        {
            return OUT_OF_MEMORY;
        }


        if (l->begin == NULL)
        {
            l->begin = node;
            l->end = node;
            l->size++;
        }
        else
        {
            l->begin->prev = node;
            l->begin = node;
            l->size++;
        }

        return SUCCESS;
    }
}

int list_push_back(TDLinkedList *l, aluno a)
{

    if (l == NULL)
    {
        return INVALID_NULL_POINTER;
    }
    else
    {
        DLNode *node;
        node = malloc(sizeof(DLNode));
        if (node == NULL)
        {
            return OUT_OF_MEMORY;
        }
        node->data = a;
        node->next = NULL;
        if (l->begin == NULL)
        {
            l->begin = node;
            l->end = node;
            l->size++;
            node->prev = NULL;
        }
        else
        {
            node->prev = l->end;
            l->end->next = node;
            l->end = node;
            l->size++;
        }
        return SUCCESS;
    }
}

int list_insert(TDLinkedList *l, int pos, aluno a)
{

    if (l == NULL)
    {
        return INVALID_NULL_POINTER;
    }
    else
    {
        DLNode *node;

        if (pos < 1 || pos > l->size + 1)
        {

            return OUT_OF_RANGE;
        }

        else
        {
            node = malloc(sizeof(DLNode));

            if (node == NULL)
            {
                return OUT_OF_MEMORY;
            }
            else
            {
                node->data = a;

                if (l->size == 0)
                {
                    node->prev = NULL;
                    node->next = NULL;
                    l->begin = node;
                    l->end = node;
                    l->size++;
                }
                else if (pos == 1)
                {
                    list_push_front(l, a);
                }
                else if (pos == l->size + 1)
                {
                    list_push_back(l, a);
                }
                else
                {
                    int cont = 1;
                    DLNode *aux;

                    aux = l->begin;
                    while (cont < pos - 1)
                    {
                        aux = aux->next;
                        cont++;
                    }
                    node->prev = aux;
                    node->next = aux->next;
                    aux->next->prev = node;
                    aux->next = node;
                    l->size++;
                }
                return SUCCESS;
            }
        }
    }
}

int list_size(TDLinkedList *l)
{

    if (l == NULL)
    {
        return INVALID_NULL_POINTER;
    }
    else
    {
        return l->size;
    }
}

int list_pop_front(TDLinkedList *l)
{

    if (l == NULL)
    {
        return INVALID_NULL_POINTER;
    }

    DLNode *aux;

    aux = l->begin;
    l->begin = l->begin->next;
    l->begin->prev = NULL;
    free(aux);
    l->size--;
    return SUCCESS;
}

int list_pop_back(TDLinkedList *l)
{

    if (l == NULL)
    {
        return INVALID_NULL_POINTER;
    }

    DLNode *aux;

    aux = l->end;
    l->end = l->end->prev;
    l->end->next = NULL;
    free(aux);
    l->size--;
    return SUCCESS;
}

int list_erase(TDLinkedList *l, int pos)
{

    if (l == NULL)
    {
        return INVALID_NULL_POINTER;
    }


    if (pos == 1)
    {
        list_pop_front(l);
    }
    else if (pos == l->size)
    {
        list_pop_back(l);
    }
    else
    {
        int cont = 1;
        DLNode *aux;

        aux = l->begin;
        while (cont != pos && aux !=NULL)
        {
            aux = aux->next;
            cont++;
        }
        if (aux == NULL)
        {
            return ELEM_NOT_FOUND;
        }
        else
        {
            aux->prev->next = aux->next;
            aux->next->prev = aux->prev;
            free(aux);
            l->size--;

        }
        
    }
    return SUCCESS;
    
}