#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    printf("Escreva dois numeros inteiros para realizar comparacoes:");
    scanf("%d", &a);
    scanf("%d", &b);

    if (a < b)
    {
        printf("%d e maior que %d", b, a);
    }
    else
    {
        printf("%d e maior que %d", a, b);
    }

    return 0;
}