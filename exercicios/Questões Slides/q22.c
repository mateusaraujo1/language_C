/*Implemente um programa que leia o nome, a idade e o endereço de uma pessoa e
armazene esses dados em uma estrutura. Em seguida, imprima na tela os dados da
estrutura lida*/

#include <stdio.h>
#include <stdlib.h>

struct dados
{
	char nome[20];
	int idade;
	char endereco[20];
};

int main()
{
	struct dados d;
	
	scanf("%[^\n]", d.nome);
	scanf("%d", &d.idade);
	scanf("%*c");
	scanf("%[^\n]", d.endereco);

	printf("%s\n", d.nome);
	printf("%d\n", d.idade);
	printf("%s\n", d.endereco);

	return 0;
}