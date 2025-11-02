/******************************************************************************

17. Escreva um programa que pergunte a velocidade de um carro. Caso ultrapasse 80Km/h,
exiba uma mensagem dizendo que o usuário foi multado. Nesse caso, exiba o valor da
multa, cobrando R$5 por cada Km acima da velocidade permitida.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float velo;
    //pegando informação de quanto/hora o carro passou.
    printf("\nQual velocidade o carro passou?\n");
    scanf("%f",&velo);
    
    //fazer a decisão da multa tudo com 1 variável.
    if(velo <= 80 && velo != (velo<=0)){
        printf("\nVelocidade Ok!\n");
    } else if(velo > 80){
        velo = ((velo-80)*5);
        printf("\nMulta recebida no valor de: R$%.2f\n", velo);
    }

    return 0;
}