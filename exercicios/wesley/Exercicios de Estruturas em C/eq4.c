/*
Questão 4.
Faça uma função que receba dois números inteiros a e b, a função deve retornar um ponteiro para um
vetor de tamanho b − a de elementos inteiros alocado dinamicamente. O vetor deve ser preenchido
com os valores de a até b − 1. A função deve retornar NULL para o caso b <= a.
*/
#include <stdlib.h>
#include <stdio.h>

int *seq(int a, int b) {
    int *v, i, n;

    if (b <= a)
        return NULL;
    
    v = malloc(sizeof(int) * (b-a));
    for (i=0, n=a;   i < (b-a);   i++, n++)
        v[i] = n;
    
    return v;
}

int main() {
    int *sequencia = seq(5, 15), i;

    for (i=0; i<10; i++)
        printf("%d ", sequencia[i]);
    printf("\n");
    
    return 0;
}






