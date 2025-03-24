#include <stdio.h>

int main()
{
    int voto, i;
    int votosB = 0, votosK = 0, votosZ = 0, votosNulos = 0, votosBrancos = 0;

    printf("Digite os votos dos 20 eleitores:\n");

    for (i = 0; i < 20; i++)
    {
        printf("Voto %d: ", i + 1);
        scanf("%d", &voto);

        if (voto == 1)
        {
            votosB++;
        }
        else if (voto == 2)
        {
            votosK++;
        }
        else if (voto == 3)
        {
            votosZ++;
        }
        else if (voto == 123)
        {
            votosNulos++;
        }
         else if (voto == 0)
        {
            votosBrancos++;
        }
        else
        {
            printf("Voto invalido!\n");
            i--;
        }
    }

    printf("\nResultado da Eleicao:\n");
    printf("Candidato B: %d votos\n", votosB);
    printf("Candidato K: %d votos\n", votosK);
    printf("Candidato Z: %d votos\n", votosZ);
    printf("Votos Nulos: %d\n", votosNulos);
    printf("Votos Brancos: %d\n", votosBrancos);

    return 0;
}
