//20. Leia um numero inteiro e diga se e par ou impar.
#include <stdio.h>

int main() {
    int n;
    printf("Numero: ");
    scanf("%d", &n);
    switch (n % 2 == 0) {
        case 1:
            printf("Par.\n");
            break;
        default:
            printf("Impar.\n");
    }
    return 0;
}
