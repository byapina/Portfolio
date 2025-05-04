#include <stdio.h>
     void recebeTemperatura ()
{
    float temperatura [8];
    for (int i = 0; i < 8 ; i ++){

        printf("Digite a temperatura as %dh: ", i+9);
        scanf("%f", &temperatura[0]);
    }

}


int main()
{
   recebeTemperatura();

    return 0;
}

