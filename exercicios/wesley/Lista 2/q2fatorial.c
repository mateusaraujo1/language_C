#include <stdio.h>

int fat (int a);

int main (){
    int n,i,e,a;
    printf("Quantos numeros serao lidos?: ");
    scanf("%d\n",&n);

    if(n!=0){
        for(i=1;i<=n;i++){
         scanf("%d",&e);
         a=fat(e);
         printf("fatorial: %d\n",a);
         }
    }

return 0;}

int fat (int a){
    int b,c;
    if(a!=0){
        b=a;
        for(c=1;c<a;c++){
            b=b*c;
         }
    }else{b=1;}
return b;}