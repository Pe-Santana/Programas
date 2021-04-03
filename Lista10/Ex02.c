#include <stdio.h>

int main()
{

    int a = 40; // cria uma variável do tipo inteiro, chamada a, e inicializa
    //  com valor 40

    int *p; // cria uma variável do tipo ponteiro para inteiro, chamada p, e o
    //conteúdo inicial é lixo

    p = &a; // faz p receber o endereço de a. Dizemos que p aponta para a

    //a)
    printf ("usando &a, o endereco de memoria de a eh :  %i\n", &a);

    printf ("usando o ponteiro, o endereco de memoria de a eh :  %i\n", p);

    //b)
    scanf("%i", p);

    printf ("O Valor de a eh :  %i\n", a);

}