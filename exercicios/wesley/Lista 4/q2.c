#include <stdio.h>
#define tam 10
int main (){
    char nome[10][10]={'a'};
    double preco[10]={0},npreco[10]={0};
    int cod[10]={0},i,res=0;

    for(i=0;i<tam;i++){
        printf("Insira o nome do produto: \n");
        scanf("%s",nome[i]);
        printf("codigo: \n");
        scanf("%d",&cod[i]);
        printf("preco: \n");
        scanf("%lf",&preco[i]);
    }

    for(i=0;i<tam;i++){
        res=cod[i]%2;
        if((res==0)&&(preco[i]>1000)){
            npreco[i]=preco[i]*1.2;
        }else{
            if(cod[i]%2==0){
            npreco[i]=preco[i]*1.15;
            }else{
                if(preco[i]>1000){
                npreco[i]=preco[i]*1.1;
                }
            }
        }
    }

    for(i=0;i<tam;i++){
        if(npreco[i]!=0){
            printf("produto %s, cod %d, preco atual %0.2lf, aumentara para: %0.2lf\n",nome[i],cod[i],preco[i],npreco[i]);
        }
    }

    /*printf("\n");
    for(i=0;i<=tam;i++){
        printf("nome do produto %c, cod %d, preco %0.2lf: \n",nome[i],cod[i],preco[i]);
    }*/

return 0;}