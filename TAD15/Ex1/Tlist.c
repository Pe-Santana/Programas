#include <stdio.h>
#include <stdlib.h>
#include "Tlist.h"

typedef struct list_node list_node;
struct list_node
{
    aluno data;
    list_node *next;
};

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
    return SUCCESS;
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

        if (node == NULL)
        {
            return OUT_OF_MEMORY;
        }
        node->data = a;
        node->next = l->head;
        l->head = node;

        return SUCCESS;
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

int list_insert(TLinkedList *l, int pos, aluno a)
{
    if (l == NULL)
    {
        return INVALID_NULL_POINTER;
    }
    else
    {
        list_node *node, *auxP, *auxA;
        node = malloc(sizeof(list_node));
        if (node == NULL)
        {
            return OUT_OF_MEMORY;
        }
        node->data = a;

        if (pos == 1)
        {
            node->next = l->head;
            l->head = node;

            return SUCCESS;
        }
        else
        {
            auxP = l->head;
            auxA = l->head;
            for (int i = 1; i < pos; i++)
            {
                auxA = auxP;
                auxP = auxP->next;
                if (auxP == NULL && i < pos - 1)
                {
                    return OUT_OF_RANGE;
                }
            }
            auxA->next = node;
            node->next = auxP;

            return SUCCESS;
        }
    }
}

int list_insert_sorted(TLinkedList *l, aluno *a)
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

        list_node *auxP, *auxA;

        auxA = NULL;
        auxP = l->head;

        while (auxP != NULL && node->data.matricula > auxP->data.matricula)
        {
            auxA = auxP;
            auxP = auxP->next;
        }
        if (auxA == NULL)
        {
            node->next = auxP;
            l->head = node;
        }
        else
        {
            auxA->next = node;
            node->next = auxP;
        }
        return SUCCESS;
    }
}

int list_size(TLinkedList *l)
{

    if (l == NULL)
    {
        return INVALID_NULL_POINTER;
    }
    else
    {

        int tamanho = 0;
        list_node *aux;

        aux = l->head;

        while (aux != NULL)
        {
            aux = aux->next;
            tamanho++;
        }
        return tamanho;
    }
}

int list_print(TLinkedList *l)
{
    if (l == NULL)
    {
        return INVALID_NULL_POINTER;
    }
    else
    {
        list_node *aux;

        aux = l->head;

        printf("\nImprimindo a lista (tamanho %i)\n", list_size(l));

        while (aux != NULL)
        {
            printf("\n------------------\n");

            printf("Matricula: %i\n", aux->data.matricula);
            printf("Nome: %s\n", aux->data.nome);
            printf("Notas: %.1f; %.1f; %.1f;\n", aux->data.n1, aux->data.n2, aux->data.n3);

            aux = aux->next;
        }
        return SUCCESS;
    }
}

int list_pop_front(TLinkedList *l)
{

    if (l == NULL)
    {
        return INVALID_NULL_POINTER;
    }
    else
    {
        list_node *aux;

        aux = l->head;
        l->head = aux->next;

        free(aux);

        return SUCCESS;
    }
}

int list_pop_back(TLinkedList *l)
{

    if (l == NULL)
    {
        return INVALID_NULL_POINTER;
    }
    else
    {
        list_node *auxP, *auxA;

        auxP = l->head;
        auxA = l->head;

        while (auxP->next != NULL)
        {
            auxA = auxP;
            auxP = auxP->next;
        }
        auxA->next = auxP->next;

        free(auxP);

        return SUCCESS;
    }
}

