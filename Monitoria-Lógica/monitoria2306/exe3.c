#include<stdio.h>
#include<conio.h>

/** DESAFIO Escreva um programa que peça para o usuário digitar um caracter (do tipo char),
 após isso mostre na tela se este caracter é uma vogal, uma consoante, um número ou um símbolo.
  (Dica: use if else operadores lógicos e tabela ASCH). **/

main(){
    char caracter;
    printf("Informe um caracter: \n");
    ///scanf(" %c",&caracter); se quiser usar scanf também pode
    caracter=getche();

    if (caracter>='a' && caracter<='z'){ /// A até Z minusculo na tabela asch
            if(caracter=='a' || caracter=='e' || caracter=='i' || caracter=='o' || caracter=='u'){ ///97 é a letra 'a', 101 a letra 'e', 105 a letra 'i' 111 a letra 'o' e 117 a letra u
                printf("\nO caracter informado e uma vogal \n \n");
            }
            else{
                printf("\nO caracter e consoante \n \n");
            }
    } /// CASO O CARACTER INFORMADO NÃO FOR UMA LETRA VAMOS DESCOBRIR SE ELE É UM NUMERO OU UM SIMBOLO
    else{
        if(caracter>='0' && caracter<='9'){ /// 0 a 9 na tabela asch
            printf("\nO caracter informado e um numero \n \n");
        }
        else{
            printf("\nO caracter informado e um simbolo \n \n");
            system("pause");
        }
    }
}
