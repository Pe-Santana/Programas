#include <stdio.h>
#include <string.h>

struct enderecoResidencial 
{
    char rua[30];
    int numero;
    char complemento[30] ;
    char cidade[30];
    char estado[2] ;
    int cep;
};  
struct enderecoComercial
{
    char rua[30];
    int numero;
    char complemento[30] ;
    char cidade[30];
    char estado[2] ;
    int cep;
};  
struct telefone 
{
    int DDD,numero;
};  
struct telefoneResid 
{
    int DDD,numero;
};  
struct nascimento 
{
    int Dia, Mes, Ano;
};  
struct dataIngresso
{
    int Dia, Mes, Ano;
};  

struct CADASTRO
{
    char nome[30];
    struct enderecoComercial comercial; 
    double Salario;
    int ID;
    int CPF;
    char EstCivil[10];
    struct telefone tel;
    struct nascimento dat;
    char sexo[10];
    struct enderecoResidencial residencial;
    struct telefoneResid telResid;
    struct dataIngresso ingress;

};

int main () {

    struct CADASTRO pessoas[5];

    //1 cadastro
    strcpy (pessoas[0].nome,"Carlos Lopes");
    strcpy (pessoas[0].comercial.rua, "Rua Sao Simao");
    pessoas[0].comercial.numero = 32;
    strcpy (pessoas[0].comercial.complemento, "loja esquina");
    strcpy (pessoas[0].comercial.cidade, "Uberlandia");
    strcpy (pessoas[0].comercial.estado, "MG");
    pessoas[0].comercial.cep = 38402661;
    pessoas[0].Salario = 3200;
    pessoas[0].ID = 34543315;
    pessoas[0].CPF = 13554312387;
    strcpy (pessoas[0].EstCivil,"Casado");
    pessoas[0].tel.DDD = 34;
    pessoas[0].tel.numero = 32211221;
    pessoas[0].dat.Dia = 30;
    pessoas[0].dat.Mes = 10;
    pessoas[0].dat.Ano = 1973;
    strcpy (pessoas[0].sexo,"masculino");
    strcpy (pessoas[0].residencial.rua, "Rua Jacinto Nunes");
    pessoas[0].residencial.numero = 446;
    strcpy (pessoas[0].residencial.complemento, "casa azul");
    strcpy (pessoas[0].residencial.cidade, "Uberlandia");
    strcpy (pessoas[0].residencial.estado, "MG");
    pessoas[0].residencial.cep = 38532006;
    pessoas[0].telResid.DDD = 34;
    pessoas[0].telResid.numero = 998855312;
    pessoas[0].ingress.Dia = 21;
    pessoas[0].ingress.Mes = 6;
    pessoas[0].ingress.Ano = 2113;


    //2 cadastro
    strcpy (pessoas[1].nome,"Regina Vieira");
    strcpy (pessoas[1].comercial.rua, "Rua Domingos Costa");
    pessoas[1].comercial.numero = 12;
    strcpy (pessoas[1].comercial.complemento, "loja verde");
    strcpy (pessoas[1].comercial.cidade, "Uberlandia");
    strcpy (pessoas[1].comercial.estado, "MG");
    pessoas[1].comercial.cep = 38463461;
    pessoas[1].Salario = 2250;
    pessoas[1].ID = 34436791;
    pessoas[1].CPF = 12365328347;
    strcpy (pessoas[1].EstCivil,"Casada");
    pessoas[1].tel.DDD = 34;
    pessoas[1].tel.numero = 32272341;
    pessoas[1].dat.Dia = 20;
    pessoas[1].dat.Mes = 1;
    pessoas[1].dat.Ano = 1982;
    strcpy (pessoas[1].sexo,"feminino");
    strcpy (pessoas[1].residencial.rua, "Rua Domingos Costa");
    pessoas[1].residencial.numero = 12;
    strcpy (pessoas[1].residencial.complemento, "casa acima da loja verde");
    strcpy (pessoas[1].residencial.cidade, "Uberlandia");
    strcpy (pessoas[1].residencial.estado, "MG");
    pessoas[1].residencial.cep = 38463461;
    pessoas[1].telResid.DDD = 34;
    pessoas[1].telResid.numero = 32272341;
    pessoas[1].ingress.Dia = 20;
    pessoas[1].ingress.Mes = 4;
    pessoas[1].ingress.Ano = 2015;

    //3 cadastro
    strcpy (pessoas[2].nome,"Cleiton Rasta");
    strcpy (pessoas[2].comercial.rua, "Av. Rondon Pacheco");
    pessoas[2].comercial.numero = 556;
    strcpy (pessoas[2].comercial.complemento, "Fachada Branca");
    strcpy (pessoas[2].comercial.cidade, "Uberlandia");
    strcpy (pessoas[2].comercial.estado, "MG");
    pessoas[2].comercial.cep = 38466631;
    pessoas[2].Salario = 5543.32;
    pessoas[2].ID = 65749218;
    pessoas[2].CPF = 15293823147;
    strcpy (pessoas[2].EstCivil,"Solteiro");
    pessoas[2].tel.DDD = 34;
    pessoas[2].tel.numero = 32178911;
    pessoas[2].dat.Dia = 3;
    pessoas[2].dat.Mes = 4;
    pessoas[2].dat.Ano = 1986;
    strcpy (pessoas[2].sexo,"masculino");
    strcpy (pessoas[2].residencial.rua, "Rua Prado Costa");
    pessoas[2].residencial.numero = 125;
    strcpy (pessoas[2].residencial.complemento, "casa esquina");
    strcpy (pessoas[2].residencial.cidade, "Uberlandia");
    strcpy (pessoas[2].residencial.estado, "MG");
    pessoas[2].residencial.cep = 384632161;
    pessoas[2].telResid.DDD = 34;
    pessoas[2].telResid.numero = 32162001;
    pessoas[2].ingress.Dia = 4;
    pessoas[2].ingress.Mes = 6;
    pessoas[2].ingress.Ano = 2014;

    printf ("%.2f", pessoas[0].Salario);




















}