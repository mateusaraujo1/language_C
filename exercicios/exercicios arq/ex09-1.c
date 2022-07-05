#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(NULL));
    int num[1], ler;
    FILE *f = fopen("arq09.bin", "rb+");

    ler = fread(&num, sizeof(int), 1, f);

    if (ler != 1)
    {
        FILE *f = fopen("arq09.bin", "wb");
        num[0] = rand() % 100 + 1;
        fwrite(num, sizeof(int), 1, f);
    }
    else 
    {
        num[0]++;
        printf("%d", num[0]);
        rewind(f);
        fwrite(num, sizeof(int), 1, f);
    }

    fclose(f);
    
	return 0;
}