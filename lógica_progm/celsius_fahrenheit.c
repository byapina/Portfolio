#include <stdio.h>

float temp_celcius, temp_fahrenheit;
int main()
{
   printf("Digite a temperatura em graus Celsius \n");
   scanf("%f", &temp_celcius);
   temp_fahrenheit = (9*temp_celcius+160)/5 ;
   printf("A temperatura em Fahrenheit e %4.4f", temp_fahrenheit);
    return 0;
}
