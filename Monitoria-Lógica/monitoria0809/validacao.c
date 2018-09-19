#include<stdio.h>

main(){
    int vet[5];
    int num,i;
    int boolean = 0;
    do{
        scanf("%i",&num);
        vet[i] = num;

        if(vet[i]==num){
            scanf("%i",&num);
            vet[i]=num;
        }
        i++;
    }while(num!=vet[i]);

    for(i=0; i<5; i++){
        printf("vet[%i] = %i\n",i,vet[i]);
    }
}
