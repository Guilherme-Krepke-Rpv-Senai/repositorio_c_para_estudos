// 56. Crie um programa que leia vários números pelo teclado e mostre no final o somatório
// entre eles. Obs: O programa será interrompido quando o número 1111 for digitado

#include <stdio.h>

int main() {
    int num, soma = 0;

    printf("Digite numeros (1111 para parar):\n");

    while (1) {
        scanf("%d", &num);
        if (num == 1111)
            break;
        soma += num;
    }

    printf("Somatorio: %d\n", soma);
    return 0;
}
