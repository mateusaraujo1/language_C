#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define T 20
int main(){
	FILE *arq;
	char str[T] = "Hello World!";
	int t = T;
	arq = fopen("file.lab","wb");
	if(arq == NULL){
		printf("Erro\n");
		return 1;
	}
	fwrite(&t,  sizeof(int),  1, arq);
	fwrite(str, sizeof(char), t, arq);
	fclose(arq);
	return 0;
}
