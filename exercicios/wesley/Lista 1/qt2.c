#include <stdio.h>

int main() {

    float reais, dolar, cotacao;

    scanf("%f", &reais);
    scanf("%f", &cotacao);

    dolar = reais/cotacao;

    printf("%.2f\n", dolar);

    return 0;
}
