#include<stdio.h>

/** Faça um programa que peça para o usuário digitar um número, ao fim mostre na tela se este número é impar. **/

main(){
    int numero;

    printf("Digite um numero: "); /// pede para o usuário informar um numero
    scanf("%i",&numero); /// guarda este numero

    if(numero%2!=0){ /// pega o numero informado e diz se ele é impar
        printf("O valor informado e impar! \n");
    }
    else{ /// SENÃO FOR IMPAR, ENTÃO ELE É PAR
        printf("O valor informado e par! \n");
    }
}
