/*
Escreva um algoritmo que peça para o usuário informar dois números. Então mostre
na tela o resultado da adição, subtração, multiplicação e divisão do primeiro pelo
segundo número.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num1;   // variavel para o primeiro numero que o usuario irá digitar
    float num2;   // variavel para o segundo numero que o usuario irá digitar
    float adicao;          // variaveis dos possives resultados
    float subtracao;
    float multiplicacao;
    float divisao;

    printf("Digite um numero!\n"); // mensagem aparece na tela
    scanf("%f",&num1);                // aguarda o usuario digitar o numero

    printf("Digite outro numero!\n"); // mensagem aparece na tela
    scanf("%f",&num2);                // aguarda o usuario digitar o numero

        // logica proposta pelo problema
    adicao=num1+num2;
    subtracao=num1-num2;
    multiplicacao=num1*num2;
    divisao=num1/num2;


    printf("A ADICAO DOS DOIS NUMEROS EH: %.2f\n",adicao);                // mensagem aparece na tela
    printf("A SUBTRACAO DOS DOIS NUMEROS EH: %.2f\n",subtracao);          // mensagem aparece na tela
    printf("A MULTIPLICACAO DOS DOIS NUMEROS EH: %.2f\n",multiplicacao); // mensagem aparece na tela
    printf("A DIVISAO DOS DOIS NUMEROS EH: %.2f\n",divisao);              // mensagem aparece na tela




    return 0;
}
