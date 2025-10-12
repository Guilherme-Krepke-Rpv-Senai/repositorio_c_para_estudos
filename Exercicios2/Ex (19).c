//35. Aluguel de carro popular ou luxo, calcular preco.
#include <stdio.h>

int main() {
    char tipo;
    int dias;
    float km, preco;
    printf("Tipo (P-popular,L-luxo), dias, km: ");
    scanf(" %c %d %f", &tipo, &dias, &km);
    switch (tipo) {
        case 'P':
        case 'p':
            preco = dias * 90;
            switch (km <= 100) {
                case 1: preco += km * 0.2; break;
                default: preco += km * 0.1; break;
            }
            break;
        case 'L':
        case 'l':
            preco = dias * 150;
            switch (km <= 200) {
                case 1: preco += km * 0.3; break;
                default: preco += km * 0.25; break;
            }
            break;
    }
    printf("Preco total: R$%.2f\n", preco);
    return 0;
}
