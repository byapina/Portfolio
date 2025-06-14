#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero, par;
    par = 0;

    printf("Digite aqui um numero inteiro: ");
    scanf("\n%d", &numero);

    while (par < numero)
    {
        par = par + 2 ;
        printf("%d ", par);
    }

    return 0;
}