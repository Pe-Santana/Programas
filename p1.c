#include <stdio.h>
#include <stdlib.h>

/*
--- Instruções da prova--- 
Qualquer exercício copiado de um colega ou da internet implicará nota zero em toda a prova,
 mesmo que a cópia seja feita somente de um trecho

A nota será zerada tanto para quem deixou copiar quanto para quem fez a cópia.

Não enviar o enunciado nem as respostas para os colegas

Não haverá checagem de exercício correto. 

Formate a saída de seu programa da melhor forma possível. Por exemplo, se o exercício
pede para informar o valor de um produto, escreva no printf um texto que seja adequado 
ao que for pedido:

Forma correta 
Digite o preço do produto 1: 20
Digite o preço do produto 2: 50.6

Forma errada
20
produto: 50.6

Fique atento também à saída gerada pelo programa. Escreva textos contextualizando os cálculos 
realizado e não somente mostre número Por exemplo:

Forma correta
O consumo de gasolina no mês 5 foi 50L – valor alto
O consumo de gasolina no mês 2 foi 20L – valor baixo

Forma errada
50L
50L – alto
*/

// Fazer um programa para cadastro de carros. As informações para cadastro são:
// modelo (ex: gol, ka, c3), o ano (ex: 1999, 2015, 2021) e o consumo (ex: 10 Km/l, 7 km/l, 16 Km/l)
// Verificar no main() abaixo os exercícios da prova

// Definir as estruturas necessárias aqui:

typedef struct carros
{
    char modelo[20];
    int ano;
    int consumo;
} carros;

typedef struct DocCRLV
{
   char nome[30];
   long long int cpf;
   carros carro; 
}DocCRLV;


// Função: Busca Maior Consumo (ex02)
// Essa função retorna o carro de maior consumo
// Entrada: todos os carros cadastrados
// Saída: índice do vetor indicando a posição de maior valor
// (se houver empate pode ser retornado qualquer um dos carros)

carros MaiorConsumo(carros *carro, int n)
{
    int MC;
    MC = carro[0].consumo;
    carros M;

    for (int i = 0; i < n; i++)
    {
        if (MC > carro[i].consumo)
        {

            MC = carro[i].consumo;
            M = carro[i];
        }
    }

    return M;
}

// Função: Índice de Eficiência (ex03)
// Essa calcula a eficiência energética de um carro
// o índice de eficiência é calculado usando a seguinte fórmula
//
//                                 ano_veiculo - 1991
//   ind = consumo (em km/l)  *  ---------------------
//                                        30
//
// A função deve retornar um valor inteiro de acordo com a classificação listada na tabela abaixo.
// Valores inválidos correspondem a números negativos, zeros e ano menor que 1980 e maior que 2021
// Todos os comandos de entrada e saída devem estar no programa principal
// Todos os cálculos devem ser feitos na função.

int Efic(carros carro)
{
    int ind;

    ind = carro.consumo * (carro.ano - 1991) / 30;

    if (ind < 7)
    {
        return 4;
    }
    if (ind >= 7)
    {
        return 3;
    }
    if (ind >= 8)
    {
        return 2;
    }
    if (ind >= 10)
    {
        return 1;
    }
    else
    {
        return -1;
    }
}
/*
+-------------------+-----------------------------------------------+----------------+
| Retorno da Função | Valor do índice de eficiência                 | Classificação  |
+-------------------+-----------------------------------------------+----------------+
| -1                | -                                             | Valor invalido |
+-------------------+-----------------------------------------------+----------------+
| 1                 | acima ou igual 10                             | A              |
+-------------------+-----------------------------------------------+----------------+
| 2                 | acima ou igual a 8,8 e menor que 10           | B              |
+-------------------+-----------------------------------------------+----------------+
| 3                 | acima ou igual a 7,5 e menor que 8,8          | C              |
+-------------------+-----------------------------------------------+----------------+
| 4                 | abaixo de 7,5                                 | D              |
+-------------------+-----------------------------------------------+----------------+

*/

