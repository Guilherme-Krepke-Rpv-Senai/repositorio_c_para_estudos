//28. Leia largura e comprimento de um terreno, calcule area e classifique.
#include <stdio.h>

int main() {
    float largura, comprimento, area;
    printf("Largura e comprimento: ");
    scanf("%f %f", &largura, &comprimento);
    area = largura * comprimento;
    switch (area < 100) {
        case 1:
            printf("Area: %.2f m2 - TERRENO POPULAR\n", area);
            break;
        default:
            switch (area <= 500) {
                case 1:
                    printf("Area: %.2f m2 - TERRENO MASTER\n", area);
                    break;
                default:
                    printf("Area: %.2f m2 - TERRENO VIP\n", area);
            }
    }
    return 0;
}
