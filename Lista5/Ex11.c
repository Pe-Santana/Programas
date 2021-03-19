#include <stdio.h>

int main()
{

    int v[5], v1[5], v2[5];

    int a = 0;
    int b = 0;

    printf("<< Pares e Impares  >>\n");

    for (int i = 0; i < 5; i++)
    {
        printf ("Digite o valor %i: ", i+1);
        scanf ("%i",&v[i]);

        if (v[i]%2 == 0)
        {
            v2[a] = v[i];
            a++;
        }else
        {
            v1[b] = v[i];
            b++;
        }
        
    }
    
    printf ("Impares: ");

    for (int j = 0; j < b; j++)
    {
        printf ("%i", v1[j]);
        if (j < b-1)
        {
            printf (", ");
        }
        
    }

    printf ("\nPares: ");

    for (int k = 0; k < a; k++)
    {
        printf ("%i", v2[k]);
        if (k < a-1)
        {
            printf (", ");
        }

    }
  
    
    


}
