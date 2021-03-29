#include <stdio.h>

struct telefones 
{
    int DDD[3],numero[3];
};  

int main () {

    struct telefones tel;

    for (int i = 0; i < 3; i++)
    {
        scanf ("%i %i", &tel.DDD[i], &tel.numero[i]);
    }
    
    for (int i = 0; i < 3; i++)
    {
        printf ("%i %i\n", tel.DDD[i], tel.numero[i]);
    }










}
 