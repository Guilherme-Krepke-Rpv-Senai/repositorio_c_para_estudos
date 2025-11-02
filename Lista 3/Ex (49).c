// Crie um programa que leia 6 números inteiros e no final mostre quantos
// deles são pares e quantos são ímpares.

#include <stdio.h>

int main()
{
    int i = 0, k = 0, j = 0, n1;
    while (i < 6)
    {
        printf("\nDigite um numero");
        scanf("%d", &n1);
        if (n1 % 2)
        {
            j++;
        }
        else
        {
            k++;
        }
        i++;
    }
    printf("\nTeve %d numeros pares e %d impares", j, k);

    return 0;
}