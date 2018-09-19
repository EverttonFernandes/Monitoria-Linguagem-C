#include <stdio.h>
#include <stdlib.h>

int main()
{

    float financiamento;
    float valor_parcela;
    float renda;
    int parcelas;


    printf("\n digite o valor do financiamento!\n");
    scanf("%f",&financiamento);
    printf("\n digite o valor da renda!\n");
    scanf("%f",&renda);
    printf("\n digite o numero de parcelas!\n");
    scanf("%i",&parcelas);


    if(parcelas<180){
    valor_parcela=financiamento/parcelas;
    if(valor_parcela < 0.3*renda){
    printf("PODE FINANCIAR");
    }else{
    printf(" NAO PODE FINANCIAR");
    }
    }else{
    printf(" NAO PODE FINANCIAR");
    }


    return 0;
}
