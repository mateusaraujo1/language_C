/*Crie um programa para coletar informações sobre as visitas ao aquário da cidade.
a) Crie um vetor com o 50 posições para guardar as respostas dos visitantes, abaixo
segue a estrutura que deve ser utilizada, você deve completá-la com os números de
bits adequados:
s t r u c t Formulario {
u n s i g n e d i n t primeiraVisita :(número de bits); // sim ou nao
u n s i g n e d i n t visitarNovamente :(número de bits);// sim ou nao
u n s i g n e d i n t dedosPerdidos :(número de bits); // quantidade
u n s i g n e d i n t criancaPerdida :(número de bits); // sim ou nao
u n s i g n e d i n t quantosDias :(número de bits); // duracao */

#include <stdio.h>
#include <stdlib.h>

struct formulario
{
    unsigned int primeiraVisita: 1;
    unsigned int visitarNovamente: 1;
    unsigned int dedosPerdidos: 5;
    unsigned int criancaPerdida: 1;
    unsigned int quantosDias: 3;
};


int main()
{   
    int tam;
    struct formulario f[50];
	
    printf("Quantas pessoas responderão a pesquisa?\n");
    scanf("%d", &tam);

    for (int i = 1; i < tam; i++)
    {
        printf("\nPrimeira visita? ");
        scanf("%d", f[i].primeiraVisita);
        printf("\nPretende visitar novamente? ");
        scanf("%d", f[i].visitarNovamente);
        printf("\nDedos perdidos? ");
        scanf("%d", f[i].dedosPerdidos);
        printf("\nPerdeu alguma criança? ");
        scanf("%d", f[i].criancaPerdida);
        printf("\nQuantos dias da semana passaria aqui? ");
        scanf("%d", f[i].quantosDias);
    }
    
    
    return 0;
}