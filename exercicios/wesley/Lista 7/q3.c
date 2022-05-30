/*
Questão 3
Faça um programa que leia um número inteiro n. 
Crie uma função que receba como parâmetro o número n e retorne um vetor com todos os primos entre 0 e n.
OBS: o vetor é maior do que a quantidade de primos existentes.
OBS2:Se usada alocação dinâmica de memória daria pra fazer um vetor com o exato tamanho de primos existentes.
*/
#include<stdio.h>
#include<stdlib.h>

int primo (int n){
    int i , j, resultado=0;
    for(j=0;j<=n;j++){
        resultado=0;
        for (i = 2; i <= n / 2; i++){
            if (n % i == 0){
                resultado++;
                break;
            }
        }
        if (n==1 || n==0){
            resultado=1;}

        if (resultado == 0){
            resultado=1;
        }else{
            resultado=0;}
        
    }
return resultado;}

int primos(int n){
    int *v,i,p=0,t=0;
    v=malloc(sizeof(int));

    for(i=0;i<=n;i++){
        p=primo(i);
        if(p==1){
            v[t]=i;
            t++;
            v=realloc(v,(t+1)*sizeof(int));
        }
    }

    for(i=0;i<t;i++){
        printf("%d ",v[i]);
    }
return 0;}

int main (){
    int n;

    printf("Digite um numero: \n");
    scanf("%d",&n);
    printf("Numeros primos de 0 ate %d: \n",n);
    primos(n);


return 0;}