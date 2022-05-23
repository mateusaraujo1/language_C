#include <stdio.h>

int main()
{
    float km, ms;

    printf("Digite a velocidade em km/h:");
    scanf("%f", &km);

    printf("A conversão para ms é %.1f", km/3.6);
    return 0;
}
