// 57. Desenvolva um aplicativo que leia o salário e o sexo de vários funcionários. No final,
// mostre o total de salários pagos aos homens e o total pago às mulheres. O programa vai
// perguntar ao usuário se ele quer continuar ou não sempre que ler os dados de um
// funcionário.

#include <stdio.h>

int main() {
    float salario, totalHomens = 0, totalMulheres = 0;
    char sexo, cont = 'S';

    while (cont == 'S' || cont == 's') {
        printf("Salario: ");
        scanf("%f", &salario);
        printf("Sexo (M/F): ");
        scanf(" %c", &sexo);

        if (sexo == 'M' || sexo == 'm')
            totalHomens += salario;
        else if (sexo == 'F' || sexo == 'f')
            totalMulheres += salario;

        printf("Deseja continuar? (S/N): ");
        scanf(" %c", &cont);
    }

    printf("\nTotal pago aos homens: R$%.2f", totalHomens);
    printf("\nTotal pago as mulheres: R$%.2f\n", totalMulheres);

    return 0;
}
