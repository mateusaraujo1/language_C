/*Defina uma estrutura da seguinte forma
u n i o n Generico {
i n t vInt ;
c h a r vChar ;
f l o a t vFloat ;
};
Crie a função void printArray(union Generico g[], int tamanho, int tipo)
que recebe um vetor do tipo struct Generico, o tamanho do vetor e o tipo (valores
1,2 ou 3 para int, char ou float respectivamente). A função deve imprimir o vetor de
acordo o tipo selecionado*/

#include <stdio.h>
#include <stdlib.h>
#define tamanho 5

union Generico {
    int vInt;
    char vChar;
    float vFloat;
};

void printArray(union Generico g[], int tam, int tipo)
{
    for (int i = 0; i < tamanho; i++)
        if (tipo == 1)
            printf("%d ", g[i].vInt);
        else if (tipo == 2)
            printf("%c ", g[i].vChar);
        else if (tipo == 3)
            printf("%.2f ", g[i].vFloat);
    printf("\n");
}

int main()
{
    union Generico gInt[tamanho] = {46, 10, 34, 12, 7};
    union Generico gChar[tamanho] = {'f', 'u', 'n', 'n', 'y'};
    union Generico gFloat[tamanho] = {{.vFloat=3.2},{.vFloat=14.9},{.vFloat=12.39},{.vFloat=3.12},{.vFloat=101.5}};

    printArray(gInt, tamanho, 1);
    printArray(gChar, tamanho, 2);
    printArray(gFloat, tamanho, 3);
    return 0;
}
