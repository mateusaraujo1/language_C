#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int tam = 10, v[tam];
    srand(time(NULL));
    
    for(int i = 0; i < tam; i++)
        v[i] = rand() % 99 + 1;
        
    FILE *f = fopen("numeros.bin", "wb");
    
    if(f == NULL)
        printf("Erro na criação do arquivo");
    else {
        fwrite(&tam, sizeof(int), 1, f);
        fwrite(v, sizeof(int), tam, f);
    }
    return 0;
}