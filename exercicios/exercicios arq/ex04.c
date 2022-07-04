#include <stdio.h>
#include <stdlib.h>

int main()
{   
    int cont = 0;
    char nome[15];
    FILE *f = fopen("exercicio04.txt", "r");

    if (f != NULL)
    {   
        while(!feof(f)) {
            fscanf(f, "%s", nome);
            cont++;
        }
    }
    fclose(f);

    printf("%d", cont);
    
	return 0;
}