/*
69. Desenvolva um programa que leia o primeiro termo e a razão de uma PA (Progressão
Aritmética), mostrando na tela os 10 primeiros elementos da PA e a soma entre todos
os valores da sequência.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, primeiro, razao, termo, soma = 0;

    printf("\n|-Digite o primeiro termo da PA:\n");
    scanf("%d", &primeiro);
    printf("\n|-Digite a razao da PA:\n");
    scanf("%d", &razao);

    termo = primeiro;

    for (i = 0; i < 10; i++)
    {
        printf("%d ", termo);
        soma += termo;
        termo += razao;
    }

    printf("\n|-A soma dos termos foi: %d\n", soma);

    return 0;
}
