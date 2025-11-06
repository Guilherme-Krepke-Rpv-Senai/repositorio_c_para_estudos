// 64. Desenvolva um programa usando a estrutura “para” que mostre na tela a seguinte
// contagem: 0 5 10 15 20 25 30 35 40 Acabou!

#include <stdio.h>

int main(){
    int i;

    for ( i = 0; i <= 40 ; i += 5)
    {
        printf("\n|-%d",i);
    }
    printf(" - Acabou\n");
    
}