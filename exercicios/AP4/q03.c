#include <stdio.h>
#include <stdlib.h>
#define tam 100

int main()
{
	FILE *f = fopen("primos1a100.bin", "rb");
    int num, posicao;
    int vetor[5];

    printf("Digite a posição do número primo: ");
    scanf("%d", &posicao);

    fseek(f, sizeof(int)*(posicao-1), SEEK_SET);
    fread(&num, sizeof(int), 1, f);
    printf("%d\n", num);
    vetor[0] = num;

    for (int i = 1; i < 5; i++)
    {
        fread(&num, sizeof(int), 1, f);
        vetor[i] = num;
    }

    //mostrar o vetor

    for (int i = 0; i < 5; i++)
        printf("v[%d] = %d\n", i, vetor[i]);

    rewind(f);
    //fseek(f, 0, SEEK_SET);
    int v[tam];

    int i = 0;
    while (!feof(f) && i < tam)
    {
        fread(&num, sizeof(int), 1, f);
        v[i] = num;
        i++;
    }

    fclose(f);

    FILE *b = fopen("primos100a1.bin", "wb+");

    for (int j = (tam-1); j >= 0; j--)
        fwrite(&v[j], sizeof(int), 1, b);
    
    rewind(f);
    
    while (!feof(f) && fread(&num, sizeof(int), 1, b) == 1) {
        printf("%d\n", num);
    }

    fclose(b);
    
	return 0;
}