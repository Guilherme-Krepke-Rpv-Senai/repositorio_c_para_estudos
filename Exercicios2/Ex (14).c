//30. Leia tres segmentos, veja se formam triangulo e qual tipo.
#include <stdio.h>

int main() {
    float a, b, c;
    printf("Segmentos: ");
    scanf("%f %f %f", &a, &b, &c);
    int pode = (a < b + c && b < a + c && c < a + b);
    switch (pode) {
        case 1:
            if (a == b && b == c)
                printf("Triangulo EQUILATERO\n");
            else if (a == b || b == c || a == c)
                printf("Triangulo ISOSCELES\n");
            else
                printf("Triangulo ESCALENO\n");
            break;
        default:
            printf("Nao forma triangulo.\n");
    }
    return 0;
}
