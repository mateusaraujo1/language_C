#include <stdio.h>

int intervalo (int a, int b);

int main (){
    int a,b,c;
    printf("Insira dois numeros inteiros positivos: \n");
    scanf("%d %d",&a,&b);
    if(a==b){
        printf("Nao ha intervalo\n");
    }else{
        if(a>b){
            c=a;
            a=b;
            b=c;
        }
        c=intervalo(a,b);
        printf("A soma dos inteiros entre %d e %d e: %d.\n",a,b,c);
    }


return 0;}

int intervalo (int a, int b){
    int d,i;
    /*printf("%d\n",a);
    printf("%d\n",b);*/
    d=0;
    for(i=a;i<=b;i++){
        d=d+i;
    }
return d;}