int list_erase_data(TLinkedList *l, int mat)
{

    if (l == NULL)
    {
        return INVALID_NULL_POINTER;
    }

    list_node *auxP, *auxA;

    auxP = l->head;
    auxA = l->head;

    if (l->head->data.matricula == mat)
    {
        list_pop_front(l);
        return SUCCESS;
    }
    while (auxP->next != NULL && mat != auxP->data.matricula)
    {
        auxA = auxP;
        auxP = auxP->next;
    }

    if (auxP->next == NULL && mat != auxP->data.matricula)
    {
        return OUT_OF_RANGE;
    }
    if (mat == auxP->data.matricula)
    {
        auxA->next = auxP->next;

        free(auxP);

        return SUCCESS;
    }
    if (auxP->next == NULL && mat == auxP->data.matricula)
    {
        auxA->next = auxP->next;

        free(auxP);

        return SUCCESS;
    }
}

int list_erase_pos(TLinkedList *l, int pos)
{

    if (l == NULL)
    {
        return INVALID_NULL_POINTER;
    }

    list_node *auxP, *auxA;

    auxP = l->head;
    auxA = l->head;

    if (pos == 1)
    {
        list_pop_front(l);
        return SUCCESS;
    }

    for (int i = 1; i < pos; i++)
    {
        auxA = auxP;
        auxP = auxP->next;
        if (auxP == NULL && i < pos - 1)
        {
            return OUT_OF_RANGE;
        }
    }
    auxA->next = auxP->next;
    free(auxP);

    return SUCCESS;
}

int list_find_pos(TLinkedList *l, int pos, aluno *a)
{
    if (l == NULL)
    {
        return INVALID_NULL_POINTER;
    }
    list_node *auxP, *auxA;

    auxP = l->head;
    auxA = l->head;

    if (pos == 1)
    {
        *a = l->head->data;
        return SUCCESS;
    }

    for (int i = 1; i < pos; i++)
    {
        auxA = auxP;
        auxP = auxP->next;
        if (auxP == NULL && i < pos - 1)
        {
            return ELEM_NOT_FOUND;
        }
    }
    *a = auxP->data;
    return SUCCESS;
}

int list_find_mat(TLinkedList *l, int mat, aluno *a)
{
    if (l == NULL)
    {
        return INVALID_NULL_POINTER;
    }
    list_node *auxP, *auxA;

    auxP = l->head;
    auxA = l->head;

    if (l->head->data.matricula == mat)
    {
        *a = l->head->data;
        return SUCCESS;
    }
    while (auxP->next != NULL && mat != auxP->data.matricula)
    {
        auxA = auxP;
        auxP = auxP->next;
    }

    if (auxP->next == NULL && mat != auxP->data.matricula)
    {
        return ELEM_NOT_FOUND;
    }
    if (mat == auxP->data.matricula)
    {
        *a = auxP->data;

        return SUCCESS;
    }
    if (auxP->next == NULL && mat == auxP->data.matricula)
    {
        *a = auxP->data;

        return SUCCESS;
    }
}

int list_front(TLinkedList *l, aluno *a)
{
    if (l == NULL)
    {
        return INVALID_NULL_POINTER;
    }
    *a = l->head->data;
    return SUCCESS;
}

int list_back(TLinkedList *l, aluno *a)
{

    if (l == NULL)
    {
        return INVALID_NULL_POINTER;
    }else
    {
        list_node *aux;
        aux = l->head;
        while (aux->next != NULL)
        {
            aux = aux->next;
        }
        *a = aux->data;

        return SUCCESS;
        
    }
    
}

int list_get_pos(TLinkedList *l, int mat, int *pos)
{

    if (l == NULL)
    {
        return INVALID_NULL_POINTER;
    }
    if (l->head == NULL)
    {
        return ELEM_NOT_FOUND;
    }
    
    list_node *aux;
    int acum;

    aux = l->head;
    acum = 1;
    while (mat != aux->data.matricula && aux->next != NULL)
    {
        aux = aux->next;
        acum++;
    }
    if (aux->next == NULL && mat != aux->data.matricula)
    {
        return ELEM_NOT_FOUND;
    }
    else
    {
        *pos = acum;
        return SUCCESS;
    }
    
}