#include <stdio.h>
#include <stdlib.h>
#include "Tlist.h"

typedef struct list_node
{
    aluno data;
    list_node *next;
} list_node;

typedef struct TLinkedList
{
    list_node *head;
} TLinkedList;

TLinkedList *list_create()
{

    TLinkedList *list;

    list = malloc(sizeof(TLinkedList));

    if (list != NULL)
    {
        list->head = NULL;
    }
    return list;
}

int list_free(TLinkedList *l)
{
    if (l == NULL)
    {
        return INVALID_NULL_POINTER;
    }
    else
    {
        list_node *aux;
        aux = l->head;
        while (aux != NULL)
        {
            l->head = aux->next;
            free(aux);
            aux = l->head;
        }
        free(l);
    }
}

int list_push_front(TLinkedList *l, aluno a)
{
    if (l == NULL)
    {
        return INVALID_NULL_POINTER;
    }
    else
    {
        list_node *node;
        node = malloc(sizeof(list_node));
    }
}

int list_push_back(TLinkedList *l, aluno a)
{

    if (l == NULL)
    {
        return INVALID_NULL_POINTER;
    }
    else
    {
        list_node *node;
        node = malloc(sizeof(list_node));
        if (node == NULL)
        {
            return OUT_OF_MEMORY;
        }
        node->data = a;
        node->next = NULL;
        if (l->head == NULL)
        {
            l->head = node;
        }
        else
        {
            list_node *aux;
            aux = l->head;
            while (aux->next != NULL)
            {
                aux = aux->next;
            }
            aux->next = node;
        }
        return SUCCESS;
    }
}
