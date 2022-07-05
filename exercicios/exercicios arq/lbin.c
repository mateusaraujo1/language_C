#include <stdio.h>
#include <stdlib.h>
#define tam 1

int main()
{
	FILE *arq = fopen("arq09.bin", "rb");
    int v[tam];
    fread(v, sizeof(int), tam, arq);

    for (int i = 0; i < tam; i++)
        printf("%d\n", v[i]);
    
    fclose(arq);
	return 0;
}