#include <stdio.h>

int main()
{
    char c;
    int numLinhas = 0;

    FILE *f = fopen("name_age.txt", "r");

    if (f != NULL)
    {
        while (!feof(f))
        {
            if (fscanf(f, "%c", &c) == 1) {
                if (c == '\n')
                    numLinhas++;
            }
        }
        printf("numero de linhas: %d\n", numLinhas);        
    }
    
    
	return 0;
}