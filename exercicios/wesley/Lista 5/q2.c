#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define DIM 3
#define VAZIO ' '
//4ª funcao = funcao maquina
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

int q1(char m[DIM][DIM]){
	int i;
	int resultado = 0;
	//if para vencedores em linha
	if(resultado==0){
		for(i=0; i < DIM; i++){
			if(((m[i][0]!=VAZIO)&&(m[i][1]!=VAZIO)&&(m[i][2]!=VAZIO))){//se os elemetos não forem VAZIO
				if((m[i][0]==m[i][1])&&(m[i][0]==m[i][2])){//se a linha tiver elementos iguais
					if (m[i][0]=='0'){//verifica quem e o termo que se repete
						resultado=1;
					}else{resultado=2;}
				}
			}
		}
	}

	//if para vencedores em colunas
	if(resultado==0){
		for(i=0; i < DIM; i++){
			if(((m[0][i]!=VAZIO)&&(m[1][i]!=VAZIO)&&(m[2][i]!=VAZIO))){
				if((m[0][i]==m[1][i])&&(m[0][i]==m[2][i])){
					if (m[0][i]=='0'){
						resultado=1;
					}else{resultado=2;}
				}
			}
		}
	}
	//if para diagonal principal
	if(resultado==0){
		if(((m[0][0]!=VAZIO)&&(m[1][1]!=VAZIO)&&(m[2][2]!=VAZIO))){
			if((m[0][0]==m[1][1])&&(m[0][0]==m[2][2])){
				if((m[0][0])=='0'){
					resultado=1;
				}else{resultado=2;}
			}
		}	
	}
	//if para diagonal secundária
	if(resultado==0){
		if(((m[0][2]!=VAZIO)&&(m[1][1]!=VAZIO)&&(m[2][0]!=VAZIO))){
			if((m[0][2]==m[1][1])&&(m[0][2]==m[2][0])){
				if((m[0][2])=='0'){
					resultado=1;
				}else{resultado=2;}
			}
		}
	}

return resultado;}

void maquina(char s[DIM][DIM], int *x, int *y){
    int i,j;
    for(i=0; i < DIM; i++){
        for(j=0; j < DIM; j++){
            if(s[i][j]==VAZIO){
               *x=(1+rand()%3);
               *y=(1+rand()%3);
            }
        }
    }
}


int main() {
	char velha[DIM][DIM];
	int x, y, numeroDeJogadas = 0;
	char simbolo = '0'; /* Caractere para Jogar */
    srand(time(NULL));

	iniciar(velha);
	
    while (1) { /* Loop Infinito */
        system("cls");
		mostrar(velha);
        printf("\nJogador: %c\nPosicao (x y): ", simbolo);
		maquina(velha,&x,&y);
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

		
		if ((numeroDeJogadas == DIM*DIM)||(q1(velha)!=0)){
			break; /* Finalizar o jogo */}
	}

	mostrar(velha);

	if (q1(velha)==0){printf("\nsem vencedores\n");}
	if (q1(velha)==1){printf("\nvencedor: 0\n");}
	if (q1(velha)==2){printf("\nvencedor: X\n");}
	return 0;
}