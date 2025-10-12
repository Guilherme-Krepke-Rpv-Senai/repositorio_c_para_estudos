//19. Leia nome, duas notas, calcule a media e diga se aproveitamento e >= 7.
#include <stdio.h>

int main() {
    char nome[50];
    float n1, n2, media;
    printf("Nome: ");
    scanf("%s", nome);
    printf("Nota 1: ");
    scanf("%f", &n1);
    printf("Nota 2: ");
    scanf("%f", &n2);
    media = (n1 + n2) / 2;
    printf("Media: %.2f\n", media);
    switch (media >= 7) {
        case 1:
            printf("Bom aproveitamento.\n");
            break;
        default:
            printf("Abaixo do esperado.\n");
    }
    return 0;
}
