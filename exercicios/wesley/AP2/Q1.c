/*
Questão 1
    Crie uma função que recebe uma string e um caractere,
    e apague todas as ocorrências desses caractere na string
    substituindo cada ocorrência por um espaço em branco.
*/
#include <stdio.h>
#include <stdlib.h>

void funcao(char s[10],char c){
    int i;

    for(i=0;i<10;i++){
        if(s[i]==c){
            s[i]=' ';
        }
    }

}


int main(){
    char s[10],c;
    printf("Insira uma palavra, em seguida, um caractere: \n");
    scanf("%s %c",s,&c);
    printf("\n");

    funcao(s,c);

    printf("%s",s);

return 0;}
