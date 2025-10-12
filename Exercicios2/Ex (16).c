//32. Computador sorteia numero 1 a 5, jogador tenta acertar.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int pc, jogador;
    srand(time(NULL));
    pc = rand() % 5 + 1;
    printf("Tente adivinhar (1 a 5): ");
    scanf("%d", &jogador);
    switch (jogador == pc) {
        case 1:
            printf("Acertou! Era %d.\n", pc);
            break;
        default:
            printf("Errou! Era %d.\n", pc);
    }
    return 0;
}
