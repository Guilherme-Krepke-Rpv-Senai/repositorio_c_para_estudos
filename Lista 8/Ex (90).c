/*
90. Criar um algoritmo que possa armazenar as alturas de dez atletas de cinco delegações que
participarão dos jogos de verão. Imprimir a maior altura de cada delegação.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a[5][10], maior;
    int i, j;

    for (i = 0; i < 5; i++)
    {
        printf("\n|-Delegacao %d:\n", i + 1);
        for (j = 0; j < 10; j++)
        {
            printf("Altura do atleta %d: ", j + 1);
            scanf("%f", &a[i][j]);
        }
    }

    for (i = 0; i < 5; i++)
    {
        maior = a[i][0];
        for (j = 1; j < 10; j++)
        {
            if (a[i][j] > maior)
            {
                maior = a[i][j];
            }
        }
        printf("\n|-Maior altura da delegacao %d: %.2f\n", i + 1, maior);
    }

    return 0;
}
