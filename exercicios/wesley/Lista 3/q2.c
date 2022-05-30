#include <stdio.h>
//É pra fazer pra numeros negativos também?
int potencia (int a, int b);

int main (){
    int a,b,d=0;
    printf("Insira uma base e um expoente: \n");
    scanf("%d %d",&a,&b);
    d=potencia(a,b);
    printf("%d elevado a %d e: %d\n",a,b,d);

return 0;}

int potencia (int a, int b){
    int i,e;
    e=a;
    for(i=1;i<b;i++){
        a=e*a;
    }
    if(b==0){
        a=1;
    }
return a;}
