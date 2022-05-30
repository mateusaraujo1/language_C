/*
Questão 3
Escreva um programa, chamado “copy”, para copiar o conteúdo de um arquivo para um outro arquivo. 
O usuário deve fornecer o nome do arquivo de origem e o nome do arquivo destino. 

Tome cuidado com algumas coisas importantes: o arquivo origem pode não existir;
o arquivo destino pode não ser criado (por exemplo a pasta destino não existe);

o arquivo de destino pode já existir. 
Nesse caso seu programa deve perguntar ao usuário se ele deseja sobrepor esse arquivo;
 
o número de parâmetros fornecidos pelo usuário pode não estar corretos. 
Use os parâmetros de linha de comando para chamar o seu programa.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct registro{
    char dominio[100];
    char login[100];
    char senha[100];
};

void copia(char nomearqcopia[100],char nomearqorigem[100]){
        FILE *arqorigem,*arqcopia;
        struct registro aori,acopi;
        arqorigem = fopen(nomearqorigem,"rb");
        arqcopia = fopen(nomearqcopia,"wb");
        if(arqcopia == NULL){
            printf("Erro na criacao do arquivo copia\n");
            exit;
        }else{
            fread(&aori,sizeof(struct registro),1,arqorigem);
            strcpy(acopi.dominio, aori.dominio);
            strcpy(acopi.login, aori.login);
            strcpy(acopi.senha, aori.senha);

            fwrite(&acopi,sizeof(struct registro),1,arqcopia);
        }
fclose(arqcopia);
fclose(arqorigem);
}

int main (int argc, char* argv[]){
    FILE *arqorigem,*arqcopia;
    char nomearqorigem[100], nomearqcopia[100];
    int n;
    
    strcpy(nomearqorigem, argv[1]);
    strcpy(nomearqcopia, argv[2]);

    /*printf("Digite o nome do arquivo original:\n");
    //arquivo da questao anterior: site.txt
    scanf("%s",nomearqorigem);
    setbuf(stdin,NULL);*/

    arqorigem = fopen(nomearqorigem,"rb");
    if(arqorigem == NULL){
        printf("Arquivo original nao existe\n");
        exit;
    }else{
        /*printf("Digite nome do novo arquivo:\n");
        scanf("%s",nomearqcopia);*/
        arqcopia = fopen(nomearqcopia,"rb");
        if(arqcopia != NULL){
            printf("Aparentemente, ja existe um arquivo com esse nome. \nDeseja sobrepor?\n");
            printf("1 para sim. 0 para nao\n");
            scanf("%d",&n);
            close(arqcopia);
            if(n==1){
                copia(nomearqcopia,nomearqorigem);
            }

        }else{
            copia(nomearqcopia,nomearqorigem);
        }
    }

fclose(arqorigem);    
fclose(arqcopia);
return 0;}
