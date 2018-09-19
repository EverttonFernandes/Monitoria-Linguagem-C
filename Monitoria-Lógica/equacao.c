#include<stdio.h>
/** Escreva um algoritmo, que leia 3 valores,
e mostre o resultado da seguinte equação: valor1+valor2-valor3
(valor1-valor2+valor3*(10-5/2)+2)
 **/

main(){
    int v1,v2,v3;
    int equacao=0;

    printf("Digite 3 valores: \n"); /// PEDI OS 4 VALORES PARA O USUÁRIO
    scanf("%i",&v1);\\\
    scanf("%i",&v2);
    scanf("%i",&v3);
    ///AQUI ENCERRA

    /// FAÇO A SOMA DESSES VALORES INFORMADOS E ATRIBUO A UMA VARIAVEL
    equacao = v1+v2-v3/(v1-v2+v3*(10-5/2)+2);

    printf("Resultado equacao: %i",equacao);
}



