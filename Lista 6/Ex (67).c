// 67. Faça um programa usando a estrutura “para” que leia um número inteiro positivo e
// mostre na tela uma contagem de 0 até o valor digitado:
// Ex: Digite um valor: 9 Contagem: 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, FIM!
#include <stdio.h>

int main(){
    int i,n1;
    printf("|-Digite um numero: ");
    scanf("%d",&n1);

    for ( i = 0; i <= n1 ; i++)
    {
        printf("\n|-%d",i);
    }
    printf(" - FIM!\n");

}