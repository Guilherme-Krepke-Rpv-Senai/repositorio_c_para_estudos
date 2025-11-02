// 62. Faça um programa usando a estrutura “faça enquanto” que leia a idade de várias
// pessoas. A cada laço, você deverá perguntar para o usuário se ele quer ou não
// continuar a digitar dados. No final, quando o usuário decidir parar, mostre na tela:
// a) Quantas idades foram digitadas
// b) Qual é a média entre as idades digitadas
// c) Quantas pessoas tem 21 anos ou mais.

#include <stdio.h>

int main(){
    int n1, j=0, soma=0, v=0;
    char p;
    do
    {
        printf("\n|->Digite sua idade");
        scanf("%d",&n1);
        j++;
        soma = soma+n1;
        if (n1 >=21)
        {
            v++;
        }
        printf("\n|->Quer continuar? sim->[S]nao->[N]");
        scanf(" %c",&p);

    } while (p != 'n'&& p != 'N');
    soma= soma/j;
    printf("Foram digitadas %d\nA media entre elas e %d\nE %d sao maiores de 21",j,soma,v);
    
    return 0;
}