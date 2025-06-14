#include <stdio.h>
#include <stdlib.h>


void contagem ()
{
    int contador;

    for (contador = 1; contador <= 10; contador++)
    {
        printf("%d ", contador);
    }
}

int main()
{
    contagem();

    return 0;
}