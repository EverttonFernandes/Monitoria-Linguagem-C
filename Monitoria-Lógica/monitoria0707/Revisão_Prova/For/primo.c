#include<stdio.h>

/** Programa 2 que pede um valor e verifica se ele e primo **/
main(){

    int numero;
    int cont=0;
    int i;

    printf("Informe um numero e vamos descobrir se ele e primo: ");
    scanf("%i",&numero);

    for(i=1; i<=numero; i++){
        if(numero%i==0){
            cont++;
        }
    }
    if(cont==2){
        printf("O numero informado e primo! \n");
    }
    else{
        printf("O numero informado nao e primo! \n");
    }
}
