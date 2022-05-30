/* Lendo e imprimindo um arquivo sequencial */
#include <stdio.h>
#include <stdlib.h>
    int main (){
    int conta;
    char nome[30];
    float saldo;
    FILE *arquivo ; /* ponteiro do arquivo clientes . dat */

    arquivo = fopen ("clientes.txt","r");

    if( arquivo == NULL )
        printf (" Arquivo nao pode ser aberto \n");
    else{
        printf ("% -10s% -10s% s\n","Conta", "Nome", "Saldo");
        fscanf ( arquivo , "%d%s%f", &conta , nome , &saldo );

        while (!feof ( arquivo )) {
            fscanf ( arquivo , "%d%s%f", &conta , nome , &saldo );
            printf ("%-10d %-10s %.2f\n",conta,nome,saldo);
        }
    fclose ( arquivo );
    }
return 0;
}