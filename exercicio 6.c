#include <stdio.h>

int main()
{
    int ano;
    char genero;

    printf("Informe seu ano de nascimento: ");
    scanf("%d", &ano);

    ano = 2025 - ano;

    printf("\nInforme seu genero (ex.: masculino = m, feminino = f): ");
    scanf(" %c", &genero);

    if ((ano >= 18) && (genero == 'm'))
    {
        printf("\nVoce deve realizar o alistamento militar!!\n");
    }
    else if((ano < 18) && (genero == 'm'))
    {
        printf("\nVoce devera realizar o alistamento militar!!\n");
    }
    else if((ano >= 18) && (genero == 'f'))
    {
        printf("\nVoce pode se alistar mas nao e obrigatorio!!\n");
    }
    else
    {
        printf("\nDados invalidos!!\n");
    }

    return 0;
}
