// 52. Crie um algoritmo que leia a idade de 10 pessoas, mostrando no final:
// a) Qual é a média de idade do grupo
// b) Quantas pessoas tem mais de 18 anos
// c) Quantas pessoas tem menos de 5 anos
// d) Qual foi a maior idade lida
#include <stdio.h>

int main(){
    int n1, maior = 0, soma = 0, i = 0, j = 0, k = 0;

    while (i < 10)
    {
        printf("\n|->Digite a %d idade",i+1);
        scanf("%d", &n1);

        soma = soma+n1;

        if (n1 >= maior)
        {
            maior = n1;
        }
        
        if (n1 >= 18)
        {
            j++;
        }else if(n1 < 5){
            k++;
        }

        i++;
    }
    soma = soma/10;
    printf("\n|-> A media da soma das idades foi: %d\n",soma);
    printf("|-> Maiores de 18: %d\n",j);
    printf("|-> Menores de 5: %d\n",k);
    printf("|-> E a maior idade foi de: %d",maior);
}