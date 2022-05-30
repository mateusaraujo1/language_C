/*Questão 1
Faça um programa que leia uma quantidade qualquer de números,armazenando-os na memória,
pare a leitura quando o usuário digitar um número negativo.
Crie uma função que imprima um vetor passado como parâmetro, e use-a para imprimir o vetor lido.*/
#include <stdio.h>
#include <stdlib.h>

void imprime(int n[],int i){
    int j;
    for (j=0;j<i;j++){
        printf("%d ",n[j]);
    }
}
int main(){
    int *n,i=0,r=0;

    n=malloc(sizeof(int));
    scanf("%d",&n[0]);

    while (n[i]>=0){
        i++;
        scanf("%d",&r);
        if(r>=0){
        n = realloc(n , (i+1) * sizeof(int));
        n[i]=r;}
    }
    imprime(n,i);

    free(n);
    n=NULL;
return 0;}