#include <stdio.h>
#include <stdlib.h>
int main(){
	FILE *arq;
	char str[20];
	int t;
	arq = fopen("file.lab", "rb");
	if(arq == NULL){
		printf("Erro\n");
	}
	fread(&t, sizeof(int),  1, arq);
	fread(str,sizeof(char), t, arq);
	str[t] = '\0';
	printf("%s\n",str);
	fclose(arq);
	return 0;
}
