#include<stdio.h>

/** Faça um programa que peça para o usuário preencher um vetor de tamanho 10, após isso percorra o
 vetor e verifique todos os valores que são primos,
 pegue todos estes primos e guarde em outro vetor (ex: vetorPrimo). Ao fim mostre na tela este vetor primo. **/

main(){

    int vetor[10];
    int vetorPrimos[10];
    int i,j;
    int posicaoPrimo=0;

    printf("\t\t\tPreenchendo o vetor: \n");
    printf("Informe 10 valores: \n");
    for(i=0; i<10; i++){
        printf("vetor[%i] = ",i); /// começa pedindo o valor na posição 0, depois na posição 1 e assim sucessivamente
        scanf("%i",&vetor[i]); /// ESTE FOR PREENCHE O VETOR
    }

    for (i=0; i<10; i++) {/// NESTE FOR VAMOS VERIFICAR CADA UM DOS VALORES DO VETOR
        if(vetor[i]>=2){ /// Se o valor for maior ou igual a dois a probabilidade dele ele ser primo é maior, e se caso for menor ele nem entra dentro deste if...
            /// OBS se caso o valor for negativo ele nem entraria dentro deste if
            int aux = 2; /// VARIAVEL AUX PARA DIVIDIRMOS TODOS OS NUMEROS DO VETOR POR 2
            int primo = 1 ; /// VARIAVEL PRIMO USADA COMO UMA FLAG, SE FOR 1 É VERDADEIRO E SE FOR 0 É FALSO
            while(primo==1 && aux<vetor[i]){ /// ENQUANTO PRIMO FOR VERDADEIRO E AUX FOR MENOR QUE O NUMERO NO QUAL ESTAMOS VERIFICANDO NO VETOR
                if(vetor[i]%aux==0){ /// SE O VALOR QUE ESTAMOS VERIFICANDO ATUALMENTE DIVIDO POR 2 TER O RESTO DA DIVISÃO 0
                    primo=0; /// ENTÃO A FLAG VIRA FALSE, ENTRETANDO ESTE VALOR NÃO É PRIMO
                }
                aux++;
            }
            if(primo==1){ /// SE O NUMERO FOR PRIMO
                vetorPrimos[posicaoPrimo]=vetor[i]; ///PEGAMOS O VALOR PRIMO DO ANTIGO VETOR E JOGAMOS NO OUTRO VETOR
                posicaoPrimo++;/// A POSIÇÃO 0 DO VETOR PRIMO ACABA DE RECEBER UM VALOR, AGORA AVANÇAMOS PARA A PRÓXIMA POSIÇÃO E AGUARDAMOS UM NOVO VALOR PRIMO (CASO HOUVER)
            }
        }
    }

    printf("\nRESULTADO DO VETOR PRIMOS\n"); /// AQUI MOSTRA O VETOR PAR NA TELA
    for(j=0; j<posicaoPrimo; j++){ /// FOR QUE VAI DE 0 ATÉ O MÁXIMO DE POSIÇÕES DE VALORES PRIMOS ENCONTRADOS
        printf("Vetor Primos[%i] = %i\n",j,vetorPrimos[j]);/// MOSTRA TODOS OS PRIMOS DO VETOR PRIMOS NA TELA
    }
}
