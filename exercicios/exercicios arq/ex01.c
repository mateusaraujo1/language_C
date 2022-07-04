#include <stdio.h>
#include <stdlib.h>

int main()
{   
    char nome[15];
    int age;
    FILE *f = fopen("name_age.txt", "r");

    if (f != NULL)
    {   
        while(!feof(f)) {
            fscanf(f, "%s%d", &nome, &age);
            printf("%s %d\n", nome, age);
        }
    }
    fclose(f);
    
	return 0;
}