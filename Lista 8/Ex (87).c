/*
87. Entrar com valores para uma matriz A(3 x 4).
Gerar e imprimir uma matriz B que é o triplo da matriz A.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[3][4], b[3][4], i, j;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("\n|-Digite A[%d][%d]:\n", i, j);
            scanf("%d", &a[i][j]);
            b[i][j] = a[i][j] * 3;
        }
    }

    printf("\n|-Matriz B (triplo de A):\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }

    return 0;
}
