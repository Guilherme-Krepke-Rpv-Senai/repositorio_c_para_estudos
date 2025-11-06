/*
84. Crie um programa que leia o nome e a idade de 9 pessoas e guarde esses valores em
dois vetores, em posições relacionadas. No final, mostre uma listagem contendo apenas
os dados das pessoas menores de idade.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[9][50];
    int idade[9], i;

    for (i = 0; i < 9; i++)
    {
        printf("\n|-Digite o nome:\n");
        scanf(" %[^\n]", nome[i]);
        printf("\n|-Digite a idade:\n");
        scanf("%d", &idade[i]);
    }

    printf("\n|-Pessoas menores de idade:\n");
    for (i = 0; i < 9; i++)
    {
        if (idade[i] < 18)
        {
            printf("%s - %d anos\n", nome[i], idade[i]);
        }
    }

    return 0;
}
