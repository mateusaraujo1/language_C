/*Questão 5
Saber quantos minutos eu teria de sono se adormecesse imediatamente
e acordasse somente quando o despertador tocasse.
Dada a hora corrente e a hora do alarme, determine o número de minutos que eu poderia dormir.
Implemente a função 𝗰𝗼𝗻𝘁𝗮𝗠𝗶𝗻𝘂𝘁𝗼𝘀() que recebe como parâmetros quatro números inteiros representando,
respectivamente, a hora e minutos atuais, e a hora e minutos do alarme. 
A função retorna a quantidade de minutos entre o alarme e o horário atual.
OBS: eu não posso dormir demais, então se o intervalo de sono for maior que 6h, por favor me avise.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void contaMinutos(int , int , int , int );
int main() {
    srand(time(NULL));
    int h1, m1, h2, m2;

    h1 = rand()%24;
    h2 = rand()%24;
    m1 = rand()%60;
    m2 = rand()%60;

    printf("Hora e Minuto - Atuais: %d:%d\n",h1,m1);
    printf("Hora e Minuro - Relogio: %d:%d\n",h2,m2);

    contaMinutos(h1, m1, h2, m2);

    return 0;
}

void contaMinutos(int h1, int h2, int m1, int m2) {
    int x, y, r;
    x=h1*60+m1;
    y=h2*60+m2;   

    if(x>y){y = y + 1440;}

    r=y-x;

    if(r<=360){
        printf("Minutos de sono: %d\n", r);
    }else{
        printf("Minutos de sono: %d\n", r);
        printf("Mais de 6 horas de sono\n");
    }
}