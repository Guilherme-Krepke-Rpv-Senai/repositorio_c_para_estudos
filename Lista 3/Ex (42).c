#include <stdio.h>
#include <stdlib.h>

int main(){
    int i,n;
    system("cls");
    printf("|-Digite um valor\n");
    scanf("%d",&n);

    for ( i = 0; i <= n ; i++)
    {
        printf("\n|-%d",i);
    }
    printf(" Acabou\n");
    
}