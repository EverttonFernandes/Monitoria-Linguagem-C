#include<stdio.h>
#include<stdlib.h>

/** Ler 3 valores do tipo float, multiplicar o primeiro por 5, o segundo por 10, e o terceiro
por 2, após isso faça a soma das 3 multiplicações e divida a soma das multiplicações pela soma
dos 3 valores iniciais, e por fim mostre os valores na tela
**/
main(){
    float n1,n2,n3;
    float mult_n1,mult_n2,mult_n3;
    float soma_mult;
    float divisao;
    float soma_var_iniciais;

    printf("Digite 3 valores: \n"); /// PEDIR OS 3 VALORES
    scanf("%f",&n1);
    scanf("%f",&n2);
    scanf("%f",&n3);

    soma_var_iniciais = n1+n2+n3;

    mult_n1 = n1*5; /// MULTIPLICAÇÃO CADA UM
    mult_n2 = n2*10;
    mult_n3 = n3*2;

    soma_mult = mult_n1 + mult_n2 + mult_n3; /// SOMA DAS 3 MULTIPLICAÇÕES
    divisao = soma_mult/soma_var_iniciais;

    printf("A soma das variaveis iniciais ficou: %.2f\nA soma da multiplicacao ficou:%.2f\nE divisao ficou: %.2f",soma_var_iniciais,soma_mult,divisao);
}
