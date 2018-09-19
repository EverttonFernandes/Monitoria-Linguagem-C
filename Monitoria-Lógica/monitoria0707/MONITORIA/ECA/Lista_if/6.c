#include <stdio.h>
#include <stdlib.h>

int main()
{

    int valor1, valor2, valor3;


    printf("\n digite 1 numero!\n");
    scanf("%i",&valor1);
    printf("\n digite 1 numero!\n");
    scanf("%i",&valor2);
    printf("\n digite 1 numero!\n");
    scanf("%i",&valor3);

    if(valor1>valor2 && valor1>valor3){
    if(valor2>valor3){
    printf("\n %i eh maior que %i e maior que %i!\n",valor1,valor2,valor3);
    }else{
    printf("\n %i eh maior que %i e maior que %i!\n",valor1,valor3,valor2);
    }
    }else if(valor2>valor1 && valor2>valor3){
    if(valor1>valor3){
    printf("\n %i eh maior que %i e maior que %i!\n",valor2,valor1,valor3);
    }else{
    printf("\n %i eh maior que %i e maior que %i!\n",valor2,valor3,valor1);
    }}else if(valor3>valor1 && valor3>valor2){
    if(valor1>valor2){
    printf("\n %i eh maior que %i e maior que %i!\n",valor3,valor1,valor2);
    }else{
    printf("\n %i eh maior que %i e maior que %i!\n",valor3,valor2,valor1);
    }
    }


    return 0;
}
