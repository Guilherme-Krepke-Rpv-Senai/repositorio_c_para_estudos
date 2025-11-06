/*
74. Crie um programa que preencha automaticamente (usando lógica, não apenas
atribuindo diretamente) um vetor numérico com 10 posições, conforme abaixo:
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v[10], i;

    for (i = 0; i < 10; i++)
    {
        v[i] = 10 - i;
    }

    for (i = 0; i < 10; i++)
    {
        printf("%d ", v[i]);
    }

    printf("\n");

    return 0;
}
