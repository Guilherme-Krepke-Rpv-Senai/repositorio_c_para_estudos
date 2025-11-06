/*
68. Crie um programa que leia sexo e peso de 8 pessoas, usando a estrutura “para”. No final,
mostre na tela:
a) Quantas mulheres foram cadastradas
b) Quantos homens pesam mais de 100Kg
c) A média de peso entre as mulheres
d) O maior peso entre os homens
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, mulheres = 0, pshomens = 0;
    float ps[8], somapsm = 0, mediapsm = 0, maiorpsh = 0;
    char s[8];

    for (i = 0; i < 8; i++)
    {
        system("cls");
        printf("\n|-Qual seu sexo? M ou H\n");
        scanf(" %c", &s[i]);
        printf("\n|-Qual seu peso? EX: 100 (100kg)\n");
        scanf("%f", &ps[i]);

        if (s[i] == 'H' || s[i] == 'h')
        {
            if (ps[i] > 100)
            {
                pshomens++;
            }
            if (ps[i] > maiorpsh)
            {
                maiorpsh = ps[i];
            }
        }
        else if (s[i] == 'M' || s[i] == 'm')
        {
            mulheres++;
            somapsm += ps[i];
        }
    }

    if (mulheres > 0)
    {
        mediapsm = somapsm / mulheres;
    }

    printf("\n- Foram cadastradas %d mulher(es)\n", mulheres);
    printf("- Estao acima de 100kg %d homem(ns)\n", pshomens);
    printf("- A media de peso entre as mulheres foi de %.2fkg\n", mediapsm);
    printf("- O maior peso entre os homens foi de %.2fkg\n", maiorpsh);

    return 0;
}
