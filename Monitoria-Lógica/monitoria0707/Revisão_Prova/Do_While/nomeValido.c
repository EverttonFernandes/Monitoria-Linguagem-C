#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

/** Escreva um programa que peça para o usuário digitar seu primeiro nome (caractere por caractere) até que o ENTER seja digitado
 ('13'). Então mostre na tela se o nome é válido. Considere o nome válido caso o primeiro caractere seja uma letra maiúscula,
  e todos os outros forem minusculas. **/

                                                /// EXEMPLO USANDO VETOR
main(){
    char letra;
    int cont=0,posicaoDoVetor=0,i;
    char vet[20];

    printf("Digite seu primeiro nome: ");

    do{

        letra = getche(); /// AQUI CAPTURAMOS UMA LETRA POR VEZ
        if( posicaoDoVetor == 0 && letra>='A' && letra<='Z'){ /// SE NA PRIMEIRA POSIÇÃO DO VETOR O USUÁRIO INFORMAR UM CARACTER MAIUSCULO
            cont++; /// SIGNIFICA QUE ATÉ ENTÃO O NOME ESTÁ CORRETO, CONTAMOS 1 E DAQUI EM DIANTE VERIFICAMOS A DEMAIS POSIÇÕES
            vet[posicaoDoVetor] = letra;/// LETRA MAIUSCULA NA POSIÇÃO, ENTÃO VAMOS GUARDA-LA NA PRIMEIRA POSIÇÃO DO VETOR
        }
        else{ /// DE AGORA EM DIANTE VAMOS VERIFICAR A POSIÇÃO 1 DO VETOR EM DIANTE
            if(posicaoDoVetor!=0 && letra>='a' && letra<='z'){ /// AQUI JÁ COMEÇA A CONTAR DA POSIÇÃO 1 EM DIANTE, ENTÃO OS CARACTERES DEVEM SER TODOS MINUSCULOS
                cont++; /// se o restante todo for minusculo, significa que o nome ate entao esta correto
                vet[posicaoDoVetor] = letra; /// GUARDAMOS TODAS AS SEGUINTES LETRAS MINUSCULAS DENTRO DO VETOR
            }
        }
        posicaoDoVetor++; /// AQUI COMEÇA NA POSIÇÃO 0, (ATENÇÃO: ENTRA NA PRIMEIRA VEZ NO PRIMEIRO IF) após o primeiro incremento vai entrar somente no ELSE

    }while(letra!=13);

    posicaoDoVetor--;

    /// Essa linha abaixo diminui 1 do tamanho FINAL do nome que foi digitado, pois o enter também conta, caso não excluirmos a ultima posição o nome
    /// ficaria, por exemplo: Eliel \n ou eliel \n ( AQUELE MESMO ESQUEMA QUE TI EXPLIQUEI SEXTA NA MONITORIA) ;)

    printf("\n"); /// pulamos uma linha

    /// Se o cont incrementou da primeira posição até a ultima do vetor, significa que o nome é verdadeiro
    if(posicaoDoVetor==cont){
        printf("O nome que voce informou e considerado VALIDO");
    }
    else{ /// caso o CONT tenha falhado alguma vez, ou seja encontrou letra minuscula na posição 0 e maiuscula em alguma posição 1 em diante, então é falso, NOME INVALIDO
        printf("O nome que voce informou e considerado INVALIDO");
    }
}
