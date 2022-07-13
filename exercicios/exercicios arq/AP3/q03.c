#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define tam 6

int main()
{
	int vetor[tam];
    srand(time(NULL));

    for (int i = 0; i < tam; i++)
        vetor[i] = rand() % 60 + 1;

    for (int i = 0; i < tam; i++)
        for (int j = i; j < tam-1; j++)
            while (vetor[i] == vetor[j+1])
                vetor[i] = rand() % 60 + 1;

    int jogadas, totalLido;
    FILE *f = fopen("dezenas.dat", "ab+");

        totalLido = fread(&jogadas, sizeof(int), 1, f);

    if (totalLido != 1) {
        jogadas = 1;
        fwrite(&jogadas, sizeof(int), 1, f);
        fwrite(vetor, sizeof(int), tam, f);
    }
    else {
        fclose(f);
        FILE *f = fopen("dezenas.dat", "rb+");
        jogadas++;
        fwrite(&jogadas, sizeof(int), 1, f);
        fseek(f, 0, SEEK_END);
        fwrite(vetor, sizeof(int), tam, f);
    }

    rewind(f);

    int i;
    while (!feof(f))
        if (fread(&i, sizeof(int), 1, f) == 1)
            printf("%d ", i);
    
    fclose(f);
        
	return 0;
}