#include <stdio.h>
#include <stdlib.h>

int main()
{
    float compra, valor;
    int parcelas;
    char cartao;

    printf("\t BEM VINDO A LOJA DE CD!\n \n");

    printf("QUAL FOI O VALOR DA COMPRA?\n");
    scanf("%f",&compra);

    fflush(stdin); /// FAZ DE CONTA QUE ISSO NÃO EXISTE ;)

    printf("VOCE POSSUI CARTAO DA LOJA?\n s: SIM \t n: NAO\n");
    scanf("%c",&cartao);

    printf("EM QUANTAS PARCELAS DESEJA REALIZAR O PAGAMENTO?\n");
    scanf("%i",&parcelas);


    if(cartao=='s'){

            if(parcelas==1){
            valor=(compra*80)/100;
            }else if(parcelas<=6){
            valor=(compra*75)/100;
            }else{
            valor=(compra*10)/100;
            }
    }else if(cartao=='n'){

            if(parcelas==1){
            valor=(compra*90)/100;
            }else if(parcelas<=6){
            valor=(compra*95)/100;
            }else{
            valor=compra;
            }
    }

    printf("\nO VALOR TOTAL DO PRODUTO FICOU R$ %.2f \n
           O VALOR DAS PARCELAS FICOU %i x de R$ %.2f \n \n ",valor,parcelas,valor/parcelas);

    return 0;
}
