#include<stdio.h>
/** Considerando um circuito elétrico simples com uma tensão de 220 volts,
 peça para o usuário informar o valor de de uma grandeza elétrica a (corrente),
 após isso mostre na tela o resultado da resistência elétrica usando a fórmula:

resistência=tensão/corrente.  **/

main(){
    float tensao = 220;
    float resistencia;
    float corrente;

    printf("Informe o valor da corrente eletrica: "); /// PEÇO O VALOR PARA O USUÁRIO
    scanf("%f",&corrente); /// GUARDO O VALOR INFORMADO

    resistencia = tensao/corrente; /// Faço a divisão de 220 pelo valor informado da corrente e descubro o valor da resistencia

    printf("O resultado da resistencia eletrica e: %.2f \n",resistencia); /// mostro na tela o valor da resistencia
}
