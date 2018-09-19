#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    int maior=0;
    int menor=999;
    int par=0;
    int impar=0;
    int dif;
    int soma_impar=0;
    int soma_par=0;
    float media_impar;
    float media_par;
    while(1){

    printf("Digite um numero\n");
    scanf("%d",&num);
    if(num<0) break;
    if(num>maior){
        maior=num;
    }
    if(num<menor){
        menor=num;
    }
    if(num%2==0){ // par
        par++;
        soma_par= soma_par + num;
    }else{
    impar++;
    soma_impar= soma_impar + num;
    }

    }
    if(par==0){
        par=1;
    }

    if(impar==0){
        impar=1;
    }
    media_par=soma_par/par;
    media_impar=soma_impar/impar;

    dif=maior-menor;
    printf("voce digitou um numero negativo\n");
    printf("diferença entre o maoir e menor eh %d\n",dif);
    printf("media par eh %f\n",media_par);
    printf("media impar eh %f\n",media_impar);

    return 0;
}