// Função: Busca Maior Consumo - retorno Ponteiro (ex05)
// Essa função retorna o carro de maior consumo
// Entrada: todos os carros cadastrados
// Saída: ponteiro para posição de vetor de maior valor
// (se houver empate pode ser retornado qualquer um dos carros)

int main()
{

    // Ex 01: permitir que o usuário cadastre quantos carros desejar
    //  - ler do teclado a quantidade de carros que o usuário escolheu
    //  - ler do teclado as informações dos carros
    int n;
    printf("Informe quantos carros deseja cadastrar: ");
    scanf("%i", &n);

    carros *carro;

    carros MC;

    int efic[n];

    char classificacao[20];

    double ind;

    carro = (carros *)malloc(sizeof(carros));

    for (int i = 0; i < n; i++)
    {
        setbuf(stdin, NULL);
        printf("Indentifique o modelo do carro %i :", i + 1);
        gets(carro[i].modelo);

        printf("Indentifique o ano do carro %i :", i + 1);
        scanf("%i", &carro[i].ano);

        printf("Indentifique o consumo do carro %i em km/l:", i + 1);
        scanf("%i", &carro[i].consumo);
    }

    // Ex02: utilizando a função de buscar o maior consumo, mostre
    // todas as informações do carro que possui o maior consumo.
    // Todas as funções de entrada e saída devem estar no programa
    // principal

    MC = MaiorConsumo(carro, n);

    printf("Carro com maior consumo: %s \n", MC.modelo);

    // Ex03: utilizando a função de cálculo de eficiência de um carro
    // mostre para todos os carros o seu índice de eficiência e
    // a sua classificação de eficiência
    printf("Eficiencia dos veiculos cadastrados\n");
    for (int i = 0; i < n; i++)
    {
        efic[i] = Efic(carro[i]);
        if (efic[i] = -1)
        {
            strcpy(classificacao, "Valor Invalido");
        }
        if (efic[i] = 1)
        {
            strcpy(classificacao, "A");
        }
        if (efic[i] = 2)
        {
            strcpy(classificacao, "B");
        }
        if (efic[i] = 3)
        {
            strcpy(classificacao, "C");
        }
        if (efic[i] = 4)
        {
            strcpy(classificacao, "D");
        }
        ind = carro[i].consumo * (carro[i].ano - 1991) / 30;

        printf("%s - %i - %i km/l; Indice: %.1lf; Classificacao: %s ", carro[i].modelo, carro[i].ano, carro[i].consumo, ind, classificacao);
        printf("\n");
    }

    // exemplo de saída:
    // Ford Ka - 2020 - 10 km/l; Indice: 9.7; Classificação: B

    // Ex04: Crie uma estrutura para guardar informações sobre o
    // documento de um carro CRLV (Certificado de Registro e
    //  Licenciamento de Veículo)
    // Nesse documento deverá ter o Nome, CPF, e as informações
    // do carro (deve-se utilizar a estrutura dos exercícios anteriores)
    // Crie uma variável dessa estrutura e inicialize ela com valores
    // constantes (não precisa ler do teclado) e depois mostre esses valores
    DocCRLV *documento;

    documento = (DocCRLV *)malloc(sizeof(DocCRLV));
    //cadastro

    strcpy(documento[1].nome, "Pedro Henrique");
    documento[1].cpf = 56416644642;
    strcpy(documento[1].carro.modelo, carro[0].modelo);
    documento[1].carro.ano = carro[0].ano;
    documento[1].carro.consumo = carro[0].consumo;

    printf("proprietario: %s\nCPF: %lld\nCarro: %s\nAno: %i\nConsumo Km/l: %i",documento[1].nome,documento[1].cpf,documento[1].carro.modelo,documento[1].carro.ano,documento[1].carro.consumo);


    // Ex05: Duplique o exercício 2 e modifique ele para que ao invés de
    // retornar o índice da posição do vetor que retorne um ponteiro
    // para a posição do vetor. Mostre no programa principal os dados
    // do carro utilizando o ponteiro retornado.

    return 0;
}