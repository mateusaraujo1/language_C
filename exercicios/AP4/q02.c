#include <stdio.h>
#include <stdlib.h>
#define tam 50

typedef struct
{
    int matricula;
    float nota1;
    float nota2;
    float nota3;
} Aluno;

void carregarAluno(int index, Aluno *alu) {
    FILE *f = fopen("notas50alunos.bin", "rb");
    int posicao;
    int matricula;
    float nota;
    posicao = (index-1)*4;
    fseek(f, sizeof(int)*posicao, SEEK_SET);
    
    fread(&alu[0].matricula, sizeof(int), 1, f);
    fread(&alu[0].nota1, sizeof(float), 1, f);
    fread(&alu[0].nota2, sizeof(float), 1, f);
    fread(&alu[0].nota3, sizeof(float), 1, f);

    fclose(f);
    
}

int main()
{
	FILE *f = fopen("notas50alunos.txt", "r");
    Aluno a[tam];

    int i = 0;
    while (!feof(f) && i < tam)
    {
        fscanf(f, "%d%f%f%f", &a[i].matricula, &a[i].nota1, &a[i].nota2, &a[i].nota3);
        //printf("%d %.1f %.1f %.1f\n", a[i].matricula, a[i].nota1, a[i].nota2, a[i].nota3); //opcional
        i++;
    }

    fclose(f);

    FILE *b = fopen("notas50alunos.bin", "wb");

    for (i = 0; i < tam; i++)
    {
        fwrite(&a[i].matricula, sizeof(int), 1, b);
        fwrite(&a[i].nota1, sizeof(float), 1, b);
        fwrite(&a[i].nota2, sizeof(float), 1, b);
        fwrite(&a[i].nota3, sizeof(float), 1, b);
    }
    fclose(b);

    FILE *l = fopen("notas50alunos.bin", "rb");
    int mat;
    float nota;


    while (!feof(f) && fread(&mat, sizeof(int), 1, l) == 1)
    {
        printf("%d ", mat);
        fread(&nota, sizeof(float), 1, l);
        printf("%.1f ", nota);
        fread(&nota, sizeof(float), 1, l);
        printf("%.1f ", nota);
        fread(&nota, sizeof(float), 1, l);
        printf("%.1f\n", nota);
    }

    int index;
    printf("Digite a posição do aluno: ");
    scanf("%d", &index);

    Aluno alu[1]; //vetor pra passar por endereço mais fácil
    carregarAluno(index, alu);
    printf("%d ", alu[0].matricula);
    printf("%.1f ", alu[0].nota1);
    printf("%.1f ", alu[0].nota2);
    printf("%.1f\n", alu[0].nota3);
    fclose(l);

	return 0;
}