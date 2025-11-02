// 53. Faça um programa que leia a idade e o sexo de 5 pessoas, mostrando no final:
// a) Quantos homens foram cadastrados
// b) Quantas mulheres foram cadastradas
// c) A média de idade do grupo
// d) A média de idade dos homens
// e) Quantas mulheres tem mais de 20 anos
#include <stdio.h>

int main() {
    int i = 1, id, hom = 0, mulh = 0, mulh20 = 0;
    char sexo;
    float somaid = 0, somahom = 0;
    int qtdhom = 0;

    while (i <= 5) {
        printf("Pessoa %d\n", i);
        printf("Idade: ");
        scanf("%d", &id);
        printf("Sexo (M/F): ");
        scanf(" %c", &sexo);

        somaid += id;

        if (sexo == 'M' || sexo == 'm') {
            hom++;
            somahom += id;
            qtdhom++;
        } else if (sexo == 'F' || sexo == 'f') {
            mulh++;
            if (id > 20) {
                mulh20++;
            }
        }

        i++;
    }

    printf("\nHomens cadastrados: %d", hom);
    printf("\nMulheres cadastradas: %d", mulh);
    printf("\nMedia de idade do grupo: %.2f", somaid / 5);
    if (qtdhom > 0)
        printf("\nMedia de idade dos homens: %.2f", somahom / qtdhom);
    else
        printf("\nNao ha homens para calcular a media.");
    printf("\nMulheres com mais de 20 anos: %d\n", mulh20);

    return 0;
}
