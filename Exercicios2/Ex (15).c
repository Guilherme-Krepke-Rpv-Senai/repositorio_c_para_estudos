//31. Jogo JoKenPo (Pedra, Papel, Tesoura)
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int jogador, pc;
    srand(time(NULL));
    pc = rand() % 3; // 0-Pedra,1-Papel,2-Tesoura
    printf("Escolha: 0-Pedra,1-Papel,2-Tesoura: ");
    scanf("%d", &jogador);
    switch ((3 + jogador - pc) % 3) {
        case 0:
            printf("Empate!\n");
            break;
        case 1:
            printf("Voce venceu!\n");
            break;
        case 2:
            printf("Voce perdeu!\n");
            break;
    }
    return 0;
}
