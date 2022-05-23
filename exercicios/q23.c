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

    printf("A distância do ponto (%d, %d) ao ponto (0, 0) é %.2f", x, y, D);
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

