/*
79. Desenvolva um programa que leia 10 números inteiros e guarde-os em um vetor. No
final, mostre quais são os números pares que foram digitados e em que posições eles
estão armazenados.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v[10], i;

    for (i = 0; i < 10; i++)
    {
        printf("\n|-Digite um numero:\n");
        scanf("%d", &v[i]);
    }

    printf("\n|-Numeros pares e suas posicoes:\n");
    for (i = 0; i < 10; i++)
    {
        if (v[i] % 2 == 0)
        {
            printf("Posicao %d -> %d\n", i, v[i]);
        }
    }

    return 0;
}
