#include<stdio.h>
#include<stdlib.h>
    ///ENTRADA: 5,3,6,7,3
main(){
    int vet[5];
    int i, aux, t;

    for(i=0; i<5; i++){
        printf("vet[%i] = ",i);
        scanf("%i",&vet[i]);
    }

    do{
        t=0;
        for(i=0;i<5; i++){
            if(vet[i] > vet[i+1]){
                aux = vet[i];
                vet[i] = vet[i+1];
                vet[i+1] = aux;
                t=1;
            }
        }
    }while(t!=0);
    printf("\n\n");
    for(i=0; i<5; i++){
        printf("vet[%i] = %i \n",i,vet[i]);
    }
}
