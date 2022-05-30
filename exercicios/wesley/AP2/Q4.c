/*
    Crie uma função que receba como parâmetros duas variáveis do tipo 𝘀𝘁𝗿𝘂𝗰𝘁 𝗵𝗲𝗿𝗼𝗶. 
    A função deve comparar e alterar os membros de cada estrutura como descrito abaixo. (𝟬.𝟭𝗣)
    ***IMAGEM COM AS REGRAS***
    Na função 𝗺𝗮𝗶𝗻 use a função de comparação, 
    crie dois exemplos mostrando as comparações entre heróis diferentes, 
    exiba o nome dos vencedores de cada comparação e 
    mostre os valores dos membros de cada estrutura com os valores alterados após o uso da função.
*/
#include <stdio.h>
#include <stdlib.h>
#include<time.h>

    typedef struct{
        char nome[50];
        float forca,resistencia,velocidade;
    }heroi;

    int comparacao(heroi* x,heroi* y){
        int v=-1;
        //campo velocidade
        if(x->velocidade>y->velocidade){
            y->resistencia=y->resistencia-0.5;
        }
        if(x->velocidade<y->velocidade){
            x->forca=x->forca-0.5;
        }
        //campo forca
        if(x->forca>y->resistencia){
            y->resistencia=y->resistencia-2.5;
            v=1;
            //X vence
        }
        if(x->forca<y->resistencia){
            x->forca=x->forca-0.5;
            v=2;
            //Y vence
        }
        if(x->forca==y->resistencia){
            v=0;
            //empate
        }

   return v;}

    void imprime(heroi x,heroi y){

    printf("Nome do heroi: %s\n",x.nome);
    printf("Forca do heroi %.2f\n",x.forca);
    printf("Resistencia do heroi %.2f\n",x.resistencia);
    printf("Velocidade do heroi %.2f\n",x.velocidade);
    printf("*-----------------------------------------------*\n");
    printf("Nome do heroi: %s\n",y.nome);
    printf("Forca do heroi %.2f\n",y.forca);
    printf("Resistencia do heroi %.2f\n",y.resistencia);
    printf("Velocidade do heroi %.2f\n",y.velocidade);
    printf("*-----------------------------------------------*\n");
   }

    void imprimeresultado(int resultado){

    if (resultado==1){
        printf("funcao retornou %d\n",resultado);
        printf("heroi_1 venceu\n");}
    if (resultado==2){
        printf("funcao retornou %d\n",resultado);
        printf("heroi_2 venceu\n");}
    if (resultado==0){
        printf("funcao retornou %d\n",resultado);
        printf("empate\n");}
   }
    

int main(){
    srand(time(NULL));
    heroi x={"heroi_1",1+rand()%100,1+rand()%100,1+rand()%100},y={"heroi_2",1+rand()%100,1+rand()%100,1+rand()%100};
    int resultado=-1;

    printf("Teste 1\n");
    printf("valores iniciais\n");
    imprime(x,y);

    resultado = comparacao(&x,&y);

    printf("/////////////////////////////////////////////////////////////////////\n");
    printf("/////////////////////////////////////////////////////////////////////\n");
    printf("valores apos a comparacao\n");
    imprime(x,y);
    imprimeresultado(resultado);
    resultado=-1;


//**********************************************************************************************************************
//**********************************************************************************************************************
//**********************************************************************************************************************
    x.forca=1+rand()%100; x.resistencia=1+rand()%100; x.velocidade=1+rand()%100;
    y.forca=1+rand()%100; y.resistencia=1+rand()%100; y.velocidade=1+rand()%100;
//**********************************************************************************************************************
//**********************************************************************************************************************
//**********************************************************************************************************************
    printf("\nAperte Enter para iniciar o teste 2\n");
    getchar();
    //system("cls");

    printf("Teste 2\n");
    imprime(x,y);

    resultado = comparacao(&x,&y);

    printf("/////////////////////////////////////////////////////////////////////\n");
    printf("/////////////////////////////////////////////////////////////////////\n");
    printf("valores apos a comparacao\n");
    imprime(x,y);
    imprimeresultado(resultado);


return 0;}
