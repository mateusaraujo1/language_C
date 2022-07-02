#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define palpites 5

int main()
{   
	srand(time(NULL));
    int num = 1 + (rand() % 100), chute;

    //printf("%d", num);

    printf("Adivinhe o numero que esta entre 1 e 100");
    for (int i = 0; i < palpites; i++)
    {   
        printf("\n\nVoce tem %d tentativas", palpites-i);
        printf("\nChute um numero: ");
        scanf("%d", &chute);
        if (chute > num)
            printf("\nVoce errou! O numero é menor que %d", chute);
        else if (chute < num)
            printf("\nVoce errou! O numero é maior que %d", chute);
        else {
            printf("\nPARABENS!! VOCE ACERTOU ;)");
            break;
        }
        if (i == (palpites-1))
            printf("\nLamento, voce atingiu o limite de tentativas");  
    }
	return 0;
}