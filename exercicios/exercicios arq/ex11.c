#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int tam = 10, v[tam], tam2, v2[tam];
    srand(time(NULL));
    
    for(int i = 0; i < tam; i++)
        v[i] = rand() % 99 + 1;
        
    FILE *f = fopen("numeros.bin", "rb+");
    
    if(f == NULL)
        printf("Erro na abertura do arquivo");
    else {
        fread(&tam2, sizeof(int), 1, f);
        tam2 += 10;
        fseek(f, 0, SEEK_SET);
        fwrite(&tam2, sizeof(int), 1, f);
        fseek(f, 0, SEEK_END);
        fwrite(v, sizeof(int), tam, f);

    }
    return 0;
}