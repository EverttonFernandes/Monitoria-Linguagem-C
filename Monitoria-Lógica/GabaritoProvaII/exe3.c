/*

Uma loja está fazendo uma promoção de fim de ano. Nesta promoção, a
cada R$ 100,00 em compras, o cliente receberá R$ 1,00 de desconto em
cada um dos produtos adquiridos. Por exemplo caso o cliente compre
três produtos, de R$ 150,00, R$ 200,00 e R$ 75,00 respectivamente,
pagará R$ 146,00 no primeiro produto, R$ 196,00 no segundo e R$ 71,00
no terceiro, pois o valor total bruto da compra foi de R$ 425,00,
concedendo R$ 4,00 de desconto em cada um dos três produtos. Você
possui a tarefa de criar um programa que calculará o valor dos
produtos e descontos adquiridos pelos clientes desta loja. O programa
deverá receber a quantidade de produtos adquiridos pelo cliente
(máximo 100 produtos), bem como o valor de cada produto. Realize a
validação para somente permitir valores positivos (usando uma
estrutura de repetição). O programa deverá mostrar o valor total bruto
das compras do usuário, o valor total do desconto e também o valor
final de cada produto adquirido. O valor total bruto é o somatório dos
valores de cada produto, desconsiderando o desconto. O valor total do
desconto será o somatório do desconto de cada produto. O valor final
de cada produto será o valor informado, subtraído do desconto que o
produto receberá.

#Entrada
3
150 200 75
#Saída
425.00 12
146.00 196.00 71.00

#Entrada
5
50 70 65 48 146
#Saída
379.00 15
47.00 67.00 62.00 45.00 143.00

#Entrada
4
131.23 145.32 25.99 12.34
#Saída
314.88 12
128.23 142.32 22.99 9.34

*/
#include <stdio.h>

int main(){

    int qtd_produtos;
    int i;

    scanf("%i",&qtd_produtos);

    float prods[qtd_produtos],total=0;

    for (i = 0; i < qtd_produtos; i++){
        scanf("%f",&prods[i]);
        total = total + prods[i];
    }

    int desc = (int) total / 100;

    printf("%.2f %i\n", total, desc * qtd_produtos);

    for (i = 0; i < qtd_produtos; i++){
        printf("%.2f ",prods[i] - desc);
    }
    printf("\n");

    return 0;
}
