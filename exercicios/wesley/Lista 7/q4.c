/*
(𝗮) Crie uma estrutura 𝗣𝗲𝗰𝗮 (peça) contendo os atributos: nome, linha e coluna. 
(𝗯) Depois crie uma matriz 8×8 de ponteiros para peças chamada 𝘁𝗮𝗯𝘂𝗹𝗲𝗶𝗿𝗼. 
(𝗰) inicialize a matriz de ponteiros com 𝗡𝗨𝗟𝗟. 
(𝗱) peça ao usuário os dados para a inicialização de duas peças e as adicione ao tabuleiro. 
(𝗲) Crie uma função que receba o tabuleiro
    e o imprima para verificar se as peças se encontram nas posições corretas seguindo anotação na figura abaixo.
    Imprima nas posições nulas (vazias) um ’*’ (asterisco) para casas brancas e um ’ ’ (espaço) para casas pretas.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct peca{
    char nome[40];
    int linha;
    int coluna;
};

void imprime(struct peca *tabuleiro[8][8]){
    int i,j;

    for(i=0;i<8;i++){
        for(j=0;j<8;j++){
            printf("%d",tabuleiro[i][j]->linha);
            printf(",");
            printf("%d",tabuleiro[i][j]->coluna);
            printf(" ");
            printf("%s ",tabuleiro[i][j]->nome);
            printf(" ");
        }
        printf("\n");
    }
}

int main() {
    int l,c;
    struct peca *tabuleiro[8][8]={NULL};

    for(l=0;l<8;l++){
        for(c=0;c<8;c++){
            tabuleiro[l][c]=malloc(sizeof(struct peca));
            tabuleiro[l][c]->nome[0]='-';
            tabuleiro[l][c]->linha=l;
            tabuleiro[l][c]->coluna=c;
        }
    }


    printf("Insira linha, coluna e nome, respectivamente, para a 1 peca:\n");
    scanf("%d",&l);
    scanf("%d",&c);
    tabuleiro[l][c]->linha=l;
    tabuleiro[l][c]->coluna=c;
    printf("linha %d\n",tabuleiro[l][c]->linha);
    printf("coluna %d\n",tabuleiro[l][c]->coluna);
    scanf("%s",tabuleiro[l][c]->nome);
    printf("%s",tabuleiro[l][c]->nome);

    /*printf("Insira linha, coluna e nome, respectivamente, para a 2 peca:\n");
    scanf("linha: %d\n",&l);
    scanf("coluna: %d\n",&c);
    tabuleiro[l][c]->linha=l;
    tabuleiro[l][c]->coluna=c;
    //printf("%d %d\n",tabuleiro[l][c]->linha,tabuleiro[l][c]->coluna);
    scanf("%s",tabuleiro[l][c]->nome);
    //printf("%s",tabuleiro[l][c]->nome);*/

    printf("\n");
    imprime(tabuleiro);
return 0;}