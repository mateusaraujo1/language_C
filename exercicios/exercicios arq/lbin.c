//esse arquivo é apenas para ler os arquivos binarios 
#include <stdio.h>
#include <stdlib.h>
#define tam 21

int main()
{
	FILE *arq = fopen("numeros.bin", "rb");
    int v[tam];
    fread(v, sizeof(int), tam, arq);

    for (int i = 0; i < tam; i++)
        printf("%d\n", v[i]);
    
    fclose(arq);
	return 0;
}