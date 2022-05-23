#include <stdio.h>

int main()
{
    int inteiro, inverso, centena, dezena, unidade;

    printf("Digite o inteiro de 3 dígitos:\n");
    scanf("%d", &inteiro);

    centena = inteiro / 100;
    dezena = (inteiro % 100) / 10;
    unidade = inteiro % 10;
    inverso = (unidade*100) + (dezena*10) + centena;

    printf("%d%d%d\n", centena, dezena, unidade);

    printf("%d", inverso);
}
