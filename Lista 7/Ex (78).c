/*
78. Escreva um programa que leia 15 números e guarde-os em um vetor. No final, mostre
o vetor inteiro na tela e em seguida mostre em que posições foram digitados valores
que são múltiplos de 10.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v[15], i;

    for (i = 0; i < 15; i++)
    {
        printf("\n|-Digite um numero:\n");
        scanf("%d", &v[i]);
    }

    printf("\n|-Vetor completo:\n");
    for (i = 0; i < 15; i++)
    {
        printf("%d ", v[i]);
    }

    printf("\n\n|-Posicoes com multiplos de 10:\n");
    for (i = 0; i < 15; i++)
    {
        if (v[i] % 10 == 0)
        {
            printf("Posicao %d -> %d\n", i, v[i]);
        }
    }

    return 0;
}
