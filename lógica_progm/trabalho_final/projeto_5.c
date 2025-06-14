#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade;
    printf("Informe idade:");
    scanf("\n%d", &idade);

    if (idade < 18)
    {
        printf("\nMenor de idade");
    }
    else
    {
        if (idade >= 18 && idade <= 60)
        { 
            printf("Adulto");
        }
        else
        {
            if (idade > 60)
            {
                printf("Idoso");
            }
        }
    }

    return 0;
}