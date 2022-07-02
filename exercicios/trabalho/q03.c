#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int menu() {
    int opcao;
    printf("PEDRA, PAPEL OU TESOURA?");
    printf("\n1 -> Pedra");
    printf("\n2 -> Papel");
    printf("\n3 -> Tesoura\n\n");
    printf("Escolha uma opcao pelo numero: ");
    scanf("%d", &opcao);
    return opcao;
}

int escolhaDaMaquina() {
    int aleatorio = (rand() % 3) + 1;
    printf("A maquina ja fez sua escolha!");
    return aleatorio;
}

int comparaJogadas(int jogador, int maquina) {

    printf("\n\n");
    switch (jogador)
    {
    case 1:
        printf("Voce escolheu PEDRA");
        break;
    case 2:
        printf("Voce escolheu PAPEL");
        break;
    case 3:
        printf("Voce escolheu TESOURA");
        break;
    }

    printf("\n");

    switch (maquina)
    {
    case 1:
        printf("A maquina escolheu PEDRA");
        break;
    case 2:
        printf("A maquina escolheu PAPEL");
        break;
    case 3:
        printf("A maquina escolheu TESOURA");
        break;
    }

    printf("\n\n");

    if (jogador == 1 && maquina == 1)
        printf("PEDRA com PEDRA empata!");
    else if (jogador == 2 && maquina == 2)
        printf("PAPEL com PAPEL empata!");
    else if (jogador == 3 && maquina == 3)
        printf("TESOURA com TESOURA empata!");
    else if ((jogador == 1 && maquina == 2) || (jogador == 2 && maquina == 1))
        printf("PAPEL enrola PEDRA!");
    else if ((jogador == 2 && maquina == 3) || (jogador == 3 && maquina == 2))
        printf("TESOURA corta PAPEL!");
    else if ((jogador == 3 && maquina == 1) || (jogador == 1 && maquina == 3))
        printf("PEDRA quebra TESOURA!");
    
    printf("\n");

    if (jogador == maquina) {
        printf("Deu empate!");
        return 0;
    }
    else if((jogador == 1 && maquina == 3) || (jogador == 2 && maquina == 1) || (jogador == 3 && maquina == 2)) {
        printf("Voce venceu! ;)");
        return 1;
    }
    else {
        printf("A maquina venceu! ;(");
        return 2;
    }
}

int main() {

    srand(time(NULL));
    int jogador = menu();
    int maquina = escolhaDaMaquina();
    printf("\nRetorno final: %d", comparaJogadas(jogador, maquina));

return 0;
}