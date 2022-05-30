#include <stdio.h>
#define tam 5

/*int main(){
    int i, a, *aptr,b[tam],*bptr;
    a=1;
    aptr=&a;
    bptr=&b;

    //--**--testes de valor e endereco--**--
    /*printf(" valor de a: %d\n valor de a pelo ponteiro: %d\n",a,*aptr);
    printf(" endereco de a por a:  %d\n endereco de a por ponteiro : %d\n ",&a,aptr);*/

   //--**--testes de manipulacao de posicao no vetor--**--
    //imprime as posições do vetor
/*    for(i=0;i<tam;i++){
        b[i]=i+1;
        printf("%d ",b[i]);
    }
    printf("\n");
    //imprime o valor do vetor somando o número de bytes correspondente ao tipo do ponteiro
    for(i=0;i<tam;i++){
        printf("%d ",*(bptr+i));
    }
    printf("\n");
    //imprime o vetor usando o ponteiro
    for(i=0;i<tam;i++){
        printf("%d ",bptr[i]);
    }

return 0;}*/

//--**--teste de passar funcao como parametro--**--
/*int calculadora(int a,int b,int (*operacao)(int, int)){
return (*operacao)(a,b);}

int soma(int a, int b){
    int c;
    c=a+b;
return c;}

int main(){
    int a,b;
    printf("Insira dois numeros: \n");
    scanf("%d%d",&a,&b);
    printf("%d",calculadora(a,b,soma));
return 0;}*/


//--**--testes de cast --**--
/*int main(){
    int a,b,c,d;
    a=1;
    b=2;

    c=(double)a;
    d=(double)b;

    printf("%lf %lf",c,d);
return 0;}*/
