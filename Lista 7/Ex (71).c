/*
71. Faça um programa que preencha automaticamente um vetor numérico com 8
posições, conforme abaixo:
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v[8], i;

    for (i = 0; i < 8; i++)
    {
        v[i] = i + 1;
    }

    for (i = 0; i < 8; i++)
    {
        printf("%d ", v[i]);
    }

    printf("\n");

    return 0;
}
