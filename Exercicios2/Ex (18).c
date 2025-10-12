//34. Calcule IMC e classifique individuo.
#include <stdio.h>

int main() {
    float peso, altura, imc;
    printf("Peso e altura: ");
    scanf("%f %f", &peso, &altura);
    imc = peso / (altura * altura);
    switch (1) {
        case 1:
            if (imc < 18.5) printf("Abaixo do peso\n");
            else if (imc < 25) printf("Peso ideal\n");
            else if (imc < 30) printf("Sobrepeso\n");
            else if (imc < 40) printf("Obesidade\n");
            else printf("Obesidade morbida\n");
            break;
    }
    return 0;
}

