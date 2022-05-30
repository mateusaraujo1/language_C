#include <stdio.h>
#include <stdlib.h>

int main(){
	int status;

	status = remove("file.txt");
	if(status != 0){
		perror("Erro na remocao do arquivo");
		return 1;
	}
	else
		printf("Arquivo removido com sucesso.\n");

	return 0;
}
