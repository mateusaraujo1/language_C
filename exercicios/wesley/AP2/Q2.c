/*
Questão 2
    Crie uma função que recebe uma string de letras minúsculas
    e transforma alguns dos caracteres em maiúsculos.
    Faça sorteios com a função rand para escolher os índices dos caracteres que serão alterados.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

void funcao(char s[10]){
    int i,v=0;

    for(i=0;i<10;i++){
        v=rand();
        if(v % 2 == 0){
            s[i]=toupper(s[i]);
        }
    }

}


int main(){
    srand(time(NULL));
    char s[10];
    printf("Insira uma palavra apenas com letras minusculas: \n");
    scanf("%s",s);
    printf("\n");

    funcao(s);

    printf("%s",s);

return 0;}
