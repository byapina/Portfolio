#include <stdio.h>

int main()
{
    int matricula, dia, hora;
    char* dias[] = {"segunda feira", "terca feira", "quarta feira", "quinta feira", "sexta feira",};
    
    printf("Digite a matricula do funcionario (de 1 a 30) \n");
    scanf ("%d", &matricula);
    
    dia = (matricula - 1)/ 6;
    hora = (matricula - 1)%6 + 8;
    
    printf("Sua consulta sera: \n %s as %d horas", dias[dia], hora);
    
    return 0 ;
}
