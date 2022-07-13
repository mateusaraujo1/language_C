/*Exercício 24
Crie uma estrutura capaz de armazenar o primeiro nome e a idade de uma pessoa.
Agora, escreva um programa que leia os dados de 50 pessoas. Calcule e exiba os nomes
da pessoa mais nova e da mais velha.
1. Baixe o arquivo name_age.txt
2. Execute o comando abaixo no terminal
./a.out < name_age.txt
OBS: se você criou o executável do seu programa com outro nome substitua o a.out pelo
nome do seu executável*/

#include <stdio.h>
#include <stdlib.h>
#define tam 50

struct dados
{
    char name[20];
    int age;
};

void mostrar(struct dados d[tam]) {

    for (int i = 0; i < tam; i++)
    {   
        printf("\nNome: %s", d[i].name);
        printf("\nIdade: %d\n", d[i].age);
    }
}

int main()
{   
	struct dados d[tam];

    for (int i = 0; i < tam; i++)
    {   
        scanf("%s", d[i].name);
	    scanf("%d", &d[i].age);
    }

    mostrar(d);

    int maisVelho = d[0].age;
    int maisNovo = d[0].age;
    int velho, jovem;

    for (int i = 0; i < tam; i++)
    {
        if(d[i].age > maisVelho) {
            maisVelho = d[i].age;
            velho = i;
        }
        
        if(d[i].age < maisNovo) {
            maisNovo = d[i].age;
            jovem = i;
        }
    }
    
    printf("O mais velho é o %s com %d anos.\n O mais novo é o %s com %d anos", d[velho].name, d[velho].age, d[jovem].name, d[jovem].age);
    
	return 0;
}