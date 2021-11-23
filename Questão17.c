// Escreva uma função em c que escreva em um vetor a soma dos elementos correspondentes de outros dois vetores (os tamanhos dos vetores devem ser fornecidos pelo usuário). Por exemplo, se o primeiro vetor contiver os elementos 1, 3, 0 e -2, e o segundo vetor contiver os elementos 3, 5, -3 e 1, o vetor de soma terá valores resultantes iguais a 4, 8, -3 e -1. A função deve receber 4 argumentos: os nomes dos três vetores e o número de elementos presentes em cada vetor.


#include <stdio.h>
#include <stdlib.h>
void vetores(char **a, char **b, char **c, int atv){
    int *x, *y, *z, i;

    x=malloc(atv *sizeof (int));
    y=malloc(atv *sizeof (int));
    z=malloc(atv *sizeof (int));

    for(i=0; i<atv; i++){
        x[i]=0;
    }
    for(i=0; i<atv; i++){
        y[i]=0;
    }
    for(i=0; i<atv; i++){
        x[i]=rand()%20 -10;
    }
    printf("Valor do vetor ");
    printf("%s\n", a);
    for(i=0; i<atv; i++){
        printf("%d ", x[i]);
    }
    printf("\n");
    for(i=0; i<atv; i++){
        y[i]=rand()%20 -10;
    }
    printf("Valor do vetor ");
    printf("%s\n", b);
    for(i=0; i<atv; i++){
        printf("%d ", y[i]);
    }
    for(i=0; i<atv; i++){
        z[i]=0;
    }
    printf("\n");
    for(i=0; i<atv; i++){
        z[i]=x[i]+y[i];
    }
    printf("Valor do vetor ");
    printf("%s\n", c);
    for(i=0; i<atv; i++){
        printf("%d ", z[i]);
    }
    printf("\n");
    free(x);
    free(y);
    free(z);

}
int main()
{
    int operacao;

    char **vetor1, **vetor2, **vetorsoma;
    vetor1 = malloc( sizeof(char *)*10);
    vetor2 = malloc( sizeof(char *)*10);
    vetorsoma= malloc( sizeof(char *)*10);

    printf("Nome do 1º vetor:" );
    gets(vetor1);

    printf("Nome do 2º vetor: ");
    gets(vetor2);

    printf("Nome do vetor soma:" );
    gets(vetorsoma);

    printf("Tamanho do vetores: \n");
    scanf("%d", &operacao);

    (*vetores)(vetor1, vetor2, vetorsoma, operacao);
    free(vetor1);
    free(vetor2);
    free(vetorsoma);

}