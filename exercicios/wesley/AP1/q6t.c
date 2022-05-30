/*𝗮) (0,5 pontos) a função menu imprime um menu de jogo, 
lê um valor inteiro do console com a opção do jogador 
e retorna este valor. 
O menu deve ser exibido como mostra a imagem abaixo.*/

/*𝗯) (0,5 pontos) a função 𝗲𝘀𝗰𝗼𝗹𝗵𝗮𝗗𝗮𝗠𝗮𝗾𝘂𝗶𝗻𝗮() não recebe parâmetros 
e traz uma opção aleatória entre três valores possíveis: 1, 2 e 3,
representando respectivamente pedra, papel e tesoura.*/

/*𝗰) (1,0 ponto) a função 𝗰𝗼𝗺𝗽𝗮𝗿𝗮𝗝𝗼𝗴𝗮𝗱𝗮𝘀() recebe como parâmetros a opção de jogada do jogador
e a opção da máquina, ela deve escrever uma mensagem característica do jogo de acordo com os valores recebidos,
por exemplo: “𝒕𝒆𝒔𝒐𝒖𝒓𝒂 𝒄𝒐𝒓𝒕𝒂 𝒑𝒂𝒑𝒆𝒍” e retornar 1 se a vitória é do jogador e 2 caso a vitória seja da máquina.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int comparaJogadas(int ,int (*)(void));
int escolhaDaMaquina(void);
int menu(void);

int main(){
    srand(time(NULL));

    do{
        menu();
    }while(menu()!=4);
  
return 0;}

int menu(void){
    int opcao;
        printf("\n");
        printf("Menu de Jogo\n");
        printf("1. Pedra\n");
        printf("2. Papel\n");
        printf("3. Tesoura\n");
        printf("4. Sair\n");
        printf(":");
        scanf("%d",&opcao);
        system("cls");

        switch(opcao){
            case 1: comparaJogadas(opcao,escolhaDaMaquina);break;
            case 2: comparaJogadas(opcao,escolhaDaMaquina);break;
            case 3: comparaJogadas(opcao,escolhaDaMaquina);break;
            case 4: opcao=4;break;
            default: printf("Escolha invalida"); break;
        }
        printf("\n");

return opcao;}

int escolhaDaMaquina(void){
    int escolha;
    escolha = 1 + (rand()%3);
return escolha;}

int comparaJogadas(int x,int (*maq)(void)){
    int r=0,m=(*maq)();
    char *item[3]={"pedra","papel","tesoura"};

    printf("jogador: %d\n",x);
    printf("maquina: %d\n",m);
    //pedra papel tesoura
    if(x==1 && m==1){
        printf("Empate\n");}
    if(x==2 && m==2){
        printf("Empate\n");}
    if(x==3 && m==3){
        printf("Empate\n");}

    if(x==1 && m==2){
        printf("Papel enrola pedra\n");r=2;}
    if(x==1 && m==3){
        printf("Pedra quebra tesoura\n");r=1;}

    if(x==2 && m==1){
        printf("Papel enrola pedra\n");r=1;}
    if(x==2 && m==3){
        printf("Tesoura corta papel\n");r=2;}

    if(x==3 && m==1){
        printf("Pedra quebra tesoura\n");r=2;}
    if(x==3 && m==2){
        printf("Tesoura corta papel\n");r=1;}

    if(r==1){
        printf("funcao retornou %d, logo, jogador venceu \n",r);}
    if(r==2){
        printf("funcao retornou %d, logo, maquina venceu \n",r);}
    if(r==0){
        printf("funcao retornou %d, logo, empate \n",r);}

return r;}