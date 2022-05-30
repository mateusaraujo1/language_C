#include <stdio.h>
#define tam 15
int main (){
    int a[15]={0},b[15]={0};
    int num, i, j, resultado;

    printf("Insira 15 numeros inteiros: \n");
    for(i=0;i<tam;i++){
        scanf("%d",&a[i]);

    resultado = 0;
    for (j = 2; j <= a[i] / 2; j++) {
        if (a[i] % j == 0) {
            resultado++;
            break;
        }
    }
    if (a[i]==1){
        resultado=1;}

    if (resultado == 0){
        b[i]=a[i];}
        
    }
    printf("\n");
 
    printf("Primos inseridos: \n");
    for(i=0;i<tam;i++){
        if(b[i]!=0){
        printf("%d ",b[i]);}
    }
    
return 0;}