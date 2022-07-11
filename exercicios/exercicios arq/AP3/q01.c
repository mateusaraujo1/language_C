#include <stdio.h>
#include <stdlib.h>
#define size_name 30
#define size_number 20

typedef struct {
    char name[size_name];
    char number[size_number];
} contato;

int menu() {
    int option;
    printf("  AGENDA TELEFÔNICA  \n");
    printf("(1) Salvar contato.\n");
    printf("(2) Listar contatos.\n");
    printf("Selecione uma das opções acima: ");
    scanf("%d", &option);
    scanf("%*C");
    return option;
}

void salvarContato(FILE *f) {
    contato c;
    
    printf("Nome: ");
    scanf("%[^\n]", c.name);
    printf("Telefone: ");
    scanf("%s", c.number);

    fprintf(f, "%s %s\n", c.name, c.number);
}

void listarContatos(FILE *f) {
    contato c;

    while (!feof(f))
    {
        if(fscanf(f, "%s%s", c.name, c.number) == 2) {
            printf("Nome: %s\n", c.name);
            printf("Número: %s\n", c.number);
        }
    }
}

int main()
{
    FILE *f = fopen("agenda.txt", "a+");
    int option;

    option = menu();
    switch (option) {
    case 1:
        salvarContato(f);
        break;
    case 2:
        listarContatos(f);
        break;
    default:
        printf("Digite um número válido.\n");
        break;
    }

    fclose(f);
	return 0;
}