// 59. Crie um programa que leia o sexo e a idade de várias pessoas. O programa vai perguntar
// se o usuário quer continuar ou não a cada pessoa. No final, mostre:
// a) qual é a maior idade lida
// b) quantos homens foram cadastrados
// c) qual é a idade da mulher mais jovem
// d) qual é a média de idade entre os homens

#include <stdio.h>

int main() {
    int idade, maiorIdade = 0, homens = 0, qtdHomens = 0;
    float somaHomens = 0;
    int mulherMaisJovem = 0;
    char sexo, cont = 'S';

    while (cont == 'S' || cont == 's') {
        printf("Idade: ");
        scanf("%d", &idade);
        printf("Sexo (M/F): ");
        scanf(" %c", &sexo);

        if (idade > maiorIdade)
            maiorIdade = idade;

        if (sexo == 'M' || sexo == 'm') {
            homens++;
            somaHomens += idade;
            qtdHomens++;
        } else if (sexo == 'F' || sexo == 'f') {
            if (mulherMaisJovem == 0 || idade < mulherMaisJovem)
                mulherMaisJovem = idade;
        }

        printf("Deseja continuar? (S/N): ");
        scanf(" %c", &cont);
    }

    printf("\nMaior idade: %d", maiorIdade);
    printf("\nHomens cadastrados: %d", homens);
    if (mulherMaisJovem > 0)
        printf("\nIdade da mulher mais jovem: %d", mulherMaisJovem);
    else
        printf("\nNao ha mulheres cadastradas.");
    if (qtdHomens > 0)
        printf("\nMedia de idade dos homens: %.2f\n", somaHomens / qtdHomens);
    else
        printf("\nNao ha homens cadastrados.\n");

    return 0;
}
