#include <stdio.h>
#include <stdlib.h>

void print(char V[], int tam) {
for (int i = 0; i <= tam-1; i++)
    printf("%c ", V[i]);
printf("\n");
}

void troca(int a, int b, char V[]) {
    int aux = V[b];
    V[b] = V[a];
    V[a] = aux;
}

void ordemDecrescente(char V[], int tam) {
    for(int x = 0; x < tam-1; x++)
        for(int y = 0; y < tam-x-1; y++)
            if(V[y] < V[y+1]) {
            int aux = V[y];
            V[y] = V[y+1];
            V[y+1] = aux;
}
}

int main() {
    int tam = 4, pos1 = 1, pos2 = 3;
    char V[] = {'g', 'a', 't', 'o'};
  
    print(V, tam);
    troca(pos1, pos2, V);
    print(V, tam);
    ordemDecrescente(V, tam);
    print(V, tam);
    
    return 0;
}