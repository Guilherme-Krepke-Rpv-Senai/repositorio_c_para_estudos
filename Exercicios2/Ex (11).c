//27. Leia duas notas, calcule media e classifique: REPROVADO, RECUPERACAO ou APROVADO.
#include <stdio.h>

int main() {
    float n1, n2, media;
    printf("Notas: ");
    scanf("%f %f", &n1, &n2);
    media = (n1 + n2)/2;
    switch (media <= 4.9) {
        case 1:
            printf("REPROVADO\n");
            break;
        default:
            switch (media <= 6.9) {
                case 1:
                    printf("RECUPERACAO\n");
                    break;
                default:
                    printf("APROVADO\n");
            }
    }
    return 0;
}
