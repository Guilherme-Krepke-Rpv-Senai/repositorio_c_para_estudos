// 50. Desenvolva um programa que faça o sorteio de 20 números entre
// 0 e 10 e mostre na tela:
// a) Quais foram os números sorteados
// b) Quantos números estão acima de 5
// c) Quantos números são divisíveis por 3

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int i = 0, j = 0, k = 0;
    while (i < 20)
    {
        int numero = rand() % 11;

        printf("\n|->Numero aleatorio: %d\n", numero);

        if (numero >= 5)
        {
            j++;
        }
        else if (numero % 3 == 0)
        {
            k++;
        }

        i++;
    }
    printf("\n|-> Acima de 5 tem %d\n|-E divisiveis por 3 tem %d",j,k);
    return 0;
}
