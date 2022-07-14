#include <stdio.h>
#include <stdlib.h>
#define tam 100

int main()
{
	FILE *f = fopen("primos1a100.bin", "rb");
    int num, posicao, cont = 0;

    printf("Digite a posição do número primo: ");
    scanf("%d", &posicao);

    while (!feof(f))
    {
        fread(&num, sizeof(int), 1, f);
        cont++;
        if (cont == posicao)
        {
            printf("%d", num);
            break;
        }
        
    }

    fclose(f);
    
	return 0;
}