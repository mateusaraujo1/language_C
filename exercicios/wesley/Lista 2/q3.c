#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    srand(time(NULL));
    int matriz[5][3];
    int i,j,mai,men,codmai,codmen,med,z,c;
    mai=men=codmai=codmen=med=z=c=0;
    //le cod da cidade
    for (i=0;i<5;i++){
        printf("Insira o cod da cidade %d: \n",i+1);
        j=0;
        /*matriz[i][j]=1+(rand() % 10);
        printf("%d\n", matriz[i][j]);*/
        scanf("%d",&matriz[i][j]);
        //matriz[i][j]=i+1;
    }
    //le n de veiculos da cidade
    for (i=0;i<5;i++){
        printf("Insira o n de veiculos da cidade %d: \n",matriz[i][0]);
        j=1;
        /*matriz[i][j]=1+(rand() % 3000);
        printf("%d\n", matriz[i][j]);*/
        scanf("%d",&matriz[i][j]);
        //matriz[i][j]=1;
    }
    //le o n de acidentes da cidade
    for (i=0;i<5;i++){
        j=2;
        printf("Insira o n de acidentes de transito da cidade %d: \n",matriz[i][0]);
        /*matriz[i][j]=1+(rand() % 100);
        printf("%d\n", matriz[i][j]);*/
        scanf("%d",&matriz[i][j]);
    }
    //diz o maior/menor indice de acidentes e a cidade resp.
    mai=men=matriz[0][2];
    for(i=0;i<5;i++){
        j=2;

        if(matriz[i][j]>=mai){
            mai=matriz[i][j];codmai=matriz[i][0];
        }
            
        if(matriz[i][j]<=men){
            men=matriz[i][j];codmen=matriz[i][0];
        }      
    }
        printf("maior indice de acidente: %d. da cidade: %d\n",mai,codmai);
        printf("menor indice de acidente: %d. da cidade: %d\n",men,codmen);//pq codmen sempre sai errado?
    
    //diz a media de veiculos das 5 cidades
    for(i=0;i<5;i++){
        j=1;
        med=med+matriz[i][j];
    }
    med=med/5;
    printf("Media de veiculos das 5 cidades: %d\n",med);

    //diz a media de acidentes das cidades com menos de 2k veiculos
    med=0;
    for(i=0;i<5;i++){
        j=1;z=2;
        if(matriz[i][j]<2000){
            med=med+matriz[i][z];
            c=c+1;
        }
    }
    med=med/c;
    printf("Media de acidentes nas cidades com menos de 2000 veiculos: %d\n",med);

   //mostra a matriz
    printf("\n");
    for (i=0;i<5;i++){
        printf("\n");
        for(j=0;j<=2;j++){
            printf("%4d ",matriz[i][j]);
    }}

return 0;}