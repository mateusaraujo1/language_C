/*
Questão 6.
Escreva uma função que receba como parâmetro: dois vetores de inteiros, A e B, inteiros N1 e N2
representando seus tamanhos.
A função deve retornar o ponteiro para um vetor C de tamanho N1 + N2 alocado dinamicamente
e preenchido com os elementos de A e B desta sequência.
Na função main demonstre o resultado da utilização da função.
*/
#include <stdlib.h>
#include <stdio.h>

int *concat(int *a, int *b, int ta, int tb) {
    int *c, i, j;

    c = malloc(sizeof(int) * (ta+tb));
    
    for (i=0; i<ta; i++)
        c[i] = a[i];
    
    for (j=0; j<tb; j++, i++)
        c[i] = b[j];

    return c;
}

int main() {
    int A[8] = {9,8,7,7,6,4,3,12};
    int B[6] = {3,6,1,87,23,80};
    int *C = NULL, i;

    C = concat(A, B, 8, 6);

    for (i=0; i<(8+6); i++)
        printf("%d ", C[i]);
    printf("\n");

    free(C);

    return 0;
}


