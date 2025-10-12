//37. Reajuste salarial baseado em genero e anos de empresa.
#include <stdio.h>

int main() {
    char genero;
    float salario, novo;
    int anos;
    printf("Genero (M/F), salario, anos: ");
    scanf(" %c %f %d", &genero, &salario, &anos);
    switch (genero) {
        case 'F':
        case 'f':
            switch (1) {
                case 1:
                    if (anos < 15) novo = salario * 1.05;
                    else if (anos <= 20) novo = salario * 1.12;
                    else novo = salario * 1.23;
                    break;
            }
            break;
        case 'M':
        case 'm':
            switch (1) {
                case 1:
                    if (anos < 20) novo = salario * 1.03;
                    else if (anos <= 30) novo = salario * 1.13;
                    else novo = salario * 1.25;
                    break;
            }
            break;
    }
    printf("Novo salario: R$%.2f\n", novo);
    return 0;
}
