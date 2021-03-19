#include <stdio.h>

int main()
{

    char C = 32;

    for (int i = 32; i < 127; i)
    {
        for (int j = 0; j < 7; j++)
        {
                        
            printf ("%i %c      ", C, C);

            C++;
            i++;
            if (C == 127)
            {
                break;
            }
            
        }
        
        printf ("\n");
    }
    






}