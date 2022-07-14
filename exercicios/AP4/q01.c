#include <stdio.h>
#include <stdlib.h>
#define tam 20

typedef struct {
    char nome[20];
    int ano;
} filmes;

int comp(const void *a, const void *b) {

}
void ordenaFilmes(filmes filme[tam]) {
    qsort(filme, tam, sizeof(filmes), comp);
}

int main()
{
    FILE *f = fopen("filmes.txt", "r");
    filmes filme[tam];

    int i = 0;
    while (!feof(f) && i < tam)
    {
        fscanf(f, "%s%d", filme[i].nome, &filme[i].ano);
        printf("%s %d\n", filme[i].nome, filme[i].ano);
        i++;
    }

    ordenaFilmes(filme);

	fclose(f);

	return 0;
}