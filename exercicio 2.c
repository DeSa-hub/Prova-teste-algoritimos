#include <stdio.h>

int main()
{
    int dia, mes, ano;

    printf("Informe o dia do seu nascimento: ");
    scanf("%d", &dia);

    printf("\nInforme o mes do seu nascimento: (ex. janeiro = 1, fevereiro = 2): ");
    scanf("%d", &mes);

    printf("\nInforme o ano do seu nascimento:");
    scanf("%d", &ano);

    if ((mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12) && (dia <= 31 && dia >= 1))
    {
        printf("\nData valida!!\n");
    }
    else if ((mes == 2) && (dia <= 28 && dia >= 1))
    {
        printf("\nData valida!!\n");
    }
    else if ((mes == 4 || mes == 6 || mes == 9 || mes == 11) && (dia <= 30 && dia >= 1))
    {
        printf("\nData valida!!\n");
    }
    else
    {
        printf("\nData invalida!!\n");
    }

    return 0;
}
