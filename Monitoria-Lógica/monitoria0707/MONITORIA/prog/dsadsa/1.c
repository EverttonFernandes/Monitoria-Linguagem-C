#include <stdio.h>
#include <conio.h>
#include <stdlib.h>// necess�rio p/ as fun��es rand() e srand()
#include <time.h>//necess�rio p/ fun��o time()

int main(void)
{
     int i;

     printf("Gerando 10 valores aleatorios:\n\n");

     /* srand(time(NULL)) objetiva inicializar o gerador de n�meros aleat�rios
        com o valor da fun��o time(NULL). Este por sua vez, � calculado
        como sendo o total  de segundos passados desde 1 de janeiro de 1970
        at� a data atual.
        Desta forma, a cada execu��o o valor da "semente" ser� diferente.
     */
     srand(time(NULL));

    int num1, num2;       // gerando valores aleat�rios na faixa de 0 a 100
    num1 =-10+rand() % 20;
    num2 =-10+rand() % 20;
        printf(" %d %d", num1, num2);

        if(num1>=0 && num2>=0) printf(" 1 quadrante");
        if(num1<=0 && num2>=0) printf(" 2 quadrante");
        if(num1<=0 && num2<=0) printf(" 3 quadrante");
        if(num1>=0 && num2<=0) printf(" 4 quadrante");

     getch();
     return 0;
}
