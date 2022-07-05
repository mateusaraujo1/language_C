#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *arq = fopen("file.lab", "wb");
    int totalGravado, v[5] = {5, 42, 984, 5555, 90909};
    fwrite(v, sizeof(int), 5, arq);
    fclose(arq);
	return 0;
}