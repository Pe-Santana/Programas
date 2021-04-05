#include <stdio.h>
#include <stdlib.h>

int main()
{

    double *produtos;
    int n, i;

    printf("Informe o número de produtos");
    scanf("%d", &n);

    // é necessário usar o comando malloc para alocar a memória
    produtos = (double *)malloc(n * sizeof(double));
    
    for (i = 0; i < n; i++)
    {
        printf("Informe o valor do produto %d R$:", i + 1);
        scanf("%lf", &produtos[i]);
    }
    printf("\nProdutos cadastrados\n");
    for (i = 0; i < n; i++)
    {
        printf("Produto %d  - R$: %f\n", i + 1, produtos[i]);
    } 
    
    // ao terminar de usar o vetor, devemos liberar a memória
    
    free(produtos);
}
// n é o numero de elementos que serao alocados. no caso ele multiplica o numero de espaço nesscessario para alocar o conteudo.

//o operador sizeof determina o tipo da variavel para alocação, nesse caso são n variaveis to tipo double(8bits).