/*
80. Faça um algoritmo que preencha um vetor de 30 posições com números entre 1 e 15
sorteados pelo computador. Depois disso, peça para o usuário digitar um número
(chave) e seu programa deve mostrar em que posições essa chave foi encontrada.
Mostre também quantas vezes a chave foi sorteada.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int v[30], i, chave, cont = 0;

    srand(time(NULL));

    for (i = 0; i < 30; i++)
    {
        v[i] = (rand() % 15) + 1;
    }

    printf("\n|-Digite um numero chave (1 a 15):\n");
    scanf("%d", &chave);

    printf("\n|-Posicoes encontradas:\n");
    for (i = 0; i < 30; i++)
    {
        if (v[i] == chave)
        {
            printf("%d ", i);
            cont++;
        }
    }

    printf("\n|-O numero %d apareceu %d vez(es)\n", chave, cont);

    return 0;
}
