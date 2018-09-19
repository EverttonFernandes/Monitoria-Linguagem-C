#include<stdio.h>

main(){
    int n;

    printf("Digite um numero: \n");
    scanf("%i",&n);

    if(n>0){
        printf("POSITIVO \n");
    }
    else if(n<0){
        printf("NEGATIVO");
    }
    else{
        printf("NULO");
    }
}
