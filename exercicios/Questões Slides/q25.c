/*Crie uma estrutura representando um Site. Essa estrutura deve conter o domínio do
site (ex: sitefalso.com), seu endereço de IP (ex: 161.136.195.15 ) e o número de
acessos por dia. Agora, escreva um programa que leia os dados de 300 sites e os exiba
por ordem de número de acessos, do mais acessado para o menos acessado.
1. Baixe o arquivo website_hits.txt
2. Execute o comando abaixo no terminal
./a.out < website_hits.txt
OBS: se você criou o executável do seu programa com outro nome substitua o a.out pelo
nome do seu executável*/

#include <stdio.h>
#include <stdlib.h>
#define tam 300

struct Sites
{
    char dominio[30];
    char IP[30];
    int acessos;
};

void mostrar(struct Sites s[tam])
{
    for (int i = 0; i < tam; i++)
    {
        printf("%-30s %16s %8d\n", s[i].dominio, s[i].IP, s[i].acessos);
    }
}

void ordemDecrescente(struct Sites s[tam])
{   
    struct Sites aux;
    for (int i = 0; i < tam; i++)
    {
        for (int j = 0; j < tam-i; j++)
        {
            if (s[j].acessos < s[j+1].acessos)
            {
                aux = s[j];
                s[j] = s[j+1];
                s[j+1] = aux;
            }
        }
    }
    mostrar(s);
}

int main()
{
    struct Sites s[tam];

    for (int i = 0; i < tam; i++)
    {
        scanf("%s", s[i].dominio);
        scanf("%s", s[i].IP);
        scanf("%d", &s[i].acessos);
    }
    ordemDecrescente(s);
    return 0;
}
