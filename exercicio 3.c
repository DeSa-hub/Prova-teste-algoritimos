#include <stdio.h>

int main()
{
    int n;
    long long int fatorial = 1;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("O fatorial nao esta definido para numeros negativos.\n");
    }
    else
    {
        for (int i = 2; i <= n; i++)
        {
            fatorial *= i;
        }
        printf("%d! = %llu\n", n, fatorial);
    }

    return 0;
}
