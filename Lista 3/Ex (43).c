#include <stdio.h>
#include <stdlib.h>

int main(){
    int i;
    
    for( i = 30; i >= 0 ; i--)
    {
        if (i%4 == 0)
        {
            printf("\n|-[%d]",i);
        }else{
            printf("\n|-%d",i);
        }
    }
    printf(" Acabou\n");
}