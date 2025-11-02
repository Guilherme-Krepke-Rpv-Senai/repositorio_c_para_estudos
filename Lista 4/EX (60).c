// 60. Desenvolva um algoritmo que leia o nome, a idade e o sexo de várias pessoas. O
// programa vai perguntar se o usuário quer ou não continuar. No final, mostre:
// a) O nome da pessoa mais velha
// b) O nome da mulher mais jovem
// c) A média de idade do grupo
// d) Quantos homens tem mais de 30 anos
// e) Quantas mulheres tem menos de 18 anos

#include <stdio.h>
#include <string.h>

int main() {
    char nome[50], nomeMaisVelho[50], nomeMulherJovem[50];
    int idade, maiorIdade = 0, mulherMaisJovem = 0;
    int homens30 = 0, mulheres18 = 0, qtd = 0;
    float soma = 0;
    char sexo, cont = 'S';

    while (cont == 'S' || cont == 's') {
        printf("Nome: ");
        scanf("%49[^\n]", nome);
        printf("%Idade: ");
        scanf("%d", &idade);
        printf("Sexo (M/F): ");
        scanf(" %c", &sexo);

        soma += idade;
        qtd++;

        if (idade > maiorIdade) {
            maiorIdade = idade;
            strcpy(nomeMaisVelho, nome);
        }

        if (sexo == 'M' || sexo == 'm') {
            if (idade > 30)
                homens30++;
        } else if (sexo == 'F' || sexo == 'f') {
            if (mulherMaisJovem == 0 || idade < mulherMaisJovem) {
                mulherMaisJovem = idade;
                strcpy(nomeMulherJovem, nome);
            }
            if (idade < 18)
                mulheres18++;
        }

        printf("Deseja continuar? (S/N): ");
        scanf(" %c", &cont);
    }

    printf("\nPessoa mais velha: %s (%d anos)", nomeMaisVelho, maiorIdade);
    if (mulherMaisJovem > 0)
        printf("\nMulher mais jovem: %s (%d anos)", nomeMulherJovem, mulherMaisJovem);
    else
        printf("\nNao ha mulheres cadastradas.");
    printf("\nMedia de idade do grupo: %.2f", soma / qtd);
    printf("\nHomens com mais de 30 anos: %d", homens30);
    printf("\nMulheres com menos de 18 anos: %d\n", mulheres18);

    return 0;
}

