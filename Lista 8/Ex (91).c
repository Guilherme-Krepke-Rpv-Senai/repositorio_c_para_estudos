/*
91. Criar um algoritmo que leia e armazene os elementos de uma matriz M1x10 inteira e
imprima a soma de todos os elementos das colunas pares.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m[1][10], i, soma = 0;

    for (i = 0; i < 10; i++)
    {
        printf("\n|-Digite o valor da coluna %d:\n", i);
        scanf("%d", &m[0][i]);
        if (i % 2 == 0)
        {
            soma += m[0][i];
        }
    }

    printf("\n|-Soma das colunas pares: %d\n", soma);

    return 0;
}
