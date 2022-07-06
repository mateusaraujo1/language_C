//Em andamento
#include <stdio.h>
#include <stdlib.h>
#define tam 100

typedef struct {
    char nome[15];
    int telefone;
} contato;

int menu() {
    int option;
    char trash;
    printf("SELECIONE UMA OPÇÃO:\n");
    printf("(1) Salvar novo contato.\n");
    scanf("%d", &option);
    //scanf("%c", trash);
    return option;
}
    
void salvarContato(FILE *f) {
    char name[15];
    int phone;
    printf("\nNOME: ");
    scanf("%s", name);
    printf("\nTELEFONE: ");
    scanf("%d", &phone);
    f = fopen("agenda.txt", "a");
    fprintf(f, "%s#%d\n", name[15], phone);
    fclose(f);
}

int main()
{   
    int option;
    contato c[tam];
    FILE *f = fopen("agenda.txt", "r+");
    
    if(f == NULL) {
        FILE *f = fopen("agenda.txt", "w+"); }
        
    option = menu();
    
    fclose(f);
    switch(option){
        case 1:
            salvarContato(f);
            break;
        default:
            printf("número inválido");
            break;
        }
    return 0;
}