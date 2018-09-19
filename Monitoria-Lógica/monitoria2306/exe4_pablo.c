#include<stdio.h>

/** Escreva um programa que peça para o usuário informar um número N, então peça para ele informar outros N números.
 Mostre na tela qual o maior ímpar digitado, bem como o menor par. **/

 main(){
    int quantidade;
    int numero;
    int i;
    int maior_impar,menor_par;
    printf("Informe a quantidade de valores: \n");
    scanf("%i",&quantidade);

    for(i=0; i<quantidade; i++){
        printf("Informe o valor %i: \n",i);
        scanf("%i",&numero);

        if(numero%2!=0 && i==1){
            maior_impar=numero;
        }
        if(numero%2==0 && i==0){
            menor_par=numero;
        }
    }
    printf("Maior impar foi: %i \n",maior_impar);
    printf("Menor par foi: %i\n",menor_par);
}
