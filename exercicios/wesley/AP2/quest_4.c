#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

typedef struct{
    char nome[100];
    float forca;
    float resistencia;
    float velocidade;                                 
}heroi;

int compara(heroi *h1, heroi *h2);

int main() {

    srand(time(NULL));

    heroi hero1, hero2;
    int aux;
   
    strcpy(hero1.nome, "Link");
    hero1.forca = 1+rand()%100;
    hero1.resistencia = 1+rand()%100;
    hero1.velocidade = 1+rand()%100;

    strcpy(hero2.nome, "Ganondorf");
    hero2.forca = 1+rand()%100;
    hero2.resistencia = 1+rand()%100;
    hero2.velocidade = 1+rand()%100;

    printf("---Antes da comparacao---\n\n");
    printf("------ HEROI 1 -------\n");
    printf("Nome do heroi: %s\n", hero1.nome);
    printf("Forca do heroi: %.2f\n", hero1.forca);
    printf("Resistencia do heroi: %.2f\n", hero1.resistencia);
    printf("Velocidade do heroi: %.2f\n\n", hero1.velocidade);
    
    printf("------ HEROI 2 -------\n");
    printf("Nome do heroi: %s\n", hero2.nome);
    printf("Forca do heroi: %.2f\n", hero2.forca);
    printf("Resistencia do heroi: %.2f\n", hero2.resistencia);
    printf("Velocidade do heroi: %.2f\n\n", hero2.velocidade);

    aux = compara(&hero1, &hero2);

    printf("---Depois da comparacao---\n\n");
    printf("------ HEROI 1 -------\n");
    printf("Nome do heroi: %s\n", hero1.nome);
    printf("Forca do heroi: %.2f\n", hero1.forca);
    printf("Resistencia do heroi: %.2f\n", hero1.resistencia);
    printf("Velocidade do heroi: %.2f\n\n", hero1.velocidade);
    
    printf("------ HEROI 2 -------\n");
    printf("Nome do heroi: %s\n", hero2.nome);
    printf("Forca do heroi: %.2f\n", hero2.forca);
    printf("Resistencia do heroi: %.2f\n", hero2.resistencia);
    printf("Velocidade do heroi: %.2f\n\n", hero2.velocidade);


    printf("Retorno da funcao: %d\n", aux);
    
    return 0;
}

int compara (heroi *h1, heroi *h2) {
    if(h1->velocidade > h2->velocidade){
        h2->resistencia -= 0.5;
    } else if(h1->velocidade < h2->velocidade){
        h1->velocidade -= 0.5;
    }

    if (h1->forca > h2->resistencia){
        h2->resistencia -= 2.5;
        return 1;
    } else if(h1->forca < h2->resistencia){
                h1->forca -= 0.5;
                return 2;
            } else if(h1->forca == h2->resistencia){
                return 0;
            }
}