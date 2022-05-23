#include <stdio.h>
#include <stdlib.h>

void print(int V[], int tam) {
for (int i = 0; i <= tam-1; i++)
    printf("%d ", V[i]);
printf("\n");
}

void troca(int a, int b, int V[]) {
    int aux = V[b];
    V[b] = V[a];
    V[a] = aux;
}

void ordemDecrescente(int V[], int tam) {
    for(int x = 0; x < tam-1; x++)
        for(int y = 0; y < tam-x-1; y++)
            if(V[y] < V[y+1]) {
            int aux = V[y];
            V[y] = V[y+1];
            V[y+1] = aux;
}
}

int main() {
    int V[] = {45, 13, 81, 22, 15, 9, 77}, tam = 7, pos1 = 2, pos2 = 4;
  
    print(V, tam);
    troca(pos1, pos2, V);
    print(V, tam);
    ordemDecrescente(V, tam);
    print(V, tam);
    
    return 0;
}