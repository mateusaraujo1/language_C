
/*
Questão 2
Escreva um programa que aloque dinamicamente uma matriz (de inteiros) de dimensões definidas pelo usuário. 
Em seguida, implemente uma função que receba um valor, retorne 1 caso o valor esteja na matriz, ou retorne 0 caso não esteja na matriz. 
Crie uma função que imprima uma matriz passada como parâmetro e use-a para imprimir a matriz.
OBS: porquê quando chamo a função "imprime", ela mostra um número em baixo?
OBS2: A função "imprime" deve receber somente a matriz?
*/
#include<stdio.h>
#include<stdlib.h>

int presente (int **m, int l,int c,int n){
    int i,j,encontrou=0;

    for(i=0;i<l;i++){
        for(j=0;j<c;j++){
            if(n==m[i,j])
                encontrou=1;
        }
    }

return encontrou;}

int imprime (int **m, int l,int c){
    int i,j;
    printf("\n matriz:\n");
    for(i=0;i<l;i++){
        for(j=0;j<c;j++){
            printf("%d ",m[i,j]);
        }
        printf("\n");
    }
}

int main(){
    int **m,l,c,i,j,n;

    printf("Indique o numero de linhas e colunas: \n");
    scanf("%d %d",&l,&c);

    m = malloc(l * sizeof(int*));
    for(i=0;i<l;i++){
        m[i]=malloc(c*sizeof(int));
    }

//inicializa a matriz
    for(i=0;i<l;i++){
        for(j=0;j<c;j++){
            m[i,j]=j;
        }
    }

    printf("Numero a verificar presenca: \n");
    scanf("%d",&n);
    printf(" funcao retornou: %d\n",presente(m, l,c,n));

    printf(imprime(m, l,c));

    for(i=0;i<l;i++){
        free(m[i]);
    }
    free(m); m=NULL;
return 0;}