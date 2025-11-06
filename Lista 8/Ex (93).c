/*
93. Entrar com valores para a matriz A3x4 e para matriz B4x5.
Gerar e imprimir a matriz produto.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[3][4], b[4][5], p[3][5], i, j, k;

    printf("\n|-Digite os valores da matriz A 3x4:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("\n|-Digite os valores da matriz B 4x5:\n");
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
        {
            p[i][j] = 0;
            for (k = 0; k < 4; k++)
            {
                p[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    printf("\n|-Matriz Produto:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("%d ", p[i][j]);
        }
        printf("\n");
    }

    return 0;
}
