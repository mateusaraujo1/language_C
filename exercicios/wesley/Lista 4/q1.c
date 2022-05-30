#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
    int a[10]={0},b[10]={0},c[20],i,j,aux;
    srand(time(NULL));
    printf("Vetor 1:\n");
    for(i=0;i<=9;i++){
        a[i]=rand();
        printf("%d ",a[i]);
    }
    printf("\nVetor 2:\n");
    for(i=0;i<=9;i++){
        b[i]=rand();
        printf("%d ",b[i]);
    }
    for(i=0;i<=9;i++){
        c[i]=a[i];
    }

    for(i=10;i<=19;i++){
        c[i]=b[i-10];
    }
    printf("\nVetor resultante:\n");
    for(i=0;i<=19;i++){
        printf("%d ",c[i]);
    }

    for(i=0;i<=19;i++){
        for(j=0;j<=19;j++){
            if(c[i]>c[j]){
                aux=c[i];
                c[i]=c[j];
                c[j]=aux;
            }
        }
    }
printf("\nVetor resultante em ordem decrescente:\n");
    for(i=0;i<=19;i++){
        printf("%d ",c[i]);
    }
    printf("\n");

return 0;}