#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]){
    char comando[120];
    
    sprintf(comando, "gcc %s.c -o %s", argv[1], argv[1]);
    printf("%s\n", comando);
    system(comando);
	
    return 0;
}