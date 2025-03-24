#include <stdio.h>

int main()
{
    int numeros[10], i, j, temp;

    printf("Digite 10 numeros inteiros:\n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &numeros[i]);
    }

    for (i = 0; i < 10; i++)
    {
        for (j = i + 1; j < 10; j++)
        {
            if (numeros[i] > numeros[j])
            {
                temp = numeros[i];
                numeros[i] = numeros[j];
                numeros[j] = temp;
            }
        }
    }

    printf("\nNumeros em ordem crescente:\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", numeros[i]);
    }

    return 0;
}
