#include <stdio.h>
#include <stdlib.h>
int usuario, produto, saldo;
char frete;
char expresso = 'e';
char seguro = 's';

int main()
{
    printf("Para responder as perguntas considere 1 para sim e 0 para nao \n");
    printf("\nO usuario ja esta logado? \n ");
    scanf("%d", &usuario);
    printf("\nO produto esta disponivel? \n");
    scanf("%d", &produto);
    printf("\nO saldo e suficiente? \n");
    scanf("%d", &saldo);

    if (usuario == 1 && produto == 1 && saldo == 1)
    {
        printf("\nSeu pedido foi realizado e esta sendo preparado para a entrega! \n");
    }
    else 
    {
        printf("\nErro durante o pedido, revise para que possamos continuar ;) \n");
        exit(0);
    }

    printf("\nDeseja adicionar frete expresso ou seguro? \n");
    printf("\nDigite 'e' para expresso e 's' para seguro \n");
    scanf(" %c", &frete);
    if (frete == expresso)
    {
        printf("\nVoce escolheu frete expresso!! \n ");
    }
    else
    {
        printf("\nVoce escolheu frete seguro!! \n");
    }

    printf("\nSeu pedido foi realizado e esta sendo preparado para a entrega! \n");
    printf("\nObrigado por comprar conosco! \n");
    return 0;
}