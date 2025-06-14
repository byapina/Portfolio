#include <stdio.h>
#include <stdlib.h>

int ehPar (int numero)
{
    if (numero % 2 == 0)
    {
        return 1;
    }
    else 
    {
        return 0;
    }

}

int main ()
{
    int numero, resultado;
    printf("1 simboliza par e 0 simboliza impar \n");
    printf("Escreva um numero para ver se ele e par ou impar: ");

    scanf("\n %d", &numero);

    resultado = ehPar(numero);
    printf("%d \n", resultado);

    return 0;
}

