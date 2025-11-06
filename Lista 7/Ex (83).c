/*
83. Crie uma lógica que preencha um vetor de 20 posições com números aleatórios (entre
0 e 99) gerados pelo computador. Logo em seguida, mostre os números gerados e
depois coloque o vetor em ordem crescente, mostrando no final os valores ordenados.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int v[20], i, j, aux;

    srand(time(NULL));

    for (i = 0; i < 20; i++)
    {
        v[i] = rand() % 100;
    }

    printf("\n|-Numeros gerados:\n");
    for (i = 0; i < 20; i++)
    {
        printf("%d ", v[i]);
    }

    for (i = 0; i < 19; i++)
    {
        for (j = i + 1; j < 20; j++)
        {
            if (v[j] < v[i])
            {
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
        }
    }

    printf("\n\n|-Numeros em ordem crescente:\n");
    for (i = 0; i < 20; i++)
    {
        printf("%d ", v[i]);
    }

    printf("\n");

    return 0;
}
