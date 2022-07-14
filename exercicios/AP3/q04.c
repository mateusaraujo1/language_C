#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *f = fopen("dezenas.dat", "rb");
    int jogadas, num, j;

    fread(&jogadas, sizeof(int), 1, f);

    for (int i = 1; i <= jogadas; i++) {
        printf("%d:  ", i);
        j = 0;
        while (!feof(f) && j < 6)
        {
            fread(&num, sizeof(int), 1, f);
            printf("%d ", num);
            j++;
        }
        printf("\n");
    }

    //selecionar um jogo específico

    int jogada, posicao;
    rewind(f);

    printf("\n\nSelecione um jogo: ");
    scanf("%d", &jogada);

    posicao = (jogada-1)*6 + 1;
    fseek(f, sizeof(int)*posicao, SEEK_SET);

    j = 0;
    printf("\n%d:  ", jogada);
    while (!feof(f) && j < 6)
        {
            fread(&num, sizeof(int), 1, f);
            printf("%d ", num);
            j++;
        }

    fclose(f);
    
	return 0;
}