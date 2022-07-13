#include <stdio.h>
#include <stdlib.h>

int main()
{   
	FILE *f = fopen("lembretes.txt", "a+");
    int numLinhas = 1;
    char frase[30], c;

    printf("Digite um lembrete: ");
    scanf("%[^\n]", frase);

    while (!feof(f))
    {
        if (fscanf(f, "%c", &c) == 1) 
        {
            if (c == '\n')
                numLinhas++;
        }
    }

            

    fprintf(f, "%d %s\n", numLinhas, frase);

    fclose(f);

	return 0;
}