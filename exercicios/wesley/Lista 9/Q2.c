/*
Questão 2
Crie um programa que recebe como parametro o caminho para o arquivo binário criado na questão anterior. 
O programa deve exibir todas as informações registradas no arquivo.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct registro{
    char dominio[100];
    char login[100];
    char senha[100];
};

int main (int argc, char* argv[]){
    FILE *arquivo;
    struct registro cliente ;

    arquivo = fopen(argv[1],"rb");
    fread(&cliente,sizeof(struct registro),1,arquivo);
    printf("%s\n",cliente.dominio);
    printf("%s\n",cliente.login);
    printf("%s\n",cliente.senha);
    
    fclose(arquivo);
    //Apos a compilação
    //Chamar no console: ./a.out site.txt
return 0;}
