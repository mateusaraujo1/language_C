#include <stdio.h>
#include <stdlib.h>

void numPar(int num) {
    FILE *p = fopen("pares.txt", "a");
    if(p)
        fprintf(p, "%d ", num);
    fclose(p);
}

void numImpar(int num) {
    FILE *i = fopen("impares.txt", "a");
    if(i)
        fprintf(i, "%d ", num);
    fclose(i);
}

void numPrimos(int num) {
    FILE *P = fopen("primos.txt", "a");
    if(P)
        fprintf(P, "%d ", num);
    fclose(P);
}

int main()
{   
    int num;
    FILE *f = fopen("exercicio05.txt", "r");

    if(f) {
        while(!feof(f)) {
            fscanf(f, "%d", &num);
            if((num % 2) == 0) 
                numPar(num);
            else
                numImpar(num);

            int cont = 0;
            for(int div = 1; div < num; div++)
                if((num % div) == 0)
                    cont++;
            if(cont == 1)
                numPrimos(num);
        }
    }
    
	return 0;
}