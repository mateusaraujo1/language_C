/*
Questão 3
    Crie uma estrutura que represente um super-herói,
    a estrutura deve ter os membros: nome (string), força, resistência e velocidade (float).

    Pergunte ao usuário o número de heróis que deseja criar,
    aloque dinamicamente um vetor do tipo 𝘀𝘁𝗿𝘂𝗰𝘁 𝗵𝗲𝗿𝗼𝗶 e 
    ao final da inserção dos heróis, imprima o vetor mostrando as informações de cada herói.
*/
#include <stdio.h>
#include <stdlib.h>

    struct heroi{
        char nome[50];
        float forca,resistencia,velocidade;
    };
    

int main(){
    int n,i;
    struct heroi *databook=NULL;
    
    printf("Quantos herois deseja criar?: \n");
    scanf("%d",&n);
    databook=malloc(n*sizeof(struct heroi));
    printf("\n");

    for(i=0;i<n;i++){
        printf("Digite: Nome do Heroi, Forca, Resistencia e Velocidade. Para o heroi %d\n",i+1);
        scanf("%s",databook[i].nome);
        printf("\n");
        scanf("%f",&(databook[i].forca));
        scanf("%f",&(databook[i].resistencia));
        scanf("%f",&(databook[i].velocidade));
        printf("\n");
    }

    for(i=0;i<n;i++){
        printf("Nome do heroi %d: %s\n",i+1,databook[i].nome);
        printf("Forca do heroi %d: %.2f\n",i+1,databook[i].forca);
        printf("Resistencia do heroi %d: %.2f\n",i+1,databook[i].resistencia);
        printf("Velocidade do heroi %d: %.2f\n",i+1,databook[i].velocidade);
        printf("*-----------------------------------------------*\n");
    }

return 0;}
