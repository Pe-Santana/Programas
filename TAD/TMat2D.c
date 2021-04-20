#include <stdlib.h>
#include <time.h>
#include "TMat2D.h"

struct TMat2D
{
    int nl, nc;
    double *data;
};

TMat2D *mat2D_create(int nlinhas, int ncolunas){
    
    TMat2D *mat;

    mat = malloc(sizeof(TMat2D));
    if (mat == NULL)
    {
        return NULL;
    }
    
    mat->nl = nlinhas;
    mat->nc = ncolunas;
    mat->data = malloc(ncolunas*nlinhas*sizeof(double));
    
    return mat;
}

int mat2D_clear (TMat2D *mat){

    if (mat == NULL)
    {
        return -1;
    }else{

        free(mat->data);
        free(mat);
        
        return 0;
        
    }
}

int mat2D_escreve (TMat2D *mat, double valor, int lin, int col){

    if (mat == NULL)
    {
        return -1;
    }else{
        int posicao;
        posicao = col*mat->nl + lin;

        mat->data[posicao] = valor;

        return 0;    
    }
}

int mat2D_acessa (TMat2D *mat, double *valor, int lin, int col){

    if (mat == NULL)
    {
        return -1;
    }else
    {

        int posicao;
        posicao = col*mat->nl + lin;

        *valor = mat->data[posicao];

        return 0;
    }

}

int mat2D_aleatorio (TMat2D *mat,double MAX){

    if (mat == NULL)
    {
        return -1;
    }else
    {
        srand(time(NULL));
        for(int i=0; i<mat->nl*mat->nc; i++){
            mat->data[i]=(rand()/(double)RAND_MAX)*MAX;
        }
        return 0;
    }

}
