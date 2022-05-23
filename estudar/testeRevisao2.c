#include <stdlib.h>
#include <stdio.h>

void troca(int v[], int a, int b, int tam) {
    int aux = 0;
    if (a >= 0 && b >= 0 && tam > 1) {
        aux = v[a];
        v[a] = v[b];
        v[b] = aux;
    }
}

int primo(int n) {
    int i,d=0;
    
    if (n < 2)
        return 0;

    for (i=1; i<n; i++)
        if ((n % i) == 0)
            d++;
    
    if (d == 1)
        return 1;
    else
        return 0;
}

void primosPrimeiro(int v[], int tam) {
    int i, pivo=0, aux;

    for (i=0; i<tam; i++)
        if (primo(v[i])) {
            troca(v, i, pivo, tam);
            pivo++;
        }
}


int main() {
    int v[6] = {4,1,7,9,2,6}, i;

    for (i=0; i<6; i++)
        printf("%d ", v[i]);
    printf("\n");
    
    for (i=0; i<6; i++)
        printf("%d %s\n", v[i], primo(v[i]) ? "Primo": "Não primo");

    primosPrimeiro(v, 6);

    for (i=0; i<6; i++)
        printf("%d ", v[i]);
    printf("\n");

    return 0;
}