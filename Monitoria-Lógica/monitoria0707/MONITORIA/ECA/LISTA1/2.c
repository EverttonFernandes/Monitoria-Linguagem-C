/*
Pedir para o usuário informar o valor de uma conta, bem como a porcentagem de
juros desta conta. Mostre na tela qual o valor dos juros que serão pagos, e o valor total
com juros.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float conta;   // variavel para o valor da conta que o usuario irá digitar
    float juros;   // variavel para a porcentagem de juros que o usuario irá digitar
    float valor_juros;   // variavel para o valor do juros calculado
    float valor_total;  // variavel para calcular o valor total da compra

    printf("Digite o valor de uma conta!\n"); // mensagem aparece na tela
    scanf("%f",&conta);                // aguarda o usuario digitar o numero

    printf("Digite a porcentagem de juros desta conta!\n"); // mensagem aparece na tela
    scanf("%f",&juros);                // aguarda o usuario digitar o numero

    juros=juros/100;

    valor_juros=juros*conta;
    valor_total=conta+valor_juros;

    printf("O JUROS EH:R$ %.2f\n",valor_juros);                // mensagem aparece na tela
    printf("O TOAL DA CONTA COM JUROS EH:R$ %.2f\n",valor_total);          // mensagem aparece na tela

    return 0;
}
