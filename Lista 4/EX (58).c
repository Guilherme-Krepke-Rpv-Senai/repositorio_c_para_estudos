// 58. Faça um algoritmo que leia a idade de vários alunos de uma turma. O programa vai parar
// quando for digitada a idade 999. No final, mostre quantos alunos existem na turma e
// qual é a média de idade do grupo.

#include <stdio.h>

int main() {
    int idade, qtd = 0;
    float soma = 0;

    printf("Digite as idades (999 para parar):\n");

    while (1) {
        scanf("%d", &idade);
        if (idade == 999)
            break;
        soma += idade;
        qtd++;
    }

    if (qtd > 0)
        printf("Alunos: %d | Media de idade: %.2f\n", qtd, soma / qtd);
    else
        printf("Nenhum aluno cadastrado.\n");

    return 0;
}
