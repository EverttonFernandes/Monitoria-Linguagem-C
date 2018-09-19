#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, A,B,C,D,E,F,G;
    int totalA,totalB,totalC, totalPraticantes;

    printf("Digite o numero de associados!\n");
    scanf("%i",&n);

    printf("A B C D E F G\n");
    scanf("%i %i %i %i %i %i %i",&A,&B,&C,&D,&E,&F,&G);

    totalA=A-(D+E); // TOTAL DE PESSOAS QUE FALTAM PARTICIPAR DO ARCO
    totalB=B-(D+F); // TOTAL DE PESSOAS QUE FALTAM PARTICIPAR DO BAD
    totalC=C-(E+F); // TOTAL DE PESSOAS QUE FALTAM PARTICIPAR DA CANOAGEM

    totalPraticantes=totalA+totalB+totalC+D+E+F+G;  // SOMA DOS PARTIPANTES QUE FALTAM PARCIPAR DOS ESPORTES DITOS PELOS
                                                    // TECNICOS + AS PESSOAS ENTREVISTADAS

    if(n==totalPraticantes){
        printf("N");
    }else{
        printf("S");
    }

    return 0;
}
