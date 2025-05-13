#include <iostream>
#include <math.h>

float conversao_hora(float segundos);
float conversao_minutos (float segundos);
float segundo_hora, segundo_minuto, segundos;


int main()
{
    printf("Indique os segundos: ");
    scanf("%f", &segundos);
    segundo_hora = conversao_hora(segundos);
    segundo_minuto = conversao_minutos(segundos);

    printf("Convertendo temos \nHoras: %.2f \nMinutos: %.2f", segundo_hora, segundo_minuto);

    return 0;
}

float conversao_hora(float segundos)
{
    float hora = segundos / 3600;
    return hora;
}

float conversao_minutos(float segundos)
{
    float minuto = segundos / 60;
    return minuto;
}
