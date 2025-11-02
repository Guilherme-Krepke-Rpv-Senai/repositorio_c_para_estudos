// 55. Vamos melhorar o jogo que fizemos no exercício 32. A partir de agora, o computador
// vai sortear um número entre 1 e 10 e o jogador vai ter 4 tentativas para tentar acertar.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n1, chute, tentativas = 1;
    srand(time(NULL));
    n1 = rand() % 10 + 1;

    printf("Tente adivinhar o n1 entre 1 e 10!\n");

    while (tentativas <= 4) {
        printf("Tentativa %d: ", tentativas);
        scanf("%d", &chute);

        if (chute == n1) {
            printf("Parabens! Voce acertou!\n");
            break;
        } else {
            if (chute < n1)
                printf("Muito baixo!\n");
            else
                printf("Muito alto!\n");
        }

        tentativas++;
    }

    if (chute != n1)
        printf("Voce perdeu! O numero era %d.\n", n1);

    return 0;
}
