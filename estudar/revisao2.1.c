#include <stdio.h>

int primo(int p) {
    int cont = 0;
    if(p < 2)
        return 0;

    for(int i = 1; i < p; i++)
        if((p % i) == 0)
            cont++;

    if(cont == 1)
        return 1;
    else
        return 0;
}

int main()
{
    int P;
    printf("Escreva um número: ");
    scanf("\n%d", &P);

    printf("\n%d", primo(P));
    return 0;
}
