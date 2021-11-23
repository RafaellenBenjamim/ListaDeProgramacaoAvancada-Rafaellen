// Utilize a ideia do ponteiro para função pela função qsort() para implementar sua própria função de ordenação. Para isso, sua função deverá receber, entre outros argumentos, um ponteiro para a função de comparação.


#include <stdio.h>
#include <stdlib.h>
void ordena(int m){
    int i,n,j;
    float temp=0.0f;

    float *a;
    a=malloc(m*sizeof(float));
    for(i=0;i<=m; i++){
        a[i]=rand() % 100+0.3;
    }

    printf("\n\nNúmeros lidos \n\n");

    for(i= 0; i<=m; i++)
    {
        printf("%.2f  ", a[i]);
    }

    printf("\n");
    for(i=0;i<=m;i++)
    {
        for(j=0;j<m-i;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j+1];
                a[j+1]=a[j];
                a[j]=temp;
            }
        }
    }

    printf("\n\nNúmeros ordenados \n\n");

    for(i= 0; i<=m; i++)
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
    (*ordena)(m);
    return 0;


}