#include <stdio.h>
#include <stdlib.h>
#include "TMat2D.h"

int mostraMat (TMat2D *a,int l, int c, double *valor){
    int i,j;
    for (i = 0; i < l; i++)
    {
        for (j = 0; j < c; j++)
        {
            mat2D_acessa(a, valor, i, j);
            printf("%5.1lf ", *valor);
        }
        printf("\n");
    }    

}
int main()
{

    //dados base:
    TMat2D *p;
    TMat2D *q;
    TMat2D *soma;
    TMat2D *mult;

    int l, c;
    

    double valor;
    //criar matriz A;
    printf("Entre com os valores de Linhas e Colunas:");

    scanf("%i %i", &l, &c);

    p = mat2D_create(l, c);
    q = mat2D_create(l, c);
    soma = mat2D_create(l, c);
    mult = mat2D_create(l, c);


    //alocar dado na posição informada:
    int l1, c1;
    printf("Entre com as coordenadas para alocar o dado:");
    scanf("%i %i", &l1, &c1);

    printf("Entre com o valor para a coordenada [%i,%i]:", l1, c1);
    scanf("%lf", &valor);

    mat2D_escreve(p, valor, l1, c1);

    //ler o dado da posição informada:
    printf("Qual cordenada gostaria de acessar?");
    scanf("%i %i", &l1, &c1);

    mat2D_acessa(p, &valor, l1, c1);

    printf("%.1lf\n", valor);

    //aleatorizar os dados da matriz:
    double MAX;

    printf("Entre com o valor MAXIMO para aleatorizar a matriz:");
    scanf("%lf", &MAX);

    mat2D_aleatorio(p, MAX);
    mat2D_aleatorio(q, MAX-1);

    //mostra a matriz A:
    printf("As matrizes A e B sao:\n");
    int i, j;
    printf("<<-A->>\n");
    mostraMat(p,l,c,&valor);

    printf("<<-B->>\n");
    mostraMat(q,l,c,&valor);

    //soma matrizes:

    printf("A soma das matrizes A e B:\n");

    mat2D_soma(p, q,soma);
    
    mostraMat(soma,l,c,&valor);


    //multiplica matrizes:
    
    mat2D_multMatrizes(p,q,mult);

    printf("as matrizes A e B multiplicadas geram:\n");
    
    mostraMat(mult,l,c,&valor);

    //multiplica por um inteiro:
    int multiplicador;

    printf("defina o valor que multiplica a matriz A:");

    scanf("%i", &multiplicador);

    mat2D_multint(p, multiplicador);

    printf("a matriz A multiplicada por %i:\n", multiplicador);
    
    mostraMat(p,l,c,&valor);

    //Traco da matriz:
    double traco;
    mat2D_traco(p,&traco);
    printf("O traco da matriz A e:  %.1lf\n", traco);

    //soma das linhas:
    double *somaL;
    somaL = calloc(l,sizeof(double));
    
    mat2D_somaLinhas(p,somaL);

    printf("As soma das Linhas sao:");
    for (int i = 0; i < l; i++)
    {
      printf(" %.1lf ", somaL[i]);
    }
    printf("\n");

    //soma das colunas:
    double *somaC;
    somaC = calloc(c,sizeof(double));
    
    mat2D_somaColunas(p,somaC);

    printf("As soma das Colunas sao:");
    for (int i = 0; i < l; i++)
    {
      printf(" %.1lf ", somaC[i]);
    }
    
    //liberar memoria:
    mat2D_clear(p);
    mat2D_clear(q);
    mat2D_clear(soma);
    mat2D_clear(mult);
    return 0;
}