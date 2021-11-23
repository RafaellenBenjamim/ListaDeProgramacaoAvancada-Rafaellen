//Procure na internet mecanismos que possibilitem medir tempos de execução de rotinas computacionais. Geralmente, estas medidas são realizadas com o auxílio de funções em C que lêem a hora no sistema (sistemas Unix e Windows geralmente usam funções diferentes). Utilizando os conhecimentos que você obteve com sua pesquisa, meça os tempos de execução das implementações que você criou para os dois problemas de ordenação anteriores e compare os resultados obtido

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void ordena(int m){
    int i,j, h=0;
    float temp=0.0f;
    clock_t t;

    float *b;
    b=malloc(m*sizeof(float));
    for(i=0;i<m; i++){
        b[i]=rand() % 100+0.3;
    }

    printf("\n\nNúmeros lidos \n\n");

    for(i= 0; i<m; i++)
    {
        printf("%.2f  ", b[i]);
    }
t = clock();

    printf("\n");
    for(h=0; h<4694900; h++){
    for(i=0;i<m;i++)
    {
        for(j=0;j<m-i;j++)
        {
            if(b[j]>b[j+1])
            {
                temp=b[j+1]; //swaping element
                b[j+1]=b[j];
                b[j]=temp;
            }
        }
    }
    }

    printf("\n\nNúmeros ordenados \n\n");

    for(i= 0; i<m; i++)
    {
        printf("%.2f  ", b[i]);
    }
    t = clock() - t;
    printf("\n Tempo de execucao da criada: %lf", ((double)t)/((CLOCKS_PER_SEC/1000)));

    printf("\n\n");
    free(b);
}


int comparador(const void *a, const void *b) {
   return ( *(int*)a - *(int*)b );
}

int comparador2(const void *a, const void *b) {
   if (*(int*)a > *(int*)b) {
      return 1;
   } else if (*(int*)a < *(int*)b) {
      return -1;
   } else {
      return 0;
   }
}
int main()
{
    int i,n,j, h;
    clock_t t;

    printf("Valor de n: \n");
    scanf("%d", &n);

    float *a;
    t = clock();

    a=malloc(n*sizeof(float));
    for(i=0;i<=n; i++){
        a[i]=rand() % 100+0.3;
    }

    printf("\n\nNúmeros lidos \n\n");

    for(i= 0; i<n; i++)
    {
        printf("%.2f  ", a[i]);
    }
for(h=0; h<4694900; h++){
     qsort(a, n, sizeof(float), comparador);
}
    printf("\n\nNúmeros ordenados \n\n");

    for(i= 0; i<n; i++)
    {
        printf("%.2f  ", a[i]);
    }
    t = clock() - t;
        printf("\n\n");
    printf("Tempo de execucao da qsort: %lf", ((double)t)/((CLOCKS_PER_SEC/1000)));
    printf("\n\n");
    (*ordena)(n);
    return 0;
}