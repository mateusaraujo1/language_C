#include <stdio.h>
#include <stdlib.h>

int main()
{   
    char frase[20];
    FILE *f = fopen("exercicio02.txt", "a");

    if (f)
      fprintf(f, "Palmeiras nao tem mundial\n", frase);
    
    fclose(f);

	return 0;
}