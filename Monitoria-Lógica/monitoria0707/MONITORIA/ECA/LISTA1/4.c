/*
Pedir para o usuário informar qual consumo do carro dele (km/l), qual distância do
percurso (km) e qual o valor do combustível (R$). Mostre na tela quantos R$ ele vai
gastar para realizar o percurso.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float consumo;                            // variavel para q renda familiar que o usuario irá digitar
    float distancia;                            // variavel para a qtd de pessoas da familia que o usuario irá digitar
    float valor_comb;                  // variavel para a renda per capita a ser calculada
    float gasto;

    printf("Digite o consumo do seu carro (km/l)!\n"); // mensagem aparece na tela
    scanf("%f",&consumo);                // aguarda o usuario digitar o numero

    printf("Digite a distancia do percurso(km)!\n"); // mensagem aparece na tela
    scanf("%f",&distancia);                // aguarda o usuario digitar o numero

    printf("Digite o preco da gasolina!\n"); // mensagem aparece na tela
    scanf("%f",&valor_comb);                // aguarda o usuario digitar o numero


    gasto=(distancia/consumo)*valor_comb;

    printf("O TOTAL GASTO NO PERCURSO EH: R$ %.2f\n",gasto);          // mensagem aparece na tela

    return 0;
}
