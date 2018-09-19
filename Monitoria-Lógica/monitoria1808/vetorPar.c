#include<stdio.h>

/** Programa que pede para o usuário preencher um vetor de tamanho 10 do tipo INT
Após isso pegue todos os valores deste vetor que foi preenchido e guarde em outro vetor
somente valores que são pares **/

main(){
    int vetor[10];
    int vetorPar[10];
    int i,j,par=0;

    printf("\t\t\tPreenchendo o vetor: \n");
    printf("Informe 10 valores: \n");
    for(i=0; i<10; i++){
        printf("vetor[%i] = ",i); /// começa pedindo o valor na posição 0, depois na posição 1 e assim sucessivamente
        scanf("%i",&vetor[i]); /// ESTE FOR PREENCHE O VETOR
    }

    for(i=0; i<10; i++){ /// NESTE FOR VERIFICAMOS OS VALORES QUE SÃO PARES E GUARDAMOS NO OUTRO VETOR
        if(vetor[i]%2==0){
            vetorPar[par]=vetor[i]; /// ENCONTROU O PAR, PEGA ELE E JOGA NO OUTRO VETOR
            par++; /// par vira 1, ou seja o vetor par na posição 0 tem um valor par lá dentro, agora ele fica aguardando um valor par
        }/// na posição 1 e assim sucessivamente
    }
    printf("\nRESULTADO DO VETOR PAR\n");
    for(j=0; j<par; j++){ /// AQUI MOSTRA O VETOR PAR NA TELA
        printf("Vetor Par[%i] = %i\n",j,vetorPar[j]);
    }
}
