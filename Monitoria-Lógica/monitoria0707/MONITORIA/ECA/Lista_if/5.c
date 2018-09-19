#include <stdio.h>
#include <stdlib.h>

int main()
{

    float temp;


    printf("\n informe a temperatura do tanque!\n");
    scanf("%f",&temp);


    int temp1 = -50;
    if(temp < temp1){
    printf("\n ESTADO CRITICO!\n");
    }else if(temp>=0 && temp<=300){
    printf("\n NORMAL!\n");
    }else if(temp>=500){
    printf("\n ESTADO CRITICO!\n");
    }else{
    printf("\nALERTA\n");
    }

    return 0;
}
