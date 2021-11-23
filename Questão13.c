// Implemente em linguagem C uma função em um programa de computador que leia n valores do tipo float e os apresente em ordem crescente. Utilize alocação dinâmica de memória para realizar a tarefa


#include <stdio.h>
#include <stdlib.h>
void ordem(int m){
    int i,n,j;
    float t=0.0f;

    float *a;
    a=malloc(m*sizeof(float));
    for(i=0;i<m; i++){
        a[i]=rand() % 100+0.3;
    }

    printf("\n\nNúmeros lidos \n\n");

    for(i= 0; i<m; i++)
    {
        printf("%.2f  ", a[i]);
    }

    printf("\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<m-i;j++)
        {
            if(a[j]>a[j+1])
            {
                t = a[j+1];
                a[j+1] = a[j];
                a[j] = t;
            }
        }
    }

    printf("\n\nNúmeros ordenados \n\n");

    for(i= 1; i<=m; i++)
    {
        printf("%.2f  ", a[i]);
    }
    printf("\n\n");
    free(a);
}
int main()
{
    int n;
    printf("Valor de n: \n");
    scanf("%d", &n);
    int m=n;
    (*ordem)(m);
    return 0;


}