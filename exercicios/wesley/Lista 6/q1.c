#include <stdio.h>
#include <math.h>

void calculaHexagono(float L, float *area, float *perimetro){
    
    *area=((3*pow(L,2))*sqrt(3))/2.0;

    *perimetro=6*L;
}

int main(){
    float L,area,perimetro;
    printf("Insira o tamanho do lado do hexagono: \n");
    scanf("%f",&L);
    calculaHexagono(L, &area, &perimetro);
    printf("Area: %.2f\n",area);
    printf("perimetro: %.0f\n",perimetro);
return 0;}