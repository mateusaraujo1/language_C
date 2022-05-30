/*Questão 4
Implemente a função 𝗽𝗿𝗶𝗺𝗼𝘀𝗣𝗿𝗶𝗺𝗲𝗶𝗿𝗼() que recebe como parâmetros: 
um vetor de números inteiros e seu tamanho. 
A função deve verificar quais números no vetor são primos e colocá-los no início do vetor. 
Não importa a ordem final do vetor, apenas a restrição imposta pela questão.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define tam 6

int primo(int);
void primosPrimeiro(int [],int);

int main(){
    srand(time(NULL));
    int i,vetor[tam]={0};
    //inicializa vetor com numeros aleatorios
    for (i=0;i<tam;i++){
        vetor[i]=1 + (rand()%100);}
    printf("\n");
    //mostra esse vetor
    printf("vetor: \n");
    for (i=0;i<tam;i++){
        printf("%d ",vetor[i]);}
    printf("\n");

    primosPrimeiro(vetor,tam);

    //mostra o vetor resultante 
    printf("vetor resultante: \n");
    for (i=0;i<tam;i++){
        printf("%d ",vetor[i]);}
    printf("\n");

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

void primosPrimeiro(int v[],int z){
    int p[tam]={0},i, j, k ,r,aux;

    //vetor p com os primos do vetor v
    for (i=0;i<z;i++){
        r=primo(v[i]);
        if (r==1){
            p[i]=v[i];
        }
    }
    //mostra o vetor de primos
    printf("vetor de primos: \n");
    for (i=0;i<tam;i++){
        printf("%d ",p[i]);}
    printf("\n");

    //percorro o vetor de primos
    for(i=0;i<tam;i++){
        //percorro o vetor v
        for(j=0;j<tam;j++){
            //encontro o 1º valor nao primo e troco com o valor do vetor p correspondente
            r=primo(v[j]);
            if(r==0){
                aux=v[j];
                v[j]=v[i];
                v[i]=aux;
            }
        }
    }

}