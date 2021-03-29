#include <stdio.h>

struct datas 
{
    int Dia[3], Mes[3], Ano[3];
};  

int main () {

    struct datas data;

    int comp, ano;

    for (int i = 0; i < 3; i++)
    {
        scanf ("%i %i %i", &data.Dia[i], &data.Mes[i], &data.Ano[i]);
    }
    comp = data.Ano[0];
    for (int i = 0; i < 3; i++)
    {
        if (data.Ano[i] >= comp)
        {
            ano = data.Ano[i];
            comp = data.Ano[i];    
        }
    }
        
        
        

    
    printf ("O maior ano cadastrado e %i", ano);
    










}
 