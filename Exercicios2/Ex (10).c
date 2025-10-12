//26. Leia dois numeros inteiros e diga qual e maior ou se sao iguais.
#include <stdio.h>

int main() {
    int x, y;
    printf("Dois numeros: ");
    scanf("%d %d", &x, &y);
    switch (x > y) {
        case 1:
            printf("O primeiro valor e maior.\n");
            break;
        default:
            switch (x < y) {
                case 1:
                    printf("O segundo valor e maior.\n");
                    break;
                default:
                    printf("Nao existe valor maior, sao iguais.\n");
            }
    }
    return 0;
}
