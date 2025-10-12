//23. Leia nome, sexo e valor das compras e aplique desconto (H=5%, M=13%).
#include <stdio.h>

int main() {
    char nome[50], sexo;
    float valor, total;
    printf("Nome: ");
    scanf("%s", nome);
    printf("Sexo (M/F): ");
    scanf(" %c", &sexo);
    printf("Valor das compras: ");
    scanf("%f", &valor);
    switch (sexo) {
        case 'M':
        case 'm':
            total = valor * 0.87;
            break;
        case 'F':
        case 'f':
            total = valor * 0.95;
            break;
        default:
            total = valor;
    }
    printf("Total com desconto: R$%.2f\n", total);
    return 0;
}
