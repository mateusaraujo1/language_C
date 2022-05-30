/*
Questão 1
Crie uma estrutura Registro com os membros: domínio, login e senha. 
Crie um programa que receba do usuário essas informações coloque-as 
em uma estrutura registro e salve a estrutura em um arquivo binário, 
determine que nome e localização o arquivo terá. 
Caso o arquivo não exista na localização desejada o programa deve criá-lo, 
caso já exista o programa deve atualizá-lo.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct registro{
    char dominio[100];
    char login[100];
    char senha[100];
};
    
int main (){
    FILE *arquivo;
    struct registro cliente ;

    printf("Digite o dominio, login e senha:\n");

    scanf("%[^'\n']s",cliente.dominio);
    setbuf(stdin,NULL);
    scanf("%[^'\n']s",cliente.login);
    setbuf(stdin,NULL);
    scanf("%[^'\n']s",cliente.senha);
    setbuf(stdin,NULL);
    /*printf("\nsizeof: %d",sizeof(struct registro));
    setbuf(stdin,NULL);*/

    arquivo = fopen("site.txt","wb");
    fwrite(&cliente,sizeof(struct registro),1,arquivo);    
    fclose(arquivo);

return 0;}
