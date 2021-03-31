#include <stdio.h>
#include <string.h>

struct endereco 
{
    char rua[30];
    int numero;
    char complemento[30] ;
    char cidade[30];
    char estado[2] ;
    int cep;
};  

int main () {

    struct endereco endereco[3];

    for (int i = 0; i < 3; i++)
    {
        setbuf(stdin,NULL);
        printf("rua %i :", i+1);
        gets(endereco[i].rua);

        setbuf(stdin,NULL);
        printf("numero %i :", i+1);
        scanf("%i", &endereco[i].numero);

        setbuf(stdin,NULL);
        printf("complemento %i :", i+1);
        gets(endereco[i].complemento);

        setbuf(stdin,NULL);
        printf("cidade %i :", i+1);
        gets(endereco[i].cidade);

        setbuf(stdin,NULL);
        printf("estado %i :", i+1);        
        gets(endereco[i].estado);

        setbuf(stdin,NULL);
        printf("CEP %i :", i+1);        
        scanf("%i", &endereco[i].cep);
    }
    
    for (int i = 0; i < 3; i++)
    {
        if ( strcmp (endereco[i].estado ,"MG") == 0 )
        {
            printf("%s\n",endereco[i].rua);
            printf("%i\n",endereco[i].numero);
            printf("%s\n",endereco[i].complemento);
            printf("%s\n",endereco[i].cidade);
            printf("%s\n",endereco[i].estado);
            printf("%i\n",endereco[i].cep);
        }
        
    }
    







}
 