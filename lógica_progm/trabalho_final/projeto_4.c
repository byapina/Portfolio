#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Adicione um numero inteiro:");
    scanf("\n%d", &n);

    if (n > 0)
    { 
        printf("\n%d e positivo", n);
    }
    else
    {
        if (n < 0)
        {
        printf("\n%d e negativo", n);
        }
    else
        {
        if (n == 0)
        {
            printf("\n%d e igual a 0", n);
        }
        }
    }

    return 0;
}