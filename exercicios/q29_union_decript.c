#include <stdio.h>

union Mensagem {
int campo [5]; // 20 bytes = 5 * 4 bytes
char texto [20]; // 20 bytes = 20 *1 byte
};

int main () {
    int i;
    union Mensagem m = {0};
    printf ("| - - - - - Mensagem codificada- - - - -|\n") ;
    for (i =0; i <5; i++)
        scanf("%d", &m.campo[i]) ;
    printf (" Mensagem revelada \n") ;
    printf("%s", m.texto) ;
    printf ("\n") ;
    return 0;
}
