#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int contaMinutos(int horaAtual, int minAtual, int horaAlarme, int minAlarme) {
    
    //duração do sono, HORAS
    int horaD = horaAlarme - horaAtual;
    if(horaD < 0)
        horaD = (24 - horaAtual) + horaAlarme;
        
    //duração do sono, MINUTOS
    int minD = minAlarme - minAtual;
    if(minD < 0) {
        minD = (60 - minAtual) + minAlarme;
        horaD--;
        }
        
    printf("Duração do sono: %02d:%02d", horaD, minD);
    printf("\nem minutos: %d", horaD*60+minD);
    
    if(horaD >= 6 && minD > 0)
        printf("\nO horário de sono passou de 6 horas!");
}

int main() {
    /*pegando a hora atual (em segundos) e armazenando
    em uma struct do time.h que converte automaticamente
    para horas e minutos*/
    struct tm *tempo;
    time_t segundos;
    time(&segundos);
    tempo = localtime(&segundos);
    
    int horaAtual = tempo -> tm_hour;
    int minAtual = tempo -> tm_min;
    printf("Hora atual: %d:%d", horaAtual, minAtual);
    
    //Armazenando a hora do alarme
    int horaAlarme, minAlarme;
    
    printf("\nHora e minuto do alarme:");
    scanf("%d %d", &horaAlarme, &minAlarme);
    //printf("%d:%d",horaAlarme, minAlarme);
    
    contaMinutos(horaAtual, minAtual, horaAlarme, minAlarme);
    return 0;
}