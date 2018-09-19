/*
Pedir para o usuário informar a nota de três avaliações realizadas. Então mostre na
tela a média que ele obteve.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1,n2,n3;                            // variaveis das notas que o usuario irá digitar
    float media;                            // variavel para a qtd de pessoas da familia que o usuario irá digitar

    printf("Digite a nota 1!\n"); // mensagem aparece na tela
    scanf("%f",&n1);                // aguarda o usuario digitar o numero
    printf("Digite a nota 2!\n"); // mensagem aparece na tela
    scanf("%f",&n2);                // aguarda o usuario digitar o numero
    printf("Digite a nota 3!\n"); // mensagem aparece na tela
    scanf("%f",&n3);                // aguarda o usuario digitar o numero


    media=(n1+n2+n3)/3;

    printf("A MEDIA DO ALUNO EH: %.2f\n",media);          // mensagem aparece na tela

    return 0;
}
