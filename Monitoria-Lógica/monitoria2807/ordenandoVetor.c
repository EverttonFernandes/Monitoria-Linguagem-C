#include<stdio.h>
#include<stdlib.h>
#include<time.h>
                            ///ORDENAÇÃO DE VETOR
/**  Escreva um programa que gere 20 números aleatórios de 1 até 100,
 e armazene-os em um vetor. Após, mostre na tela estes números ordenados em ordem crescente.  **/

 main(){

    int i;
    int tam=20;
    int vet[tam];
    int aux;
    int j;
    srand(time(NULL));
    for(i=0; i < tam ; i++){ /// preenche o vetor com numeros aleatórios
        vet[i]=rand()%99+1;
    }
    for(j=0; j<tam ; j++){ /// nestes dois for ordenamos o vetor
        for(i=j; i<tam ; i++){
            if(vet[j]>vet[i]){
                aux=vet[j];
                vet[j]=vet[i];
                vet[i]=aux;
            }
        }
    }
    printf("ORDENADOS\n");
    for(i=0; i<tam ; i++){ /// neste for mostramos todo o vetor ordenado
        printf("vet[%i]=%i \n",i,vet[i]);
    }
    system("pause");
    return 0;
}
