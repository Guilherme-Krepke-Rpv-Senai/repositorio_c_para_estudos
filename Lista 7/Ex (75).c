/*
75. Crie um programa que preencha automaticamente (usando lógica, não apenas
atribuindo diretamente) um vetor numérico com 15 posições com os primeiros
elementos da sequência de Fibonacci:
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v[15], i;

    v[0] = 1;
    v[1] = 1;

    for (i = 2; i < 15; i++)
    {
        v[i] = v[i - 1] + v[i - 2];
    }

    for (i = 0; i < 15; i++)
    {
        printf("%d ", v[i]);
    }

    printf("\n");

    return 0;
}
