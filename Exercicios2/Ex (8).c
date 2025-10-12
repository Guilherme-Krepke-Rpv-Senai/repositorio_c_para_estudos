//24. Leia distancia e calcule preco da passagem (0.50 ate 200Km, senao 0.45).
#include <stdio.h>

int main() {
    float d, preco;
    printf("Distancia (Km): ");
    scanf("%f", &d);
    switch (d <= 200) {
        case 1:
            preco = d * 0.50;
            break;
        default:
            preco = d * 0.45;
    }
    printf("Preco: R$%.2f\n", preco);
    return 0;
}
