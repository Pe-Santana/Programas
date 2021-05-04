#include <stdlib.h>
#include <stdio.h>
#include "TList.h"

struct Lista
{
    int qtd;
    struct aluno dados[MAX];
};
//função que cria a lista.
//atribua a função a um ponteiro tipo Lista.
Lista *cria_lista()
{
    Lista *l;
    l = malloc(sizeof(Lista));

    if (l != NULL)
    {
        l->qtd = 0;
        return l;
    }
}

int libera_lista(Lista *l)
{

    if (l == NULL)
    {
        return -1;
    }
    else
    {
        free(l);

        return 0;
    }
}

int insere_lista_final(Lista *l, aluno a)
{
    if (l == NULL || l->qtd == MAX)
    {
        return -1;
    }
    else
    {
        l->dados[l->qtd] = a;
        l->qtd++;
        return 0;
    }
}

int insere_lista_inicio(Lista *l, aluno a)
{

    if (l == NULL || l->qtd == MAX)
    {
        return -1;
    }
    else
    {
        for (int i = l->qtd - 1; i >= 0; i--)
        {
            l->dados[i + 1] = l->dados[i];
        }
        l->dados[0] = a;
        l->qtd++;
        return 0;
    }
}

int consulta_lista_pos(Lista *l, int pos, aluno *a)
{
    if (l == NULL || pos <= 0 || pos > l->qtd)
    {
        return -1;
    }
    else
    {
        *a = l->dados[pos - 1];

        return 0;
    }
}

int consulta_lista_mat(Lista *l, int mat, aluno *a)
{
    if (l == NULL)
    {
        return -1;
    }
    int i;

    while (i < l->qtd && l->dados[i].matricula != mat)
    {
        i++;
    }

    if (i == l->qtd)
    {
        return -1;
    }
    else
    {

        *a = l->dados[i];
        return 0;
    }
}

int insere_lista_ordenada(Lista *l, aluno a)
{

    if (l == NULL)
    {
        return -1;
    }
    if (l->qtd == MAX)
    {
        return -1;
    }

    int k, i = 0;

    while (i < l->qtd && l->dados[i].matricula < a.matricula)
    {
        i++;
    }

    for (k = l->qtd - 1; k >= i; k--)
    {
        l->dados[k + 1] = l->dados[k];
    }
    l->dados[i] = a;
    l->qtd++;
    return 0;
}
int remove_lista_inicio(Lista *l)
{
    if (l == NULL)
    {
        return -1;
    }
    if (l->qtd == 0)
    {
        return -1;
    }
    else
    {
        for (int i = 0; i < l->qtd - 1; i++)
        {
            l->dados[i] = l->dados[i + 1];
        }
        l->qtd--;
        return 0;
    }
}

int remove_lista_final(Lista *l)
{

    if (l == NULL)
    {
        return -1;
    }
    if (l->qtd == 0)
    {
        return -1;
    }
    else
    {
        l->qtd--;
        return 0;
    }
}

int remove_lista(Lista *l, int mat)
{

    if (l == NULL)
    {
        return -1;
    }
    if (l->qtd == 0)
    {
        return -1;
    }
    else
    {
        int k, i = 0;

        while (i < l->qtd && l->dados[i].matricula != mat)
        {
            i++;
        }
        if (i == l->qtd)
        {
            return 0;
        }
        for (k = i; k < l->qtd - 1; k++)
        {
            l->dados[k] = l->dados[k + 1];
        }
        l->qtd--;
        return 0;
    }
}

int remove_lista_otimizado(Lista *l, int mat)
{

    if (l == NULL)
    {
        return -1;
    }
    if (l->qtd == 0)
    {
        return -1;
    }
    else
    {
        int i = 0;

        while (i < l->qtd && l->dados[i].matricula != mat)
        {
            i++;
        }
        if (i == l->qtd)
        {
            return 0;
        }
        l->qtd--;

        l->dados[i] = l->dados[l->qtd];
    }
}

int tamanho_lista(Lista *l)
{

    if (l == NULL)
    {
        return -1;
    }
    else
    {
        return l->qtd;
    }
}

int lista_cheia(Lista *l)
{

    if (l == NULL)
    {
        return -1;
    }
    else
    {
        return (l->qtd == MAX);
    }
}

int lista_vazia(Lista *l)
{

    if (l == NULL)
    {
        return -1;
    }
    else
    {
        return (l->qtd == 0);
    }
}

int imprime_lista(Lista *l)
{

    if (l == NULL)
    {
        return -1;
    }
    for (int i = 0; i < l->qtd; i++)
    {
        printf("Matricula: %i\n", l->dados[i].matricula);
        printf("Nome: %s\n", l->dados[i].nome);
        printf("Notas: %.1f | %.1f | %.1f\n", l->dados[i].nota1, l->dados[i].nota2, l->dados[i].nota3);
        printf("-------------------------------\n");
    }
    return 0;
}
