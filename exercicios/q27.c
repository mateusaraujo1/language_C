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
#include <time.h>

struct formulario
{
    unsigned int primeiraVisita: 1;
    unsigned int visitarNovamente: 1;
    unsigned int dedosPerdidos: 5;
    unsigned int criancaPerdida: 1;
    unsigned int quantosDias: 3;
    unsigned int: 5;
};

void mostrar(struct formulario f[50], int tam) {
    for (int i = 0; i < tam; i++) {
        printf("Primeira visita? %d\n", f[i].primeiraVisita);
        printf("Visitaria novamente? %d\n", f[i].visitarNovamente);
        printf("Dedos perdidos? %d\n", f[i].dedosPerdidos);
        printf("Alguma crianca perdida? %d\n", f[i].criancaPerdida);
        printf("Passaria quantos dias da semana aqui? %d\n", f[i].quantosDias);
    }
}

void resumo(struct formulario f[50], int tam) {
    int primeira_visita = 0, visitar_novamente = 0, total_dedos_perdidos = 0, media_dias, aux = 0;
    for (int i = 0; i < tam; i++)
    {
        if (f[i].primeiraVisita == 1)
            primeira_visita++;
        if (f[i].visitarNovamente == 1)
            visitar_novamente++;
        total_dedos_perdidos = total_dedos_perdidos + f[i].dedosPerdidos;
        aux = aux + f[i].quantosDias;
    }
    media_dias = aux / tam;

    printf("%d pessoas visitaram pela primeira vez\n", primeira_visita);
    printf("%d visitariam novamente\n", visitar_novamente);
    printf("total de %d dedos perdidos\n", total_dedos_perdidos);
    printf("%d media de dias que passariam no aquario\n", media_dias);
}

int main()
{   
    int tam;
    struct formulario f[50];
    srand(time(NULL));
	
    printf("Quantas pessoas responderão a pesquisa?\n");
    scanf("%d", &tam);

    for (int i = 0; i < tam; i++)
    {
        // printf("\nPrimeira visita? ");
        f[i].primeiraVisita = rand() % 2;
        // scanf("%u", f[i].primeiraVisita);
        // printf("\nPretende visitar novamente? ");
        f[i].visitarNovamente = rand() % 2;
        // scanf("%u", f[i].visitarNovamente);
        // printf("\nDedos perdidos? ");
        f[i].dedosPerdidos = rand() % 21;
        // scanf("%u", f[i].dedosPerdidos);
        // printf("\nPerdeu alguma criança? ");
        f[i].criancaPerdida = rand() % 2;
        // scanf("%u", f[i].criancaPerdida);
        // printf("\nQuantos dias da semana passaria aqui? ");
        f[i].quantosDias = rand() % 8;
        // scanf("%u", f[i].quantosDias);
    }
    
    mostrar(f, tam);
    resumo(f, tam);
    return 0;
}