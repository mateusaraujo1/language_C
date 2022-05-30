/*
Escreva um programa que leia do usuário o nome de um arquivo texto. 
Em seguida, mostre na tela quantas linhas esse arquivo possui.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    char nome[100];
    int cont=0;
    FILE *arquivo;

    printf("Insira o nome do arquivo com a extensao:\n");
    scanf("%s",&nome);
    arquivo = fopen(nome,"r");
    
    while (!feof(arquivo)){
        fscanf(arquivo,"%s",nome);
        cont++;
    }
    
        printf("%d ",cont);
    
    fclose(arquivo);
return 0;}