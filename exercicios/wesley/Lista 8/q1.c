/*
Questão 1
Crie um programa para coletar informações sobre as visitas ao aquário da cidade. 
(𝗮) O sistema deve iniciar com a pergunta: 𝒒𝒖𝒂𝒍 𝒂 𝒒𝒖𝒂𝒏𝒕𝒊𝒅𝒂𝒅𝒆 𝒅𝒆 𝒑𝒆𝒔𝒔𝒐𝒂𝒔 𝒒𝒖𝒆 𝒑𝒂𝒓𝒕𝒊𝒄𝒊𝒑𝒂𝒓á 𝒅𝒂 𝒑𝒆𝒔𝒒𝒖𝒊𝒔𝒂? 
(𝗯) Crie um vetor com o tamanho exato para guardar as respostas de cada pessoa,
abaixo segue a estrutura que deve ser utilizada, você deve completá-la com os números de bits adequados:
Estrutura Formulário***

OBS: Como inserir dados nesse vetor de formulario, e como manipulá-los
*/
#include<stdio.h>
#include<stdlib.h>

    typedef struct{
         int primeiraVisita;
         int visitarNovamente;
         int dedosPerdidos;
         int criancaPerdida;
         int quantosDias;                                  
    }formulario;

int main(){
    //int n;
    formulario *pesquisa; 
    
    printf("Qual a quantidade de pessoas que participara da pesquisa?\n");
    //scanf("%d",&n);
    //n=1;
    pesquisa = malloc(sizeof(formulario));

    printf("1. E sua primeira visita?\n");
    scanf("%d\n",(*pesquisa).primeiraVisita);
    printf("%d\n",(*pesquisa).primeiraVisita);

    /*printf("2. Pretende nos visitar novamente?\n");
    printf("3. Numero de dedos perdidos no aquario das piranhas:\n");
    printf("4. Voce perdeu uma criança na exibicao dos tubaroes?\n");
    printf("5. Quantos dias da semana voce passaria aqui se fosse possivel?\n");*/
return 0;}