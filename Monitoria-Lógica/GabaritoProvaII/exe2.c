/*

Dois números A e B são amigos se cada um deles é igual a soma dos divisores do outro. Por exemplo,
os números 284 e 220 são amigos:

    - divisores de 220: 1, 2, 4, 5, 10, 11, 20, 22, 44, 55 e 110, soma = 284
    - divisores de 284: 1, 2,4, 71 e 142, soma = 220.

Elabore um programa que leia dois valores inteiros e positivos (fazer validação com estrutura de
repetição para permitir que o usuário informe apenas número positivos). Após o programa deverá
escrever na tela a letra ‘S’ se os números são amigos e ‘N’, caso contrário.

*/

#include <stdio.h>

int main(){

    int n1,n2,s1=0,s2=0,i;

    do{
        scanf("%i",&n1);
        scanf("%i",&n2);
    }while(n1 <= 0 || n2 <= 0);

    for (i = 1; i < n1; i++){
        if(n1 % i == 0){
            s1 = s1 + i;
        }
    }

    for (i = 1; i < n2; i++){
        if(n2 % i == 0){
            s2 = s2 + i;
        }
    }

    if(s1 == n2 && s2 == n1)
        printf("S\n");
    else
        printf("N\n");

    return 0;
}
