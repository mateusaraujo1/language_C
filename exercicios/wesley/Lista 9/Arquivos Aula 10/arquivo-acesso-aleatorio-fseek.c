#include <stdio.h>
#include <stdlib.h>

struct cadastro{
	char nome[20];
	char rua[20];
	int  idade;
};

int main(){
    FILE *f;
	struct cadastro c, cad[4] = {{"Ricardo","Rua 1",31},
								 {"Carlos" ,"Rua 2",28},
								 {"Ana"    ,"Rua 3",45},
								 {"Bianca" ,"Rua 4",32}};

	f = fopen("file.cad","wb");
	if(f == NULL){
		printf("Erro na abertura\n");
		return 1;
	}
	fwrite(cad, sizeof(struct cadastro), 4, f);
	fclose(f);

	f = fopen("file.cad","rb");
	if(f == NULL){
		printf("Erro na abertura\n");
		return 1;
	}
	fseek(f, sizeof(struct cadastro), SEEK_CUR);
	fread(&c,  sizeof(struct cadastro), 1, f);
	printf("%s\n%s\n%d\n", c.nome, c.rua, c.idade);
	fclose(f);

	return 0;
}
