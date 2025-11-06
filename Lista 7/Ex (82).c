/*
82. Faça um algoritmo que leia a nota de 10 alunos de uma turma e guarde-as em um vetor.
No final, mostre:
a) Qual é a média da turma
b) Quantos alunos estão acima da média da turma
c) Qual foi a maior nota digitada
d) Em que posições a maior nota aparece
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n[10], soma = 0, media = 0, maior = 0;
    int i, acima = 0;

    for (i = 0; i < 10; i++)
    {
        printf("\n|-Digite a nota do aluno %d:\n", i + 1);
        scanf("%f", &n[i]);
        soma += n[i];
        if (n[i] > maior)
        {
            maior = n[i];
        }
    }

    media = soma / 10.0;

    for (i = 0; i < 10; i++)
    {
        if (n[i] > media)
        {
            acima++;
        }
    }

    printf("\n|-Media da turma: %.2f\n", media);
    printf("|-Alunos acima da media: %d\n", acima);
    printf("|-Maior nota: %.2f\n", maior);
    printf("|-Posicoes com a maior nota:\n");

    for (i = 0; i < 10; i++)
    {
        if (n[i] == maior)
        {
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}
