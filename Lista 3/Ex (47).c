//47. Desenvolva um aplicativo que mostre na tela o resultado da expressão
//500 + 450 + 400 + 350 + 300 + ... + 50 + 0
#include <stdio.h>

int main(){
    int i;
    for ( i = 500; i >= 0; i-=50)
    {
        printf("%d\n",i);
    }
    
    return 0;
}