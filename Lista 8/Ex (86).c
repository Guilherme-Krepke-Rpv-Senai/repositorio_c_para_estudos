/*
86. Criar um algoritmo que armazene dados em uma matriz de ordem 5 e imprima:
toda a matriz e a matriz gerada só com números ímpares.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m[5][5], i, j;

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("\n|-Digite um numero:\n");
            scanf("%d", &m[i][j]);
        }
    }

    printf("\n|-Matriz completa:\n");
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }

    printf("\n|-Matriz com impares:\n");
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (m[i][j] % 2 != 0)
                printf("%d ", m[i][j]);
            else
                printf("0 ");
        }
        printf("\n");
    }

    return 0;
}
