//22. Leia ano de nascimento e informe situacao do alistamento militar.
#include <stdio.h>

int main() {
    int ano, idade;
    printf("Ano de nascimento: ");
    scanf("%d", &ano);
    idade = 2025 - ano;
    switch (idade < 18) {
        case 1:
            printf("Faltam %d anos para o alistamento.\n", 18 - idade);
            break;
        default:
            switch (idade > 18) {
                case 1:
                    printf("%d anos de atraso no alistamento.\n", idade - 18);
                    break;
                default:
                    printf("Hora exata de se alistar.\n");
            }
    }
    return 0;
}
