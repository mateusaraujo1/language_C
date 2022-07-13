#include <stdio.h>
#include <stdlib.h>

int main()
{   
    //criar uma opção pra perguntar se encripta ou desencripta
    char arquivo[20];
    printf("Digite o nome do arquivo: ");
    scanf("%s", arquivo);
    FILE *d = fopen(arquivo, "r");
	FILE *c = fopen("texto.txt", "w");

    char caractere;
    char vetorD[] = {'a', 'b', 'c', 'd'}; //letras originais
    char vetorC[] = {'&', '#', '2', 'K'}; //letras substitudas
    //o contrário também acontece

    while (!feof(d))
    {
        fscanf(d, "%c", &caractere);

        for (int i = 0; i < 4; i++) {
            if (caractere == vetorD[i])
                caractere = vetorC[i];
            else if (caractere == vetorC[i])
                caractere = vetorD[i];
        }

        fprintf(c, "%c", caractere);
    }
    
    fclose(d);
    fclose(c);
    
	return 0;
}