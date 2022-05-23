#include <stdio.h>
#include <stdlib.h>

void print(char V[]) {
    int i = 0;
    while(V[i] != '\0') {
        printf("%c", V[i]);
        i++;
    }
    printf("\nend");
}

int main() {
    char nome1[8] = {'g', 'a', 't', 'o', '\0'};
    char nome2[7] = "gato";
    char nome3[] = "gato branco";
    char nome4[] = {};
    //esses com aspa dupla já coloca automaticamente o \0, já o que tem as chaves{} não
    scanf("%s", nome4);
    print(nome4);
    
    return 0;
}