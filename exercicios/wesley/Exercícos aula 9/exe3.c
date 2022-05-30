/*
Faça um programa que leia um arquivo texto contendo uma lista de compras. 
Cada linha do arquivo possui nome, quantidade e valor unitário do produto. 
O programa então exibe o total da compra.
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    char nome[100]= "lista.txt";
    float v,soma=0;
    int n;
    FILE *lista;

    lista = fopen(nome,"r");

    while (!feof(lista)) {
        fscanf(lista,"%*s %d %f",&n,&v);
        printf("%d %.2f\n",n,v);
        soma=soma+n*v;
    }

    printf("total: %.2f\n",soma);

fclose (lista);
return 0;}