/*
Questão 3.
Elabore um programa que leia do usuário o número de linhas e colunas de uma matriz. Em seguida,
aloque dinamicamente uma matriz de números reais e preencha o vetor com números aleatórios de 0
a 1 inclusive, depois a imprima.
*/
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main() {
    int n, m, i, j;
    float **v = NULL;
    
    printf("m = ");
    scanf("%d", &m);
    printf("n = ");
    scanf("%d", &n);

    v = malloc(sizeof(float*) * m);
    for (i=0; i<m; i++)
        v[i] = malloc(sizeof(float) * n);

    srand(time(NULL));

    for (i=0; i<m; i++)
        for (j=0; j<n; j++)
            v[i][j] = (rand()%101) / 100.0;
    
    for (i=0; i<m; i++) {
        for (j=0; j<n; j++)
            printf("%.2f ", v[i][j]);
        printf("\n");
    }
    return 0;
}
