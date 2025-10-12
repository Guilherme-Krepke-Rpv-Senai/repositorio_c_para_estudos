//18. Leia ano de nascimento, calcule idade e diga se pode votar.
#include <stdio.h>

int main() {
    int ano, idade;
    printf("Ano de nascimento: ");
    scanf("%d", &ano);
    idade = 2025 - ano;
    switch (idade >= 16) {
        case 1:
            printf("Pode votar.\n");
            break;
        default:
            printf("Nao pode votar.\n");
    }
    return 0;
}
