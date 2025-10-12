//25. Leia tres segmentos e diga se podem formar um triangulo.
#include <stdio.h>

int main() {
    float a, b, c;
    printf("Segmentos: ");
    scanf("%f %f %f", &a, &b, &c);
    int pode = (a < b + c && b < a + c && c < a + b);
    switch (pode) {
        case 1:
            printf("Pode formar um triangulo.\n");
            break;
        default:
            printf("Nao pode formar um triangulo.\n");
    }
    return 0;
}
