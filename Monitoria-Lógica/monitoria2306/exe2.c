#include<stdio.h>
/** Escreva um programa que peça para o usuário informar 3 números, logo após mostre na tela qual desses 3 números é o maior e qual destes 3 números informados é o menor.
 (Dica: use if, else e operadores lógicos) **/


 main(){
    int valor1;
    int valor2;
    int valor3;

    printf("Informe 3 valores e vamos descobrir qual deles e o maior e o menor: \n");
    scanf("%i",&valor1);
    scanf("%i",&valor2);
    scanf("%i",&valor3);
    ///Os 3 valores foram digitados, agora vamos descobrir qual deles e o maior, e qual deles e menor informado

    if(valor1>valor2 && valor1>valor3){ /// o IF deve ser lido desta maneira: Se o valor 1 for maior que o valor 2 e maior que o valor 3
        printf("O maior numero digitado foi o %i ",valor1); /// sendo assim o maior valor informado foi o valor 1 e assim sucessimante
    }
    if(valor2>valor1 && valor2>valor3){ /// Se o valor 2 for maior que o valor 1 e maior que o valor 3
        printf("O maior numero digitado foi o %i ",valor2);
    }
    if(valor3>valor1 && valor3>valor2){ /// Se o valor 3 for maior que o valor 1 e maior que o valor 2
        printf("O maior numero digitado foi o %i ",valor3);
    }

    /// AGORA VAMOS DESCOBRIR QUEM E O MENOR

    if(valor1<valor2 && valor1<valor3){ ///o IF deve ser lido desta maneira: Se o valor 1 for menor que o valor 2 e menor que o valor 3
        printf("O menor numero digitado foi o %i ",valor1); /// sendo assim o maior valor informado foi o valor 1 e assim sucessimante
    }
    if(valor2<valor1 && valor2<valor3){ /// Se o valor 2 for menor que o valor 1 e menor que o valor 3
        printf("O menor numero digitado foi o %i ",valor2);
    }
    if(valor3<valor1 && valor3<valor2){ /// Se o valor 3 for menor que o valor 1 e menor que o valor 2
        printf("O menor numero digitado foi o %i ",valor3);
    }
 }
