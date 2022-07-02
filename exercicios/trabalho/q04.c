#include <stdio.h>
#include <stdlib.h>
#define skip 3 //Assim posso mudar o pulo de posições quando quiser apenas alterando aqui

int main()
{
	char frase[100];

    printf("Digite uma mensagem para criptografar\n");
    scanf("%[^\n]", frase);

    int i = 0;
    while (frase[i] != '\0')
    {   
        //Tudo foi baseado na tabela ASCII
        if ((frase[i] >= 65 && frase[i] <= (90-skip)) || (frase[i] >= 97 && frase[i] <= (122-skip)))
            frase[i] += skip;
        else if((frase[i] > (90-skip) && frase[i] <= 90) || (frase[i] > (122-skip) && frase[i] <= 122))
            frase[i] = (frase[i] - 25) + skip;
        i++;
    }

    printf("\n\n");
    i = 0;
    while (frase[i] != '\0') {
        printf("%c", frase[i]);
        i++;
    }
    
	return 0;
}