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
    list_push_back(faculdade,B[1]);
    list_push_back(faculdade,B[2]);

    list_print_forward(faculdade);

    int tamanho;
    tamanho = list_size(faculdade);

    printf("O tamanho da lista circular eh: %i",tamanho);

    list_pop_front(faculdade);
    list_pop_back(faculdade);
    list_erase(faculdade,3);

    aluno estudante;

    list_find_pos(faculdade,2,&estudante);
    
    printf("\n\nA matricula do aluno 2 eh : %i",estudante.matricula);

    list_find_mat(faculdade,1432,&estudante);
    
    printf("\n\nO nome do aluno de matricula 1432 eh : %s",estudante.nome);

    list_front(faculdade,&estudante);
    
    printf("\n\nO nome do primeiro aluno eh : %s",estudante.nome);
    
    list_back(faculdade,&estudante);
    
    printf("\n\nO nome do ultimo aluno eh : %s",estudante.nome);

    int posit;

    list_get_pos(faculdade,1224,&posit);
       
    printf("\n\nA posicao do aluno de matricula 1224 eh : %i",posit);

    list_print_forward(faculdade);


    list_free(faculdade);

}