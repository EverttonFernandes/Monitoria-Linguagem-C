/*
Faça um programa que calcule a área de um triângulo retângulo e a sua hipotenusa
tendo como informação o comprimento dos catetos deste triângulo, que devem ser
informados pelo usuário
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float area_triang;                            // variaveis das notas que o usuario irá digitar
    float hip;                            // variavel para a qtd de pessoas da familia que o usuario irá digitar
    float cat_op, cat_adj;


    printf("Digite a medida do cateto oposto !\n"); // mensagem aparece na tela
    scanf("%f",&cat_op);                // aguarda o usuario digitar o numero
    printf("Digite a medida do cateto adjacente!\n"); // mensagem aparece na tela
    scanf("%f",&cat_adj);                // aguarda o usuario digitar o numero

    area_triang=(cat_adj*cat_op)/2;
    hip=sqrt(pow(cat_op,2) +pow(cat_adj,2));

    printf("A AREA DO TRIANGULO EH: %.2f\n",area_triang);          // mensagem aparece na tela
    printf("A MEDIDA DA HIPOTENUSA EH: %.2f\n",hip);          // mensagem aparece na tela

    return 0;
}
