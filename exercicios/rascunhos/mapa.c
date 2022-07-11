#include <stdio.h>
#include <stdlib.h>

int main()
{
	int dividendo, divisor, quociente, resto;

    printf("Digite o valor do dividendo: ");
    scanf("%d", &dividendo);

    printf("Digite o valor do divisor: ");
    scanf("%d", &divisor);

    quociente = dividendo / divisor;
    resto = dividendo % divisor;

    printf("Dividendo: %d\n", dividendo);
    printf("Divisor: %d\n", divisor);
    printf("Quociente: %d\n", quociente);
    printf("Resto: %d\n", resto);

	return 0;
}