#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{   
    int num;
    srand(time(NULL));
    FILE *f = fopen("numeros.txt", "a");

    if(f) {
        for(int i = 0; i < 10; i++) {
            num = rand() % 100;
            fprintf(f, "%d ", num);
        }
        fprintf(f, "\n");
    }
    fclose(f);
	return 0;
}