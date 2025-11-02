#include <stdio.h>
#include <stdlib.h>

int main(){
    int i,a,b;
    system("cls");
    

    printf("|-Digite o valor inicial:\n");
    scanf("%d",&i);
    printf("|-Digite o valor final:\n");
    scanf("%d",&a);
    printf("|-Digite o valor de incremento:\n");
    scanf("%d",&b);
    for( i = i; i <= a ; i+=b)
    {
        printf("\n|-%d",i);
    }
    printf(" Acabou\n");
}