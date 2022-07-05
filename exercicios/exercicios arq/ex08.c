#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define tam 100

int main()
{
    int v[tam], aux;
    srand(time(NULL));
    FILE *f = fopen("arq08.bin", "wb");

    for (int i = 0; i < tam; i++) {
        aux = rand() % 101;
        v[i] = aux;
    }
    
    fwrite(v, sizeof(int), tam, f);
    fclose(f);

	return 0;
}