//OBS.: ainda não terminei essa :(

#include <stdio.h>
#include <stdlib.h>

struct Paciente
{
    int codPac;
    char nome[15];
    char endereco[15];
    int fone;
};

struct Medico
{
    int codMed;
    char nome[15];
    char endereco[15];
    int fone;
};

struct Consulta
{
    int numConsulta;
    char dia_semana[7];
    char hora[5];
    int codPac;
    int codMed;
};

void cadastrarPaciente(struct Paciente p[5]) {
    for (int i = 0; i < 5; i++)
    {   
        printf("\n----- PACIENTE %d -----", i);

        printf("\ncodigo: ");
        scanf("%d", &p[i].codPac);
        scanf("%*c");

        printf("\nnome: ");
        scanf("%[^\n]", p[i].nome);
        scanf("%*c");

        printf("\nendereco: ");
        scanf("%[^\n]", p[i].endereco);
        scanf("%*c");

        printf("\nfone: ");
        scanf("%d", &p[i].fone);
        scanf("%*c");
    }
}

void cadastrarMedico(struct Medico m[3]) {
    for (int i = 0; i < 3; i++)
    {   
        printf("\n----- MEDICO %d -----", i);

        printf("\ncodigo: ");
        scanf("%d", &m[i].codMed);
        scanf("%*c");

        printf("\nnome: ");
        scanf("%[^\n]", m[i].nome);
        scanf("%*c");

        printf("\nendereco: ");
        scanf("%[^\n]", m[i].endereco);
        scanf("%*c");

        printf("\nfone: ");
        scanf("%d", &m[i].fone);
        scanf("%*c");
    }
}

int main()
{
    struct Paciente p[5];
    struct Medico m[3];
    struct Consulta c[30];

    cadastrarPaciente(p);
    
	return 0;
}