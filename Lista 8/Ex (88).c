/*
88. Entrar com valores inteiros para uma matriz A[4][4] e para uma matriz B[4][4].
Gerar e imprimir a matriz SOMA[4][4].
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[4][4], b[4][4], s[4][4], i, j;

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("\n|-Digite A[%d][%d]:\n", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("\n|-Digite B[%d][%d]:\n", i, j);
            scanf("%d", &b[i][j]);
            s[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("\n|-Matriz Soma:\n");
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%d ", s[i][j]);
        }
        printf("\n");
    }

    return 0;
}
