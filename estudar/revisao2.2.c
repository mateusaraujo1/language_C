#include <stdio.h>

int primo(int vetor, int t) {

    int vetorOrdem[t];

    for(int i = 0; i < t; i++) {
        int prim = vetor[i];
        int cont = 0;
        if(prim < 2)
            return 0;

        for(int i = 1; i < prim; i++)
            if((prim % i) == 0)
                cont++;

        if(cont == 1)
            return 1;
        else
            return 0;
}
}

int main()
{
    int P[] = {6, 7, 2, 9, 11, 15}, tam = 6;

    primo(P, tam);
    return 0;
}
