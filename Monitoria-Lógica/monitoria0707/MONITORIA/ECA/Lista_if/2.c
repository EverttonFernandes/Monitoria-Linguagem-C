#include <stdio.h>
#include <stdlib.h>

int main()
{

    char sexo;
    int idade;
    int masc=0;
    int fem=0;

    int aux=0;

    printf("M : MASC F: FEM!\n");

   do{
    fflush(stdin);

    printf("\ninforme o sexo da pessoa!\n");
    scanf("%c",&sexo);

    printf("\ninforme a idade da pessoa!\n");
    scanf("%i",&idade);


    if((sexo==77 || sexo==109) && idade>=18){
       masc++;
    }else if((sexo==70 || sexo==102) && idade>=18){
       fem++;
    }
    aux++;
} while(aux<4);


    printf("De 4 pessoas %d sao MULHERES maiores de 18 anos!\n",fem);
    printf("De 4 pessoas %d sao HOMENS maiores de 18 anos!\n",masc);

    return 0;
}
