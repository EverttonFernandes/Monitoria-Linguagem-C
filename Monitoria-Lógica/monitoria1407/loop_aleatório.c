#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/** Programa em C que gera valores aleatórios de 0 até 100 até que o valor 0 seja gerado, após isso mostra na tela quantos valores informados são pares e quantos são impares **/

main(){
    int pares=0;
    int impares=0;
    int valor,i;

    srand(time(NULL));
    do{
        for(i=0; i<10 ;i++){
            printf("%i ",valor);
            valor = 0 + ( rand() % 100 );

            if(valor%2==0){
                pares++;
            }
            else{
                impares++;
            }
        }
    }while(valor!=0);

    printf("\nFoi gerado %i pares\n",pares);
    printf("Foi gerado %i impares",impares);
}
