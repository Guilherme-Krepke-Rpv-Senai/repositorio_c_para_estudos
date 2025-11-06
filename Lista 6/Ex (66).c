// 66. Escreva um programa que leia um número qualquer e mostre a tabuada desse número,
// usando a estrutura “para”.
// Ex: Digite um valor: 5 5 x 1 = 5 5 x 2 = 10 5 x 3 = 15 ...

#include <stdio.h>


int main(){
    int i,n1,res;
    printf("|-Digite um numero: ");
    scanf("%d",&n1);

    for ( i = 1; i <= 10 ; i++)
    {
        res = n1*i;
        printf("\n|-%d * %d = %d",n1,i,res);
    }
    printf(" \n|- Acabou\n");

}