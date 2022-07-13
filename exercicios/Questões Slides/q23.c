/*Crie uma estrutura para representar as coordenadas de um ponto no plano (posições x
e y). Em seguida, declare e leia do teclado um ponto e exiba a distância d dele até a
origem das coordenadas, isto é, a posição (0,0). */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct point
{
    int x;
    int y;
};

void distance(int x, int y) {
    float D;

    D = sqrt(pow(x, 2) + pow(y, 2));

    printf("A distância do ponto (%d, %d) ao ponto (0, 0) é %.1f", x, y, D);
}

int main()
{
	struct point p;
    
    printf("Ponto X: ");
    scanf("%d", &p.x);
    printf("\nPonto Y: ");
    scanf("%d", &p.y);

    distance(p.x, p.y);
	return 0;
}

