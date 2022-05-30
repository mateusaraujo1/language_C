/*
Questão 5.
Crie uma função que receba uma string s1 e retorne uma nova string s2 invertida.
*/
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char *inv(char *s1) {
    char *s2;
    int i, j;

    s2 = malloc( strlen(s1) + 1);

    for (i=strlen(s1)-1, j=0;  i>=0;  i--, j++)
        s2[j] = s1[i];
    
    s2[j+1] = '\0';

    return s2;
}

int main() {
    char s1[] = "roma";
    char *s2 = inv(s1);
    printf("s2 = %s\n", s2);

    free(s2);
    return 0;
}




