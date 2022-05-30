#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 5

int minmax(int vetor[TAM], int *min, int *max){
    int i;
    *min=vetor[0];
    *max=vetor[0];
    for(i=0;i<TAM;i++){

        if(vetor[i] <= *min){
            *min=vetor[i];
        }
        if(vetor[i] >= *max){
            *max=vetor[i];
        }
    }
return 0;}

int main(){
    srand(time(NULL));
    int i,vetor[TAM],min,max;
    
    for(i=0;i<TAM;i++){
        vetor[i]=1+rand()%100;
    }
    for(i=0;i<TAM;i++){
        printf("%d ",vetor[i]);
    }
    printf("\n");

    minmax(vetor, &min, &max);

    printf("\n valor minimo do vetor: %d",min);
    printf("\n valor maximo do vetor: %d",max);
    
return 0;}