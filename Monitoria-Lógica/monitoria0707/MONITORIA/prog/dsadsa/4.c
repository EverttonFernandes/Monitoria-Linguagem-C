#include <stdio.h>
#include <conio.h>
#include <stdlib.h>// necessário p/ as funções rand() e srand()
#include <time.h>//necessário p/ função time()

int main(void)
{
     int i;

     printf("Gerando 10 valores aleatorios:\n\n");

     /* srand(time(NULL)) objetiva inicializar o gerador de números aleatórios
        com o valor da função time(NULL). Este por sua vez, é calculado
        como sendo o total  de segundos passados desde 1 de janeiro de 1970
        até a data atual.
        Desta forma, a cada execução o valor da "semente" será diferente.
     */
     srand(time(NULL));
    int aux,j;
    int numero[99];       // gerando valores aleatórios na faixa de 0 a 100
   for(i=0;i<20;i++){
    numero[i] =1+rand() % 99;
    printf(" %d", numero[i]);
   }
for( i=0; i<20; i++ ){
                  for( j=i+1; j<20; j++ ){
                       if( numero[i] > numero[j] ){
                           aux = numero[i];
                           numero[i] = numero[j];
                           numero[j] = aux;
                       }
                  }
           }
           printf("\n Ordenado com sucesso!");
           for(i=0;i<20;i++)
           {
                            printf("\n%d",numero[i]);
           }

     return 0;
}
