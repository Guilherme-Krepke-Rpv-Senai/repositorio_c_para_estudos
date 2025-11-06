/*
92. Criar um algoritmo que carregue uma matriz 12x4 com os valores das vendas de uma loja,
em que cada linha represente um mês do ano, e cada coluna, uma semana do mês. Calcule e
imprima:
• total vendido em cada mês do ano;
• total vendido em cada semana durante todo o ano;
• total vendido no ano.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float v[12][4], totalMes[12], totalSem[4], totalAno = 0;
    int i, j;

    for (i = 0; i < 12; i++)
    {
        printf("\n|-Mes %d:\n", i + 1);
        for (j = 0; j < 4; j++)
        {
            printf("Semana %d: ", j + 1);
            scanf("%f", &v[i][j]);
        }
    }

    for (i = 0; i < 12; i++)
    {
        totalMes[i] = 0;
        for (j = 0; j < 4; j++)
        {
            totalMes[i] += v[i][j];
        }
    }

    for (j = 0; j < 4; j++)
    {
        totalSem[j] = 0;
        for (i = 0; i < 12; i++)
        {
            totalSem[j] += v[i][j];
        }
    }

    for (i = 0; i < 12; i++)
    {
        totalAno += totalMes[i];
    }

    printf("\n|-Total vendido por mes:\n");
    for (i = 0; i < 12; i++)
    {
        printf("Mes %d: %.2f\n", i + 1, totalMes[i]);
    }

    printf("\n|-Total vendido por semana:\n");
    for (j = 0; j < 4; j++)
    {
        printf("Semana %d: %.2f\n", j + 1, totalSem[j]);
    }

    printf("\n|-Total vendido no ano: %.2f\n", totalAno);

    return 0;
}
