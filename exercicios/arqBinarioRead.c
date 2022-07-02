#include <stdio.h>
#include <stdlib.h>
int main() {
FILE *arq;
int totalLido, v[5];
arq = fopen("file.lab", "rb");
if (arq == NULL) {
printf("Problemas na ABERTURA do arquivo\n");
}
else {
totalLido = fread (v, sizeof(int), 5, arq);
if (totalLido != 5) {
printf("Erro na leitura do arquivo !");
}
else
{
    for(int i = 0; i < 5; i++)
        printf("v[%d] = %d\n", i, v[i]);
}

fclose(arq);
}
return 0;
}