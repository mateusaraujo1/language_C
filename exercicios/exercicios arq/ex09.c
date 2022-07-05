#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(NULL));
    int num[1];
    FILE *f = fopen("arq09.bin", "rb");

    if (f == NULL)
    {
        num[0] = rand() % 100 + 1;
        FILE *f = fopen("arq09.bin", "wb");
        fwrite(num, sizeof(int), 1, f);
    }
    else
    {
        fread(&num, sizeof(int), 1, f);
        num[0]++;
        fclose(f); //ainda vou tentar fazer isso de uma forma mais eficiente
        FILE *f = fopen("arq09.bin", "wb");
        printf("%d", num[0]);
        //fseek(f, sizeof(int), SEEK_CUR);
        fwrite(num, sizeof(int), 1, f);
    }

    fclose(f);
    
	return 0;
}