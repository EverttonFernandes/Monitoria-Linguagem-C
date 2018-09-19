#include<stdio.h>
/**
Escreva um algoritmo que peça para o usuário informar um número,
 e mostre na tela se este número é positivo, negativo ou zero.
**/
main(){
    int n;
    printf("Informe um valor: \n");
    scanf("%i",&n);

    (n>0)? /// IF
        printf("POSITIVO"):
        printf("NEGATIVO");
}
