//17. Pergunte a velocidade e, se passar de 80, mostre multa de 5 reais por km excedente.
#include <stdio.h>

int main() {
    float v;
    printf("Velocidade: ");
    scanf("%f", &v);
    switch (v > 80) {
        case 1:
            printf("Multado! Valor: R$%.2f\n", (v - 80) * 5);
            break;
        default:
            printf("Dentro do limite.\n");
    }
    return 0;
}
