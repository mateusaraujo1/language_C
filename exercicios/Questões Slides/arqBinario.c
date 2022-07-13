#include <stdio.h>
#include <stdlib.h>
int main() {
FILE *arq;
int totalGravado, v[5] = {1,2,3,4,5};
arq = fopen("file.lab", "wb");
if (arq == NULL) {
printf("Problemas na CRIACAO do arquivo\n");
}
else {
/* grava todo o array no arquivo (5 posições) */
totalGravado = fwrite (v, sizeof(int), 5, arq);
if (totalGravado != 5) {
printf("Erro na escrita do arquivo !");
}
fclose(arq);
}
return 0;
}