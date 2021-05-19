#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "TList.h"

int main()
{

    TLinkedList *faculdade;

    faculdade = list_create(0);

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

    //inserção de alunos na lista;

    list_insert(faculdade, 1, A[3]);
    list_insert(faculdade, 1, A[2]);
    list_insert(faculdade, 2, A[0]);
    list_insert(faculdade, 4, B[1]);
    list_insert(faculdade, 2, B[2]);
    list_insert(faculdade, 5, B[3]);
    list_insert(faculdade, 1, B[4]);

    //print da lista integral;
    list_print(faculdade);


    //remoção do primeiro elemento;
    list_pop_front(faculdade);

    list_print(faculdade);
    
    //remoção do ultimo elemento;
    list_pop_back(faculdade);

    list_print(faculdade);

    //remoção pela matricula;
    int mat;
    printf ("\nIndique a matricula do aluno a ser removido: ");
    scanf ("%i",&mat);

    list_erase_data(faculdade,mat);

    list_print(faculdade);

    //remoção pela posição;
    int pos;
    printf ("\nIndique a posicao do aluno a ser removido: ");
    scanf ("%i",&pos);

    list_erase_pos(faculdade,pos);

    list_print(faculdade);
    
    //encontra pela posição:
    aluno find;

    printf ("\nIndique a posicao do aluno a ser encontrado: ");
    scanf ("%i",&pos);

    list_find_pos(faculdade,pos,&find);

    printf("\n%i  %s\n\nN1:%.1f | N1:%.1f | N1:%.1f\n",find.matricula,find.nome,find.n1,find.n2,find.n3);
    
    //encontra pela matrícula:
    printf ("\nIndique a matricula do aluno a ser encontrado: ");
    scanf ("%i",&pos);

    list_find_mat(faculdade,pos,&find);

    printf("\n%i  %s\n\nN1:%.1f | N1:%.1f | N1:%.1f\n",find.matricula,find.nome,find.n1,find.n2,find.n3);

    //Mostra o primeiro elemento da lista:

    list_front(faculdade,&find);
    
    printf ("\nO primeiro elemento da lista e: ");
    printf("\n%i  %s\n\nN1:%.1f | N1:%.1f | N1:%.1f\n",find.matricula,find.nome,find.n1,find.n2,find.n3);

    //Mostra o ultimo elemento da lista:

    list_back(faculdade,&find);
    
    printf ("\nO ultimo elemento da lista e: ");
    printf("\n%i  %s\n\nN1:%.1f | N1:%.1f | N1:%.1f\n",find.matricula,find.nome,find.n1,find.n2,find.n3);

    //Indica a posição para certa matrícula:
    int posC;
    
    printf ("\nIndique a matricula do aluno para indentificar a posicao: ");
    scanf ("%i",&pos);
    
    list_get_pos(faculdade,pos,&posC);

    printf("A posicao para essa matricula e: %i",posC);
    //liberação da memoria;
    list_free(faculdade);
}