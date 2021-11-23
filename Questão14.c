// Reimplemente o programa da questão anterior utilizando a função qsort() do C. Comente o seu código, explicando o que faz cada uma das linhas.


#include <stdio.h>   //biblioteca padrao
#include <stdlib.h> //biblioteca de ponteiro
#include <time.h>   //biblioteca do contador de tempo

int comparador(const void *a, const void *b) { // Função para comparar
    return ( *(int*)a - *(int*)b );             // Comparando as variaveis
}

int comparador2(const void *a, const void *b) { // Função para trocar as variáveis
    if (*(int*)a > *(int*)b) {                   // Verificando se a>b é verdade
        return 1;                                 // Retorna 1 se for sim
    } else if (*(int*)a < *(int*)b) {            // Se a<b é verdade
        return -1;                                 // Retorna -1
    } else {                                      // Se a=b 
        return 0;                                  // Retorna 0
    }
}
int main(int argc, char *argv[]) // Inicia a função (função principal)
{
    float tempo;                 // Criando a variável tempo
    clock_t t;                   // Variáveis de tempo

    int i,n,j, h;                 // Criando variáveis
    float temp=0.0f;             
    printf("Valor de n: \n");    // Texto para informar o usuário
    scanf("%d", &n);             // Recebe o valor dado pelo usuário

    float *a;                    // Criando variável

    a=malloc(n*sizeof(float));    // Alocando variável dinamicamente
    for(i=0;i<n; i++){            
        a[i]=rand() % 100+0.3;     // Dizendo quais são os valores de a[i]
    }

    printf("\n\nNúmeros lidos \n\n");   // Mostra os números lidos fora de ordem crescente

    for(i= 0; i<n; i++)         
    {
        printf("%.2f  ", a[i]);   // Mostra o conteúdo do vetor
    }
    t = clock();                  // Inicia a contagem de tempo
    for(h=0; h<4694900; h++){          // Laço for de i a 4694900
        qsort(a, n, sizeof(float), comparador);   // Chamando a funcao qsort
    }
    t = clock() - t;                             // Finaliza a contagem de tempo
    printf("\n\nNúmeros ordenados \n\n");                   // Mostra os números em ordem

    for(i= 0; i<n; i++)                        
    {
        printf("%.2f  ", a[i]);                  // Mostra o conteúdo do vetor
    }
    printf("\n\n");                              
    printf("\n Tempo de execucao: %lf\n", ((double)t)/((CLOCKS_PER_SEC/1000))); //Imprime o tempo de execução
    free(a);
}
