#include <stdio.h>
#define DIM 3
#define VAZIO ' '

void iniciar(char s[][DIM]) {
	int i,j ;
	for(i=0; i < DIM; i++) {
        for(j=0; j < DIM; j++)
            s[i][j] = VAZIO;
    }
}

void mostrar(char s[DIM][DIM]) {
	int i,j;
    printf("   1   2   3\n");

	for (i=0; i < DIM; i++) {
        printf("%d ",i+1);
        
        for (j=0; j < DIM; j++)
			printf(" %c %c",s[i][j], j == DIM-1 ? ' ' : '|');
		
        if (i != DIM-1)
			printf("\n  ---+---+---") ;
		
        printf("\n");
	}
}

int main() {
	char velha[DIM][DIM];
	int x, y, numeroDeJogadas = 0;
	char simbolo = '0'; /* Caractere para Jogar */

	iniciar(velha);
	
    while (1) { /* Loop Infinito */
        system("cls");
		mostrar(velha);
		
        printf("\nJogador: %c\nPosicao (x y): ", simbolo);
		scanf("%d %d",&x,&y);
		x--; 
        y--; /* indices do vetor começam em 0 */
        //...
		if (velha[x][y] == VAZIO) {
            velha[x][y] = simbolo;
			simbolo = (simbolo == '0') ? 'X' : '0';
			numeroDeJogadas++;
		}
		else
			printf("Posicao ja ocupada\nJogue Novamente!!!\n");

		
		if (numeroDeJogadas == DIM*DIM){
			break; /* Finalizar o jogo */}
	}

	mostrar(velha);

	return 0;
}
