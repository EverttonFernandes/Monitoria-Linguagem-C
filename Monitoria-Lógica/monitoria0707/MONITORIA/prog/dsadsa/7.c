#include <stdio.h>
#include <conio.h>
#include <stdlib.h>// necessário p/ as funções rand() e srand()

int main(void)
{
     int i,j;
int cont=0;

    int numero[9];       // gerando valores aleatórios na faixa de 0 a 100
   for(i=0;i<=9;i++){
    scanf("%d",&numero[i]);
   }

for( i=0; i<10; i++ ){
        for( j=0; j<10; j++ ){
                       if( numero[j] > numero[i] ){
                           cont++;
                          }
                  }
           printf(" %d sao maiores que o %d numero digitado \n", cont, i+1);
           cont=0;
           }

     return 0;
}
