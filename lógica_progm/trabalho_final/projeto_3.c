#include <stdio.h>
#include <stdlib.h>

int Pordois (int numero)
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
int Portres (int numero)
{ 
    if (numero % 3 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int Porcinco (int numero)
{ 
    if (numero % 5 == 0)
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
    int numero;
    printf("Escreva um numero: ");
    scanf("\n %d", &numero);

    printf("Divisoes possiveis: \n");

    if (Pordois(numero))
    {
        printf("\nE divisivel por 2 \n");
    }
    else
    {
        printf("\nNao e divisivel por 2 \n");
    }

     if (Portres(numero))
    {
        printf("\nE divisivel por 3 \n");
    }
    else
    {
        printf("\nNao e divisivel por 3 \n");
    }

     if (Porcinco(numero))
    {
        printf("\nE divisivel por 5 \n");
    }
    else
    {
        printf("\nNao e divisivel por 5 \n");
    }

    return 0;
}

