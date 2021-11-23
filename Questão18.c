// Crie uma função capaz de realizar multiplicação matricial da forma C=A B. A função deve receber 6 argumentos: os ponteiros para as matrizes A, B e C, o número de linhas e colunas de A e o número de colunas de B (assuma que o número de coluna de A é igual ao número de linhas de B). O resultado da multiplicação deve ficar armazenado em C. Crie um programa para testar sua implementação, capaz de utilizar a função de multiplicação e imprimir as três matrizes. A função criada para multiplicação não deve realizar nenhum tipo de saída de dados no terminal.


#include <stdio.h>
#include <stdlib.h>
void multiplica(int **d, int **e, int  **f, int anla, int anca, int ancb){
    int i, j,x, p;
    int anlb, anlc, ancc;
         anlb=anla;
        anlc=anla;
        ancc=ancb;

    for(i = 0; i < anla; i++) {
        for(j = 0; j < anca; j++) {
            d[i][j]=rand()%10-5;


        }
    }


    for(i = 0; i < anca; i++) {
        for(j = 0; j < ancb; j++) {
            e[i][j]=rand()%10-5;

        }

    }




    for(i = 0; i < anla; i++) {
        for(j = 0; j < ancb; j++) {


            f[i][j]=0;
            for(p=0; p<anca; p++){
                x=x+d[i][p]*e[p][j];
            }
            f[i][j]=x;
            x=0;

        }

    }

}

    int main() {

        int i, j, nla, nca, ncb;
        int **a,**b, **c;

        printf("\n Informe a quantidade de linhas da matriz A: ");
        scanf("%d",&nla);
        printf("\n Informe a quantidade de colunas da matriz A: ");
        scanf("%d",&nca);
        printf("\n Informe a quantidade de colunas da matriz B: ");
        scanf("%d",&ncb);

        a=malloc(nla*sizeof (int*));
        for(i=0; i<nla; i++){
            a[i]=malloc(nca*sizeof (int));
        }

        b=malloc(nca*sizeof (int*));
        for(i=0; i<nca; i++){
            b[i]=malloc(ncb*sizeof (int));
        }

        c=malloc(nla*sizeof (int*));
        for(i=0; i<nla; i++){
            c[i]=malloc(ncb*sizeof (int));
        }


        (*multiplica)(a, b, c, nla, nca, ncb);
        printf("---------------------------- 1 - Matriz A Gerada ---------------------------------\n\n");

        for(i = 0; i < nla; i++) {
            for(j = 0; j < nca; j++) {

                printf("matriz A = [%d][%d] = %d |",i,j, a[i][j]);

            }
            printf("\n\n");
        }

        printf("---------------------------- 2 - Matriz B Gerada ---------------------------------\n\n");
        for(i = 0; i < nca; i++) {
            for(j = 0; j < ncb; j++) {
                printf("matriz B = [%d][%d] = %d |",i,j, b[i][j]);
            }
            printf("\n\n");
        }

        printf("---------------------------- 3 - Matriz C Gerada ---------------------------------\n\n");


        for(i = 0; i < nla; i++) {
            for(j = 0; j < ncb; j++) {

                printf("matrizC = [%d][%d] = %d |",i,j, c[i][j]);
            }
            printf("\n\n");
        }
        free(a[0]);
        free(a);
        free(b[0]);
        free(b);
        free(c[0]);
        free(c);

        return 0;

    }