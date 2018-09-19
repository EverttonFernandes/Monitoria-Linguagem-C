#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<locale.h>

/** Considerando um circuito elétrico simples, conforme mostrado na figura abaixo,
escreva um programa que pergunte para o usuário qual das três grandezas ele pretende calcular.
 Baseado na escolha feita, peça para ele informar as outras duas grandezas.
 Calcule e mostre na tela o resultado da operação. */

 main(){

    setlocale(LC_ALL,"portuguese");

    char grandeza;
    int resistencia;
    int tensao;
    int corrente;
    int resultado_tensao;
    int resultado_corrente;
    float resultado_resistencia;

    printf("Digite o valor da resistencia: \n");
    scanf("%i",&resistencia);
    printf("Digite o valor da tensão: \n");
    scanf("%i",&tensao);
    printf("Digite o valor da corrente: \n");
    scanf("%i",&corrente);

    printf("Qual das 3 grandezas elétricas voce pretende calcular? Digite: \n R-Resistencia \n V-Tensão \n I-Corrente \n ");
    scanf(" %c",&grandeza);

        switch(grandeza){
            case 'V':
            resultado_tensao=(resistencia*corrente);
            printf("Tensão=Resistencia*Corrente \n tensão= %i*%i \n O resultado da tensão é: %i volts"
                   ,resistencia,corrente,resultado_tensao);
            break;

            case 'R':
            resultado_resistencia=(tensao/corrente);
            printf("Resistência=Tensão/Corrente \n Resistência= %i/%i \n Resistência é %.2f ohms \n"
                    ,tensao,corrente,resultado_resistencia);
            break;

            case 'I':
            resultado_corrente=(tensao/resistencia);
            printf("Corrente=Tensão/Resistência \n Corrente= %i / %i \n Corrente elétrica é %i âmperes \n"
                   ,tensao,resistencia,resultado_corrente);
            break;

            default:
                printf("Opção inválida!");
        }
 }
