/*
Escreva um programa para converter o conteúdo de um arquivo texto em caracteres maiúsculos. 
O programa deverá ler do usuário o nome do arquivo a ser convertido 
e o nome do arquivo a ser salvo.
*/
#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

int main(){
    char nome[100];
    char nome2[100];
    char nomeaux[100];
    int i;
    FILE *arquivoler,*arquivoconvertido;

    printf("Nome do arquivo a ser convertido:\n");
    //scanf("%[^\n]s",nome);
    scanf("%s",nome);
    arquivoler = fopen(nome,"r");

    printf("Nome do arquivo a ser salvo:\n");
    //scanf("%[^\n]s",nome2);
    scanf("%s",nome2);
    arquivoconvertido = fopen(nome2,"w");

    while (!feof(arquivoler)) {
        fscanf(arquivoler,"%s",nome);

        for(i=0; i<(strlen(nome)); i++){    
            nomeaux[i] = toupper(nome[i]);
        }
        nomeaux[i]='\0';
        fprintf(arquivoconvertido,"%s\n",nomeaux);
    }

fclose (arquivoler);
fclose (arquivoconvertido);
return 0;}