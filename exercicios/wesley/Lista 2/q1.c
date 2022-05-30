#include <stdio.h>
int main (){
    int n,i,a;
    double e;
    printf("insira um numero inteiro positivo: ");
    scanf("%d",&n);
    e=1;
    if(n!=0){
        a=n-1;
        for (i=1;i<=a;i++){
            n=n*i;
            e=e+(1.0/n);
        }
    }else{e=e+1;}
     printf("%lf",e);       
return 0;}