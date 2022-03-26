#include <stdio.h>

int main() {
    int N, cont, fatorial = 1;
    float E = 1;

    printf("Digite um valor: ");
    scanf("%d", &N);

    for (cont = 1; cont <= N; cont++) {

        fatorial = fatorial * cont;
        E += 1.0 / fatorial;

    }

    printf("%.2f", E);

    return 0;
}