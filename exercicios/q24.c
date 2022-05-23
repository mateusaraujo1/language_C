#include <stdio.h>
#include <stdlib.h>
#define tam 50

struct dados
{
    char name[20];
    int age;
};

void mostrar(struct dados d[tam]) {

    for (int i = 0; i < tam; i++)
    {   
        printf("\nNome: %s", d[i].name);
        printf("\nIdade: %d\n", d[i].age);
    }
}

int main()
{   
	struct dados d[tam];

    for (int i = 0; i < tam; i++)
    {   
        scanf("%s", d[i].name);
	    scanf("%d", &d[i].age);
    }

    mostrar(d);

    int maisVelho = d[0].age;
    int maisNovo = d[0].age;
    int velho, jovem;

    for (int i = 0; i < tam; i++)
    {
        if(d[i].age > maisVelho) {
            maisVelho = d[i].age;
            velho = i;
        }
        
        if(d[i].age < maisNovo) {
            maisNovo = d[i].age;
            jovem = i;
        }
    }
    
    printf("O mais velho é o %s com %d anos.\n O mais novo é o %s com %d anos", d[velho].name, d[velho].age, d[jovem].name, d[jovem].age);
    
	return 0;
}