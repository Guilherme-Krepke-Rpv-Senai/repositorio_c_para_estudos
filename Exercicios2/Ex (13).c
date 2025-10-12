//29. Leia nome, salario e anos de empresa; calcule novo salario conforme tabela.
#include <stdio.h>

int main() {
    char nome[50];
    float salario, novo;
    int anos;
    printf("Nome, salario, anos: ");
    scanf("%s %f %d", nome, &salario, &anos);
    switch (anos <= 3) {
        case 1:
            novo = salario * 1.03;
            break;
        default:
            switch (anos < 10) {
                case 1:
                    novo = salario * 1.125;
                    break;
                default:
                    novo = salario * 1.20;
            }
    }
    printf("Novo salario: R$%.2f\n", novo);
    return 0;
}
