#include<stdio.h>
#include<time.h>

/// USANDO VETORES E VERIFICANDO QUANTOS PARES FORAM GUARDADOS DENTRO DO VETOR
/// E TAMBÉM MOSTRANDO TODOS OS PARES INFORMADOS
main(){
    int vet[50]; /// vetor de tamanho 50
    int i,pares=0;
    srand(time(NULL)); /// função usada para sortear valores

    for(i=0; i<50; i++){ /// neste for guardamos os valores no vetor
        ///printf("Informe o valor de vet[%i] = ",i,vet[i]);
        ///scanf("%i",&vet[i]);
        vet[i]=rand()%9999+1;
    }

    for(i=0; i<50; i++){ /// neste for verificamos quantos são pares
        if(vet[i]%2==0){
            pares++;
        }
    }

    printf("%i valores informados sao pares \n",pares); /// mostramos na tela quantos são pares

    printf("ESSES SAO OS PARES \n");
    for(i=0; i<50; i++){ /// Neste for mostramos todos os pares
        if(vet[i]%2==0){
            printf("vet[%i] = %i\n",i,vet[i]);
        }
    }
}
