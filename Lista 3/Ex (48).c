// 48. Faça um programa que leia 7 números inteiros e no final mostre o
// somatório entre eles.
#include <stdio.h>

int main(){
    int i,soma = 0,n1 = 0;
    for ( i = 0; i < 7; i++)
    {
        printf("\nDigite o %d numero",i+1);
        scanf("%d",&n1);
        
        soma = soma+n1;

    }
    printf("\nA soma dos 7 numeros foi de %d",soma);
    
    return 0;
}