#include<stdio.h>
/** Faça um programa que peça para o usuário digitar caracter do (tipo char).
 Ao fim mostre na tela se este caracter é uma vogal ou uma consoante. **/

 main(){
    char caracter;

    printf("Digite uma letra: "); /// PEDE UMA LETRA
    scanf(" %c",&caracter); /// GUARDA ESTA LETRA

    if(caracter!='a' && caracter!='e' && caracter!='i' && caracter!='o' && caracter !='u'){ /// SE FOR DIFERENTE DE (a,e,i,o,u) é consoante
        printf("A letra informada e uma consoante! \n");
    }
    else{ /// caso contrário é vogal
        printf("A letra informada e uma vogal! \n");
    }
 }
