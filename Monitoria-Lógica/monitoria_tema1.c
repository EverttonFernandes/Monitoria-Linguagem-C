#include<stdio.h>
#include<stdlib.h>
/** Escreva um programa que leia 5 valores
do tipo inteiro, após isso mostre na tela
a soma total destes valores.
**/
main(){
    int n1,n2,n3,n4,n5;
    int soma=0;
    ///float media=0;

    printf("Digite 5 valores: \n");
    scanf("%i",&n1);
    scanf("%i",&n2);
    scanf("%i",&n3);
    scanf("%i",&n4);
    scanf("%i",&n5);

    soma = n1+n2+n3+n4+n5;
    media = soma/5;

    printf("O TOTAL DA SOMA FICOU: %i\n",soma);
    printf("A MEDIA FICOU: %.2f\n",media);
}
