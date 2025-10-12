//36. Calcule pontos por horas de atividade e quanto dinheiro ganhou.
#include <stdio.h>

int main() {
    int horas, pontos;
    float dinheiro;
    printf("Horas de atividade: ");
    scanf("%d", &horas);
    switch (1) {
        case 1:
            if (horas <= 10) pontos = horas * 2;
            else if (horas <= 20) pontos = horas * 5;
            else pontos = horas * 10;
            dinheiro = pontos * 0.05;
            printf("Pontos: %d, Dinheiro ganho: R$%.2f\n", pontos, dinheiro);
            break;
    }
    return 0;
}
