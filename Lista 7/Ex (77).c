/*
77. Faça um programa que leia 7 nomes de pessoas e guarde-os em um vetor. No final,
mostre uma listagem com todos os nomes informados, na ordem inversa daquela em
que eles foram informados.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nomes[7][50];
    int i;

    for (i = 0; i < 7; i++)
    {
        printf("\n|-Digite o nome %d:\n", i + 1);
        scanf(" %[^\n]", nomes[i]);
    }

    printf("\n|-Nomes na ordem inversa:\n");

    for (i = 6; i >= 0; i--)
    {
        printf("%s\n", nomes[i]);
    }

    return 0;
}
