//21. Leia um ano e diga se e bissexto.
#include <stdio.h>

int main() {
    int ano;
    printf("Ano: ");
    scanf("%d", &ano);
    int bissexto = (ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0);
    switch (bissexto) {
        case 1:
            printf("Bissexto.\n");
            break;
        default:
            printf("Nao e bissexto.\n");
    }
    return 0;
}
