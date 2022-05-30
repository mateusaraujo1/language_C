/*
Questão 6
    (𝟮.𝟬𝗣) Crie uma função 𝗺𝗮𝗽 com a assinatura abaixo onde, 
    𝘃[] é um vetor de números reais, 
    𝗹 é o tamanho do vetor, 
    𝗸 é um valor real e 
    𝗳𝘂𝗻 um ponteiro para função. 
    
    A função 𝗺𝗮𝗽 deve alocar dinamicamente um vetor de mesmo tipo e tamanho de 𝘃[]. 
    Cada posição do novo vetor 𝗻𝗲𝘄_𝘃[] será preenchida com o resultado da função 𝗳𝘂𝗻 
    aplicada à respectiva posição de 𝘃[] e ao valor 𝗸: 𝚗𝚎𝚠_𝚟[𝚒] = 𝚏𝚞𝚗(𝚟[𝚒], 𝚔). 
    Após percorrer todo o vetor, 𝗺𝗮𝗽 retorna um ponteiro para o novo vetor 𝗻𝗲𝘄_𝘃[].

    (𝟬.𝟭𝗣) Na função 𝗺𝗮𝗶𝗻 peça ao usuário um número inteiro 𝗡. 
    Aloque dinamicamente um vetor 𝘃[] float de tamanho 𝗡. 
    Peça ao usuário que preencha 𝘃[], 
    aplique ao vetor a função 𝗺𝗮𝗽 para criar um novo vetor 𝗻𝗲𝘄_𝘃[] e imprima o novo vetor.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

float *map(float v[], int l, float k, float (*fun)(float,float)){
    float *new_v;
    int i;
    new_v = malloc(l*sizeof(float));

    for(i=0;i<l;i++){
        new_v[i]=(fun(v[i],k));
    }
return new_v;}

float fun(float a, float b){

return (a/b);}

void imprime_vetor(float v[],int l){
    int i;
    for(i=0; i<l; i++){
        printf("%.2f ",v[i]);
    }
}

int main (){
    srand(time(NULL));
    int n,i;
    float *v;

    printf("Qual sera o tamanho do vetor?\n");
    scanf("%d",&n);
    v = malloc(n*sizeof(float));
    printf("Digite os valores para o vetor:\n");
    for(i=0; i<n; i++){
        //v[i]=1 + rand()%10;
        scanf("%f",&v[i]);
    }

    v=map(v,n,2,fun);

    imprime_vetor(v,n);

return 0;}