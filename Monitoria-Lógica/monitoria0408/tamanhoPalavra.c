#include<stdio.h>
#include<conio.h>
#include<string.h>
/** Escreva um programa que pede para o usuário
informar duas palavras, ao fim mostre quantos caracteres existem
na primeira palavra e tambem na segunda **/
main(){
    int tam1=0;
    int tam2=0;
    char letra1,letra2;
    char palavra1[20];
    char palavra2[20];

    printf("Informe a primeira palavra: ");

    do{ /// Captura a primeira palavra
        letra1 = getche();
        palavra1[tam1] = letra1;
        tam1++;
    }while(letra1!=13);

    printf("\nInforme a segunda palavra: ");

    do{ /// Captura a segunda palavra
        letra2 = getche();
        palavra2[tam2] = letra2;
        tam2++;
    }while(letra2!=13);

    printf("\nA palavra 1 tem %i caracteres \n",tam1-1);
    printf("\nA palavra 2 tem %i caracteres \n",tam2-1);
}
