/*
Escreva um programa que peça para o usuário informar um número qualquer de
segundos. Então mostre quantos dias, horas, minutos e segundos este número representa
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main() {
  int tempo,dia,hora,min,seg;

  printf("Informe o tempo em segundos: ");
  scanf("%i", &tempo);

   dia  = tempo / (24 * 60 * 60);
   hora = (tempo % (24 * 60 * 60)) / (60 * 60);
   min  = ((tempo % (24 * 60 * 60)) % (60 * 60)) / 60;
   seg  = ((tempo % (24 * 60 * 60)) % (60 * 60)) % 60;

  printf("\n%i dias, %i horas, %i minutos e %i segundos.", dia, hora, min, seg);

return 0;
}

