/*
Escreva um programa que peça para o usuário entrar com valores para hora, minuto
e segundos. Calcule e mostre para o usuário quanto tempo falta para um novo dia
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main() {
  int tempo,dia,hora,min,seg;
    int horas,minutos,segundos;
  printf("Informe o tempo em segundos: ");
  scanf("%i", &seg);
  printf("Informe o tempo em minutos: ");
  scanf("%i", &min);
  printf("Informe o tempo em horas: ");
  scanf("%i", &hora);


  printf("\n%i horas, %i minutos e %i segundos.",hora, min, seg);

return 0;
}

