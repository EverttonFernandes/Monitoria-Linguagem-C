#include <stdio.h>
#include <stdlib.h>

int main()
{

    int sexo;
    int idade;

    printf("\n digite 1 numero!\n");
    printf("\n M:1 F:2!\n");
    scanf("%i",&sexo);

    printf("\n digite a idade!\n");
    scanf("%i",&idade);

    if(sexo == 1){
    if(idade>18){
    printf("HOMEM MAIOR");
    }else{
    printf("HOMEM MENOR");
    }
    }else{
    if(idade>18){
    printf("MULHER MAIOR");
    }else{
    printf("MULHER MENOR");
    }
    }


    return 0;
}
