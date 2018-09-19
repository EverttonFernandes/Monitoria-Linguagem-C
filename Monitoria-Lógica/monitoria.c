#include<stdio.h>

main(){
    int numero_pratos=5; /// NUMERO DE PRATOS NA PRATELEIRA
    int pratos; /// QUANTIDADE DE PRATOS QUE A PESSOA QUER RETIRAR
    int pratos_sob_a_mesa;

    printf("Quantas pratos voce deseja tirar: \n");
    scanf("%i",&pratos);

    pratos_sob_a_mesa=numero_pratos-pratos;
    printf("Agora voce so tem guardado %i ",pratos_sob_a_mesa);
}
