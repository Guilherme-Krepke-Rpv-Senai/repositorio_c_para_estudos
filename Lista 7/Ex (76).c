/*
76. Crie um programa que preencha automaticamente um vetor numérico com 7 números
gerados aleatoriamente pelo computador e depois mostre os valores gerados na tela.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int v[7], i;

    srand(time(NULL));

    for (i = 0; i < 7; i++)
    {
        v[i] = rand() % 100;
    }

    for (i = 0; i < 7; i++)
    {
        printf("%d ", v[i]);
    }

    printf("\n");

    return 0;
}
