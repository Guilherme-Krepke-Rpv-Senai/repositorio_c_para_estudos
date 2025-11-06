/*
85. Faça um algoritmo que leia o nome, o sexo e o salário de 5 funcionários e guarde esses
dados em três vetores. No final, mostre uma listagem contendo apenas os dados das
funcionárias mulheres que ganham mais de R$5 mil.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[5][50], sexo[5];
    float sal[5];
    int i;

    for (i = 0; i < 5; i++)
    {
        printf("\n|-Digite o nome:\n");
        scanf(" %[^\n]", nome[i]);
        printf("\n|-Digite o sexo (M/F):\n");
        scanf(" %c", &sexo[i]);
        printf("\n|-Digite o salario:\n");
        scanf("%f", &sal[i]);
    }

    printf("\n|-Mulheres com salario acima de 5000:\n");
    for (i = 0; i < 5; i++)
    {
        if ((sexo[i] == 'F' || sexo[i] == 'f') && sal[i] > 5000)
        {
            printf("%s - R$%.2f\n", nome[i], sal[i]);
        }
    }

    return 0;
}
