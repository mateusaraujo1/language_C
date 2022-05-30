/*
Escreva uma função que receba um vetor e seu tamanho como parâmetros 
e salve-a em um arquivo texto de nome “vetor.txt”. 
Cada valor do vetor deve ser salvo em uma linha do arquivo.
*/
#include <stdio.h>
#include <stdlib.h>
#define TAM 10

void arqvetor(int v[],int n){
    int i;
    FILE *arquivo;
    arquivo = fopen("vetor.txt","w");

    for(i=0; i<TAM; i++){    
        fprintf(arquivo,"%d\n",v[i]);
    }

    fclose (arquivo);
}

int main(){
    int v[TAM],i;

    for(i=0;i<TAM;i++){
        v[i]=i;
    }

    arqvetor(v,TAM);
return 0;}