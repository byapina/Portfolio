#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero, contador;
    contador = 0;

    printf("Digite aqui um numero inteiro: ");
    scanf("\n%d", &numero);

    while (numero != 0)
    {
        contador = contador + numero;

        printf("Digite mais um numero (ou 0 para parar): ");
        scanf("\n%d", &numero);
    }

    printf("\nA soma dos numeros informados e: %d\n", contador);

    return 0;
}