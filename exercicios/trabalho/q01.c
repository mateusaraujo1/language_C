#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define tam 6

void preencherM(int M[tam][tam]) {
    srand(time(NULL));
    int x;
    for(int L = 0; L < tam; L++)
        for(int C = 0; C < tam; C++) {
            x = rand() % 100;
            M[L][C] = x;
        }
}
        
void mostrarM(int M[tam][tam]) {
    for(int L = 0; L < tam; L++) {
        for(int C = 0; C < tam; C++) 
            printf("%4d", M[L][C]);
        printf("\n");
        }
}

void somaDiagonais(int M[tam][tam], int *somaDP, int *somaDS) {
    
    //soma diagonal principal
    int C = 0;
    for(int L = 0; L < tam; L++) {
            *somaDP += M[L][C];
            C++;
        }
    
    //soma diagonal secundária
    C = 5;
    for(int L = 0; L < tam; L++) {
            *somaDS += M[L][C];
            C--;
        }
}

int main(){
    
    int M[tam][tam], somaDP = 0, somaDS = 0;
    
    preencherM(M);
    mostrarM(M);
    somaDiagonais(M, &somaDP, &somaDS);
    
    printf("Soma da diagonal principal: %d\nSoma da diagonal secundária: %d", somaDP, somaDS);
    
return 0;
}