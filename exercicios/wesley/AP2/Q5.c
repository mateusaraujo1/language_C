/*
Questão 5
    Implemente a função 𝗶𝗺𝗽𝗿𝗶𝗺𝗶𝗿_𝘃𝗲𝘁𝗼𝗿 para imprimir as strings do vetor 𝘃𝗲𝘁_𝘀𝘁𝗿[ ] do código abaixo.
    Implemente a função comparador para que as strings sejam ordenadas de forma decrescente segundo a ordem alfabética.   
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 5

void imprimir_vetor(char *v[],int n);
int comparador(const void *a,const void *b);

int main(){
    char *vet_str[TAM] = {"abacaxi","cenoura","banana","beterraba","goiaba"};
    
    imprimir_vetor(vet_str,TAM);
    qsort(vet_str,TAM,sizeof(char*),comparador);
    imprimir_vetor(vet_str,TAM);

return 0;}

void imprimir_vetor(char *v[],int n){
    int i;
    for(i=0;i<n;i++){
        printf("%s ",v[i]);
    }
    printf("\n");
}

int comparador(const void *a,const void *b){
    return (strcmp(*(int*)b,*(int*)a));}