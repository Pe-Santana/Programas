#include <stdlib.h>
#include <time.h>
#include "TMat2D.h"

struct TMat2D
{
    int nl, nc;
    double *data;
};

TMat2D *mat2D_create(int nlinhas, int ncolunas)
{

    TMat2D *mat;

    mat = malloc(sizeof(TMat2D));
    if (mat == NULL)
    {
        return NULL;
    }

    mat->nl = nlinhas;
    mat->nc = ncolunas;
    mat->data = malloc(ncolunas * nlinhas * sizeof(double));

    return mat;
}

int mat2D_clear(TMat2D *mat)
{

    if (mat == NULL)
    {
        return -1;
    }
    else
    {

        free(mat->data);
        free(mat);

        return 0;
    }
}

int mat2D_escreve(TMat2D *mat, double valor, int lin, int col)
{

    if (mat == NULL)
    {
        return -1;
    }
    else
    {
        int posicao;
        posicao = col * mat->nl + lin;

        mat->data[posicao] = valor;

        return 0;
    }
}

int mat2D_acessa(TMat2D *mat, double *valor, int lin, int col)
{

    if (mat == NULL)
    {
        return -1;
    }
    else
    {

        int posicao;
        posicao = col * mat->nl + lin;

        *valor = mat->data[posicao];

        return 0;
    }
}

int mat2D_aleatorio(TMat2D *mat, double MAX)
{

    if (mat == NULL)
    {
        return -1;
    }
    else
    {
        srand(time(NULL));
        for (int i = 0; i < mat->nl * mat->nc; i++)
        {
            mat->data[i] = (rand() / (double)RAND_MAX) * MAX;
        }
        return 0;
    }
}

int mat2D_soma(TMat2D *mat, TMat2D *mat2, TMat2D *somado)
{
    if (mat == NULL || mat2 == NULL)
    {
        return -1;
    }
    int tamanho;

    tamanho = mat->nl * mat->nc;

    for (int i = 0; i < tamanho; i++)
    {
        somado->data[i] = mat->data[i] + mat2->data[i];
    }

    return 0;
}

int mat2D_multMatrizes(TMat2D *mat, TMat2D *mat2, TMat2D *multi)
{

    if (mat->nl != mat2->nc || mat == NULL || mat2 == NULL || multi == NULL)
    {
        return -1;
    }
    else
    {
        int i, j, k;
        int p1, p2, p3;

        double final = 0;

        for (i = 0; i < mat->nl; i++)
        {
            for (j = 0; j < mat2->nc; j++)
            {
                for (k = 0; k < mat2->nc; k++)
                {
                    p1 = mat->nl * k + i;
                    p2 = mat2->nl * j + k;

                    final += mat->data[p1] * mat2->data[p2];
                }
                p3 = j * multi->nl + i;
                multi->data[p3] = final;
                final = 0;
            }
        }
        return 0;
    }
}

int mat2D_multint(TMat2D *mat, int val)
{

    if (mat == NULL)
    {
        return -1;
    }
    else
    {

        int tamanho;
        tamanho = mat->nl * mat->nc;

        for (int i = 0; i < tamanho; i++)
        {
            mat->data[i] = mat->data[i] * val;
        }
        return 0;
    }
}

int mat2D_traco(TMat2D *mat, double *traco)
{

    if (mat == NULL || mat->nl != mat->nc)
    {
        return -1;
    }
    else
    {

        int tamanho, proximo;
        tamanho = mat->nl * mat->nc;
        *traco = 0;
        proximo = mat->nl + 1;
        for (int i = 0; i < tamanho; i += proximo)
        {
            (*traco) += mat->data[i];
        }
        return 0;
    }
}

int mat2D_somaColunas(TMat2D *mat, double *vet)
{
    int i,l=0,Nc=0;
    
        if (mat == NULL )
    {
        return -1;
    }
    else
    {
    for (i = 0; i < mat->nc; i++)
    {
        for (l ; l < mat->nc+Nc; l++)
        {
            vet[i] += mat->data[l];

        }
        Nc+= mat->nc;
    }
    return 0;
    }
}
int mat2D_somaLinhas(TMat2D *mat, double *vet)
{
    int i,l=0,Nl=0;
    
        if (mat == NULL )
    {
        return -1;
    }
    else
    {
    for (i = 1; i < mat->nl+1; i++)
    {
        while (Nl<mat->nc)
        {
            vet[i-1]+= mat->data[l];

            l+=mat->nl;
            Nl++;
        }
        Nl=0;
        l=i;

    }
    return 0;
    }
}