/* Cria um arquivo sequencial */
#include <stdio.h>
#include <stdlib.h>
 //r - leitura. leitura de algo existente
 //w - escrita. cria um arquivo, apaga o anterior se existir
 //a - escrita. escreve algo no fim de um arquivo ja existente
int main (){
    int conta;
    char nome[30];
    float saldo;
    FILE *arquivo; /* ponteiro do arquivo clientes . dat */

    arquivo = fopen ("clientes.txt","w");

    if( arquivo == NULL )
        printf (" Arquivo nao pode ser aberto \n");
    else{
        printf (" Digite a conta , o nome e o saldo .\n");
        printf (" Digite EOF para encerrar a entrada de dados .\n");
        printf ("? ");
        scanf ("%d%s%f", &conta , nome , &saldo );

        while (!feof(stdin)) {
            fprintf ( arquivo , "%d %s %.2f\n",conta , nome , saldo );
            printf ("? ");
            scanf ("%d%s%f", &conta , nome , &saldo );
        }
        fclose ( arquivo );
    }
return 0;;
}