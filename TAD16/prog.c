#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "TDLinkedList.h"

int main()
{

    TDLinkedList *faculdade;

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

    list_push_front(faculdade, A[0]);
    list_push_back(faculdade,A[1]);
    list_push_back(faculdade,A[3]);
    list_push_back(faculdade,A[2]);
    list_insert(faculdade,2,B[0]);


    //Tamanho da lista:
    int size;
    size = list_size(faculdade);

    
    //imprime a lista:
    list_print_forward(faculdade);
    
    
    printf("A lista reversa e:"); 
    list_print_reverse(faculdade);

    //apaga elementos da lista  
    list_pop_front(faculdade);
    list_pop_back(faculdade);
    list_erase(faculdade,1);

    //imprime a lista:
    list_print_forward(faculdade);


    list_free(faculdade);
/*
*/
}
