#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "TCircList.h"

int main()
{

    TCircList *faculdade;

    faculdade = list_create();

    aluno A[4] = {
        {1000, "Pedro Henrique ", 10, 10, 10},
        {1121, "Victor Hugo ", 10, 10, 10},
        {1432, "Pabllo Emilio ", 8, 7, 10},
        {1765, "Benjamin Tennyson ", 2, 8, 6}};
    aluno B[4] = {
        {1236, "Sergio Prado", 8, 10, 10},
        {1224, "Mick Jagger", 10, 6, 4},
        {1170, "Vanessa da Cidade", 10, 6, 9},
        {1680, "Silvio Santos Junior", 7, 9, 9}};

    list_push_front(faculdade,A[2]);
    list_push_back(faculdade,A[3]);
    list_push_front(faculdade,A[1]);
    list_push_front(faculdade,A[0]);
    list_insert(faculdade,4,B[0]);

    list_print_forward(faculdade);

    int tamanho;
    tamanho = list_size(faculdade);

    printf("O tamanho da lista circular eh: %i",tamanho);

    list_free(faculdade);

}