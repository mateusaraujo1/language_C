#include <stdio.h>
#include <math.h>

int main()
{
    int c = 1000, t = 10;
    float m, i = 0.05;

    for (int cont = 1; cont <= t; cont++)
    {
        m = c * pow((1+i), cont);

        printf("%d ano = %.2f\n", cont, m);
    }
    
    return 0;
}
