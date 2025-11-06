/*
81. Crie um programa que leia a idade de 8 pessoas e guarde-as em um vetor. No final,
mostre:
a) Qual é a média de idade das pessoas cadastradas
b) Em quais posições temos pessoas com mais de 25 anos
c) Qual foi a maior idade digitada (pode haver repetições)
d) Em que posições digitamos a maior idade
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, id[8], soma = 0, maior = 0;
    float media = 0;

    for (i = 0; i < 8; i++)
    {
        printf("\n|-Digite a idade %d:\n", i + 1);
        scanf("%d", &id[i]);
        soma += id[i];
        if (id[i] > maior)
        {
            maior = id[i];
        }
    }

    media = soma / 8.0;

    printf("\n|-Media de idade: %.2f\n", media);
    printf("|-Posicoes com mais de 25 anos:\n");
    for (i = 0; i < 8; i++)
    {
        if (id[i] > 25)
        {
            printf("%d ", i);
        }
    }

    printf("\n|-Maior idade: %d\n", maior);
    printf("|-Posicoes com a maior idade:\n");
    for (i = 0; i < 8; i++)
    {
        if (id[i] == maior)
        {
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}
