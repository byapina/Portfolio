#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b, c, delta, x1, x2;
    printf("Digite os valores de a, b e c: ");
    scanf("%f %f %f", &a, &b, &c);   
    delta = b*b - 4*a*c;
    printf("O valor de delta é %.2f \n", delta);
    if (delta>=0)
    {
        x1= (-b + sqrt(delta))/(2*a);
        x2= (-b - sqrt(delta))/(2*a);
        printf("x1 vale: %.2f \nx2 vale: %.2f", x1, x2);
    }
    else
    {
        printf("Nao existe raiz real");
    }

    return 0;
}
