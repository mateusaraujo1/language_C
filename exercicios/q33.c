#include <stdio.h>

int main()
{
    int v[] = {22, 41, 23, 56, 7, 91, 6}, tam = 7;

    FILE *f = fopen("vetor.txt", "w");
    for (int i = 0; i < tam; i++)
        fprintf(f, "%d\n", v[i]);

    fclose(f);
    
    return 0;
}
