#include <stdio.h>
#include <stdlib.h>


void tabuada (int i)
{
    int multiplicador;
    for (multiplicador = 1; multiplicador <=10; multiplicador ++)
    {
        printf("%d x %d = %d \n",i, multiplicador, i*multiplicador);
    }
}

int main()
{
    int i;
    printf("Escreva um numero para ver sua tabuada: ");
    scanf("\n%d", &i);
    tabuada(i);

    return 0;
}