#include <stdio.h>

int main() {


    double Peso, Altura, IMC; 


    printf ("<< Cauculo de IMC >>\n");

    printf ("Entre com seu peso:");
    
    scanf ("%lf", &Peso);


    printf ("Entre com sua altura:");
    
    scanf ("%lf", &Altura);

    IMC = Peso/(Altura*Altura);

    if (IMC < 18.5)
    {
        
        printf ("Seu IMC e %.1lf e sua classificacao e MAGREZA.", IMC);

    }
    if (IMC >= 18.5 && IMC <= 24.9)
    {
        
        printf ("Seu IMC e %.1lf e sua classificacao e SAUDAVEL.", IMC);

    }
    if (IMC >= 25 && IMC <= 29.9)
    {
        
        printf ("Seu IMC e %.1lf e sua classificacao e SOBREPESO.", IMC);

    }
    if (IMC >= 30 && IMC <= 34.9)
    {
        
        printf ("Seu IMC e %.1lf e sua classificacao e OBESIDADE GRAU I.", IMC);

    }
    if (IMC >= 35 && IMC <= 39.9)
    {
        
        printf ("Seu IMC e %.1lf e sua classificacao e OBESIDADE GRAU II (SEVERA).", IMC);

    }
    if (IMC >= 40)
    {
        
        printf ("Seu IMC e %.1lf e sua classificacao e OBESIDADE GRAU III (MORBIDA).", IMC);

    }




}