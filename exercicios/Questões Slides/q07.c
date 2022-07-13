#include <stdio.h> 
 
int main() { 
    float divisor, cont; 
    int N, aux; 
 
    printf("Digite um numero: "); 
    scanf("%d", &N); 
 
    for (cont = 1; cont <= N; cont++) { 
 
        divisor = N / cont; 
        aux = divisor; 
 
        if (aux == divisor) { 
        
            printf("%.0f\n", divisor);
             
        } 
         
    } 
 
    return 0; 
}