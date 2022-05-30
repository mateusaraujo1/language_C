/*Questão 3
Implemente a função 𝗽𝗿𝗶𝗺𝗼() que recebe como parâmetro um número inteiro
 e retorna 1 caso o número seja primo, ou 0 caso contrário.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int primo(int );

int main(){
    srand(time(NULL));
    int n,r;
    //insere um numero aleatorio
    n=(1 + (rand()%100));
    printf("\n");
    //mostra esse numero
    printf("numero: %d \n",n);
    r=primo(n);

    if(r==1){
        printf("funcao primo retornou %d, logo: %d e primo \n",r,n);
    }else{
        printf("funcao primo retornou %d, logo: %d nao e primo \n",r,n);
    }

return 0;}

int primo(int n){
    int i, resultado=0;
    for (i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            resultado++;
            break;
        }
    }

    if (n==1 || n==0){
        resultado=1;}

    if (resultado == 0){
        resultado=1;
    }else{
        resultado=0;
    }
  
return resultado;}