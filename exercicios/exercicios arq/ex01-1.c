#include <stdio.h>
#include <stdlib.h>

int main()
{   
    char nome[15];
    FILE *f = fopen("names.txt", "r");

    if (f != NULL)
    {   
        while(!feof(f)) {
            fscanf(f, "%s", nome);
            printf("%s\n", nome);
        }
    }
    fclose(f);
    
	return 0;
}