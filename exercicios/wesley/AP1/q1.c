/*Questão 1
Implemente a função 𝘁𝗿𝗼𝗰𝗮() que recebe como parâmetros:
um vetor de números inteiros, os índices de duas posições e o tamanho do vetor.
A função deve trocar os valores das posições indicadas entre si.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void troca(int *[],int,int,int);

int main(){
    srand(time(NULL));
    int vetor,x,y,tam,i;

    x=rand()%10;
    y=rand()%10;
    tam=10;

    printf("valor da posicao x: %d\n",x);
    printf("valor da posicao y: %d\n",y);
    printf("tamanho do vetor: %d\n",tam);
    
    troca(&vetor, x, y, tam);

return 0;}

void troca(int *v[],int x,int y,int z){
    int i,c;

    //inicializa vetor com numeros aleatorios
    for (i=0;i<z;i++){
        v[i]=1 + (rand()%1000);}
    printf("\n");

    //mostra esse vetor
    printf("vetor: \n");
    for (i=0;i<z;i++){
        printf("%d ",v[i]);}
    printf("\n");
 
    c = v[x];
    v[x]=v[y];
    v[y]=c;

    //mostra o vetor com os numeros trocados
    printf("vetor com numeros trocados: \n");
    for (i=0;i<z;i++){
        printf("%d ",v[i]);}
    printf("\n");
}