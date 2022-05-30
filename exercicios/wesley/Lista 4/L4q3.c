#include <stdio.h>
#define tam 4
int main (){
    char nome[5][10]={'a'};
    double preco[5]={0};
    int i,j,qtd,soma;
    i=j=qtd=soma=0;

    for(i=0;i<=tam;i++){
        printf("Insira o nome do produto: \n");
        scanf("%s",nome[i]);
        printf("preco: \n");
        scanf("%lf",&preco[i]);
    }

    for(i=0;i<=tam;i++){
        if(preco[i]<50){
            qtd=qtd+1;
        }
    }
    printf("A quantidade de produtos com preco menor que 50R$ e %d: \n \n",qtd);

    printf("nome dos produtos com preco entre 50R$ e 100R$: \n \n",qtd);
    for(i=0;i<=tam;i++){
        if((preco[i]>=50)&&(preco[i]<=100)){
            printf("%s\n",nome[i]);
        }
    }
 

    qtd=0;
    for(i=0;i<=tam;i++){
        if(preco[i]>100){
            qtd=qtd+1;
            soma=soma+preco[i];
        }
    }
    soma=soma/qtd;
    
    printf("Media dos precos dos produtos maiores que 100R$: %d\n",soma);
return 0;}