#include <stdio.h>

int main() {
    int linhas, cont1, cont2, numeros = 1;

    printf("Escreva o numero de linhas do triangulo de Floyd: ");
    scanf("%d", &linhas);

    for (cont1 = 1; cont1 <= linhas; cont1++) {

        for (cont2 = 1; cont2 <= cont1; cont2++) {
            printf(" %d", numeros);
            numeros += 1;
        }
        printf("\n");
    }

    return 0;
}
