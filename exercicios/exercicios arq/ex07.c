#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{   
    int num, aleatorios[10];
    srand(time(NULL));
    FILE *f = fopen("numeros.bin", "ab");

    if(f) {
        for(int i = 0; i < 10; i++) {
            num = rand() % 100;
            aleatorios[i] = num;
        }
        fwrite(aleatorios, sizeof(int), 10, f);
    }
    fclose(f);
	return 0;
}