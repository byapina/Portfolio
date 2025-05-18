#include <stdio.h>
#include <string.h>

int nota_aula, indicar;
char disciplina[100];
int main ()
{
    printf("-------- AVALIACAO DAS AULAS ---------- \n");
    printf("\nIndique a sigla da disciplina que ira avaliar: ");
    fgets(disciplina, sizeof(disciplina), stdin);
    
    printf("\nQual nota, entre 0 e 10, voce daria para suas aulas e seu professor? \n");
    scanf("%d", &nota_aula);

    if (nota_aula < 5)
    {
        printf("\nIremos comunicar ao professor de %s e verificaremos oque podemos melhorar! \n ", disciplina);
    }
    else
    {
        printf("\nIndicaria esse curso para seus amigos? \n");
        printf("\nDigite 1 para sim e 0 para nao \n");
        scanf("%d", &indicar);

        if (indicar == 1)
    {
        printf("\nFicamos felizes em saber que voce indicaria esse curso! Obrigado pela avaliacao! \n");
    }
    
    }


    return 0;
}