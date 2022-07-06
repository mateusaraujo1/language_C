#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE_NOME 30
#define SIZE_TEL 20

typedef struct {
	char nome[SIZE_NOME];
	char telefone[SIZE_TEL];
} Contato;

int comp(const void *a, const void *b) {
	Contato *c1 = (Contato*)a;
	Contato *c2 = (Contato*)b;
	return strcmp(c1->nome, c2->nome);
}

void Contato_criar(FILE *f, Contato c);
void Contato_listar(FILE *f);
void Contato_atualizar(FILE *f, int id, Contato c);
void Contato_remover(FILE *f, int id);

int main(int argc, char *argv[]) {
	FILE *f = fopen("contatos.txt", "a+");
	Contato c;
	int id;
	if (argc > 1) {
		if (strcmp(argv[1], "-c") == 0) {
			strcpy(c.nome, argv[2]);
			strcpy(c.telefone, argv[3]);
			Contato_criar(f, c);
		}
		if (strcmp(argv[1], "-l") == 0) {
			Contato_listar(f);
		}
		if (strcmp(argv[1], "-a") == 0) {
			id = atoi(argv[2]);
			strcpy(c.nome, argv[3]);
			strcpy(c.telefone, argv[4]);
			Contato_atualizar(f, id, c);
		}
		if (strcmp(argv[1], "-r") == 0) {
			id = atoi(argv[2]);
			Contato_remover(f, id);
		}
	}
	
	return 0;
}

void Contato_criar(FILE *f, Contato c) {
	Contato contatos[1000];
	int tamanho = 0, i = 0;
	
	while (!feof(f)) {
		if (fscanf(f, "%s%s", contatos[i].nome, contatos[i].telefone) == 2)
			i++;
	}
	tamanho = i;
	
	strcpy(contatos[tamanho].nome, c.nome);
	strcpy(contatos[tamanho].telefone, c.telefone);
	
	tamanho++;
	qsort(contatos, tamanho, sizeof(Contato), comp);
	
	fclose(f);
	f = fopen("contatos.txt", "w");
	for (i=0; i<tamanho; i++)
		fprintf(f, "%s %s\n", contatos[i].nome, contatos[i].telefone);
	
	printf("Contato criado\n");
}

void Contato_listar(FILE *f) {
	Contato c;
	int id = 1;
	while (!feof(f)) {
		if (fscanf(f, "%s%s", c.nome, c.telefone) == 2)
			printf("%d: %s %s\n", id++,  c.nome, c.telefone);
	}
}

void Contato_atualizar(FILE *f, int id, Contato c) {
	Contato contatos[1000];
	int tamanho = 0, i = 0;
	
	while (!feof(f)) {
		if (fscanf(f, "%s%s", contatos[i].nome, contatos[i].telefone) == 2)
			i++;
	}
	tamanho = i;
	
	strcpy(contatos[id-1].nome, c.nome);
	strcpy(contatos[id-1].telefone, c.telefone);
	
	fclose(f);
	f = fopen("contatos.txt", "w");
	for (i=0; i<tamanho; i++)
		fprintf(f, "%s %s\n", contatos[i].nome, contatos[i].telefone);
}

void Contato_remover(FILE *f, int id) {
	Contato contatos[1000];
	int tamanho = 0, i = 0;
	
	while (!feof(f)) {
		if (fscanf(f, "%s%s", contatos[i].nome, contatos[i].telefone) == 2)
			i++;
	}
	tamanho = i;
	
	fclose(f);
	f = fopen("contatos.txt", "w");
	
	for (i=0; i<tamanho; i++)
		if (i != (id-1))
			fprintf(f, "%s %s\n", contatos[i].nome, contatos[i].telefone);
}