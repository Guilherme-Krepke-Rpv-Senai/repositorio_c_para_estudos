// 51. Faça um aplicativo que leia o preço de 8 produtos. No final, mostre na tela qual foi o
// maior e qual foi o menor preço digitados.

#include <stdio.h>

int main(){
    int n1, maior = 0, menor = 0, i = 0;

    while (i < 7)
    {
        printf("\n|->Digite o preco");
        scanf("%d", &n1);

        if (n1 >= maior)
        {
            maior = n1;
        }
        else if (n1 <= menor || menor == 0)
        {
            menor = n1;
        }

        i++;
    }
    printf("\n|-> O maior preco foi de: %d\n|-> E o menor preço foi de: %d",maior,menor);
}