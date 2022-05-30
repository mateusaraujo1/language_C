/*
Questão 2.
Elabore um programa que leia do usuário o tamanho de um vetor. Em seguida, aloque dinamicamente
um vetor de números reais e preencha o vetor com números aleatórios de 0 a 1 inclusive, depois o
imprima.
*/
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main() {
    int n, i;
    float *v = NULL;

    printf("n = ");
    scanf("%d", &n);

    v = malloc(sizeof(float) * n);
    srand(time(NULL));

    for (i=0; i<n; i++)
        v[i] = (rand()%101) / 100.0;
    
    for (i=0; i<n; i++)
        printf("%.2f ", v[i]);
    printf("\n");
    return 0;
}
