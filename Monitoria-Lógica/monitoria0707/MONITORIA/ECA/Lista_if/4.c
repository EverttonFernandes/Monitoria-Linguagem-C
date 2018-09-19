#include <stdio.h>
#include <stdlib.h>

int main()
{

    int idade;


    printf("\n informe a sua idade!\n");
    scanf("%i",&idade);



    if(idade<13){
    printf("\nCRIANCA!\n");
    }else if(idade>=13 && idade<=19){
    printf("\nADOLESCENTE!\n");
    }else if(idade>=20 && idade<=60){
    printf("\nADULTO!\n");
    }else if(idade>60){
    printf("\nIDOSO!\n");
    }

    return 0;
}
