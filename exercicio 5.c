#include <stdio.h>

int main()
{
    int n, cont = 0, num = 3, i, primo1, primo2, primo;

    printf("Digite a quantidade de primos gemeos desejada: ");
    scanf("%d", &n);

    printf("Os primeiros %d pares de primos gemeos sao:\n", n);

    while (cont < n)
    {
        primo = 1;
        for (i = 2; i * i <= num; i++)
        {
            if (num % i == 0)
            {
                primo = 0;
                break;
            }
        }
        primo1 = primo;

        primo = 1;
        for (i = 2; i * i <= num + 2; i++)
        {
            if ((num + 2) % i == 0)
            {
                primo = 0;
                break;
            }
        }
        primo2 = primo;

        if (primo1 && primo2)
        {
            printf("(%d, %d)\n", num, num + 2);
            cont++;
        }
        num += 2;
    }

    return 0;
}
