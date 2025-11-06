/*
89. Entrar com valores para uma matriz M2x2. Calcular e imprimir o determinante.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m[2][2], det;

    printf("\n|-Digite os valores da matriz 2x2:\n");

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("M[%d][%d]: ", i, j);
            scanf("%d", &m[i][j]);
        }
    }

    det = (m[0][0] * m[1][1]) - (m[0][1] * m[1][0]);

    printf("\n|-Determinante = %d\n", det);

    return 0;
}
