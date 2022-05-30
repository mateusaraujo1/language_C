/*
Questão 1.
Crie uma estrutura representando um aluno de uma disciplina. 
Essa estrutura deve guardar as seguintes informações:
    o número de matrícula do aluno (um inteiro de 4 dígitos),
    sexo (masculino ou feminino), seu índice de rendimento (um inteiro de 0 a 100)
    e se é ou não a primeira vez que o aluno faz a disciplina.
Escreva um programa que mostre o tamanho em bytes dessa estrutura 
e realize os ajustes necessários para que ela não possua mais que 4 bytes.
*/
#include <stdlib.h>
#include <stdio.h>

struct Aluno {
    unsigned short matricula:14;
    unsigned short sexo:1;
    unsigned short iniciante:1;
    unsigned char rendimento;    
};

int main() {
    struct Aluno a = {9999, 1, 1, 256};
    printf("%ld bytes\n", sizeof(a));
    return 0;
}

