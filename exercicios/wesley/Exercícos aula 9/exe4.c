/*
Escreva uma função que receba como parâmetro o nome de um arquivo texto
e retorne quantas vogais esse arquivo possui.
*/
#include <stdio.h>
#include <stdlib.h>

int vogais (char nome[100]){
    int i,n=0;
    FILE *arquivo;
    arquivo = fopen(nome,"r");

    while (!feof(arquivo)) {
        fscanf(arquivo,"%s",nome);
        for(i=0; i<(strlen(nome)); i++){    
            if(nome[i]=='a'||nome[i]=='e'||nome[i]=='i'||nome[i]=='o'||nome[i]=='u'||
               nome[i]=='A'||nome[i]=='E'||nome[i]=='I'||nome[i]=='O'||nome[i]=='U')
            {
                n++;
            }
        }
    }    

    fclose (arquivo);
return n;}

int main(){
    char nome[100]= "nome.txt";
    int n=0;

    n=vogais(nome);

    printf("QTD de Vogais: %d\n",n);

return 0;}