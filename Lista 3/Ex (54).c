// 54. Desenvolva um aplicativo que leia o peso e a altura de 7 pessoas, mostrando no final:
// a) Qual foi a média de altura do grupo
// b) Quantas pessoas pesam mais de 90Kg
// c) Quantas pessoas que pesam menos de 50Kg tem menos de 1.60m
// d) Quantas pessoas que medem mais de 1.90m pesam mais de 100Kg.
#include <stdio.h>

int main() {
    int i = 1, mais90 = 0, menos50e160 = 0, altpesado = 0;
    float peso, altura, somaalt = 0;

    while (i <= 7) {
        printf("Pessoa %d\n", i);
        printf("Peso (Kg): ");
        scanf("%f", &peso);
        printf("Altura (m): ");
        scanf("%f", &altura);

        somaalt += altura;

        if (peso > 90)
            mais90++;
        if (peso < 50 && altura < 1.60)
            menos50e160++;
        if (altura > 1.90 && peso > 100)
            altpesado++;

        i++;
    }

    printf("\nMedia de altura do grupo: %.2f", somaalt / 7);
    printf("\nPessoas com mais de 90Kg: %d", mais90);
    printf("\nPessoas com menos de 50Kg e menos de 1.60m: %d", menos50e160);
    printf("\nPessoas com mais de 1.90m e mais de 100Kg: %d\n", altpesado);

    return 0;
}
