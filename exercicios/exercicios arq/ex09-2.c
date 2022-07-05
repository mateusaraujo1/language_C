//versão melhorada
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(NULL));
    int num, ler;
    FILE *f = fopen("arq09.bin", "rb+");

    if (f == NULL)
    {
        FILE *f = fopen("arq09.bin", "wb");
        num = rand() % 100 + 1;
        fwrite(&num, sizeof(int), 1, f);
    }
    else 
    {
        fread(&num, sizeof(int), 1, f);
        num++;
        printf("%d", num);
        rewind(f);
        fwrite(&num, sizeof(int), 1, f);
    }

    fclose(f);
    
	return 0;
}