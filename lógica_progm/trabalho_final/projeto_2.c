#include <stdio.h>
#include <stdlib.h>

int main()
{
    float valor, desconto;
    printf("Informe o valor a receber o desconto de 10 por cento \n");
    scanf("%f", &valor);
    desconto = valor - (valor * 0.1);
    printf("O valor ficou R$%.2f", desconto);

    return 0;
}