//33. Aprovar ou nao emprestimo para compra de casa.
#include <stdio.h>

int main() {
    float valor, salario, prestacao;
    int anos;
    printf("Valor casa, salario, anos: ");
    scanf("%f %f %d", &valor, &salario, &anos);
    prestacao = valor / (anos * 12);
    switch (prestacao <= salario * 0.3) {
        case 1:
            printf("Emprestimo aprovado. Prestacao: R$%.2f\n", prestacao);
            break;
        default:
            printf("Emprestimo negado. Prestacao: R$%.2f\n", prestacao);
    }
    return 0;
}
