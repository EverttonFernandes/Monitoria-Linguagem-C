#include<stdio.h>

/** Escreva um programa que peça para o usuário informar diversos caracteres enquanto o 'ENTER' não for
precionado, ao fim mostre na tela quantas vogais e quantas consoantes foram digitadas **/

main(){
    char letra;
    int vogais=0;
    int consoantes=0;
    do{
        letra = getche();
        if(letra>='a' && letra<='z' || letra>='A' || letra <='Z'){
            if (letra=='a' || letra=='e' || letra=='i' ||
                letra=='o' || letra=='u' || letra=='A' ||
                letra=='E' || letra=='I' || letra=='O' || letra=='U'){
                vogais++;
            }
            else{
                consoantes++;
            }
        }
    }while(letra!=13); /// ENQUANTO A LETRA NÃO FOR IGUAL AO ENTER NÃO SAÍ DO LOOP
    printf("\n%i caracteres informados sao vogais",vogais);
    printf("\n%i caracteres informados sao consoantes",consoantes-1);
}

