/*Questão 2
Implemente a função 𝗼𝗿𝗱𝗲𝗻𝗮𝗗𝗲𝗰𝗿𝗲𝘀𝗰𝗲𝗻𝘁𝗲() que recebe como parâmetro: 
um vetor de números inteiros e o seu tamanho. 
A função deve ordenar os valores do vetor do maior valor para o menor.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define tam 4

void ordenaDecrescente(int [],int);

int main(){
    srand(time(NULL));
    int i,vetor[tam]={0};
    //inicializa vetor com numeros aleatorios
    for (i=0;i<tam;i++){
        vetor[i]=1 + (rand()%1000);}
    printf("\n");
    //mostra esse vetor
    printf("vetor: \n");
    for (i=0;i<tam;i++){
        printf("%d ",vetor[i]);}
    printf("\n");

    ordenaDecrescente(vetor,tam);

    //mostra o vetor em ordem decrescente
    printf("vetor em ordem decrescente: \n");
    for (i=0;i<tam;i++){
        printf("%d ",vetor[i]);}
    printf("\n");

return 0;}

void ordenaDecrescente(int v[],int z){
    int i,j,aux;
    for(i=0;i<z;i++){
        for(j=0;j<z;j++){
            if(v[i]>v[j]){
                aux=v[i];
                v[i]=v[j];
                v[j]=aux;
            }
        }
    }
}