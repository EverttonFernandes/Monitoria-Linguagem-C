/*
Faça um programa que dado um valor inicial A1, uma razão r, e o número de termos
n, calcule o termo An da PA. Com os mesmo dados, encontre o somatório desta PA
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float A1;                            // variaveis das notas que o usuario irá digitar
    float r;                            // variavel para a qtd de pessoas da familia que o usuario irá digitar
    int n;
    float An;
    float somatorio;


    printf("Digite o valor inicial da PA!\n"); // mensagem aparece na tela
    scanf("%f",&A1);                // aguarda o usuario digitar o numero
    printf("Digite a razao da PA!\n"); // mensagem aparece na tela
    scanf("%f",&r);                // aguarda o usuario digitar o numero
    printf("Digite o numero de termo n da PA!\n"); // mensagem aparece na tela
    scanf("%i",&n);                // aguarda o usuario digitar o numero

    An=A1 + r*(n-1);
    somatorio= ((A1+An)*n)/2;

    printf("O TERMO %i da PA EH: %.2f\n",n,An);          // mensagem aparece na tela
    printf("O SOMATORIO DA PA EH: %.2f\n",somatorio);          // mensagem aparece na tela

    return 0;
}
