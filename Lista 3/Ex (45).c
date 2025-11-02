#include <stdio.h>
#include <stdlib.h>

int main(){
    int i,a,b;
    system("cls");
    

    printf("|-Digite um valor:\n");
    scanf("%d",&i);
    printf("|-Digite outro valor:\n");
    scanf("%d",&a);
    printf("|-Digite o valor de incremento:\n");
    scanf("%d",&b);

    if(i<a)
    {
         for( i = i; i <= a ; i+=b)
        {
            printf("\n|-%d",i);
        }
    }
        else if(a < i)
        {
         for( a = a; a <= i ; a+=b)
        {
            printf("\n|-%d",a);
        }
    }
        else{
            printf("\n|- %d = %d",a,i);
    }
    printf(" Acabou\n");

    return 0;
}