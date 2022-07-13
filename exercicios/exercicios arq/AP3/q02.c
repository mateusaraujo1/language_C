#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *d = fopen("descript.txt", "r");
	FILE *c = fopen("cript.txt", "w");

    char caractere;
    char vetorD[] = {'a', 'b', 'c', 'd'}; //letras originais
    char vetorC[] = {'&', '#', '2', 'K'}; //letras substitudas

    while (!feof(d))
    {
        fscanf(d, "%c", &caractere);

        for (int i = 0; i < 4; i++)
            if (caractere == vetorD[i])
                caractere = vetorC[i];

        fprintf(c, "%c", caractere);
    }
    
    fclose(d);
    fclose(c);
    
	return 0;
}