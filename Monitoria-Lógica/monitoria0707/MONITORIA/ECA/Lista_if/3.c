#include <stdio.h>
#include <stdlib.h>

int main()
{

    float l1,l2,l3;


    printf("\ninforme os 3 lados do triangulo!\n");
    scanf("%f %f %f",&l1,&l2,&l3);



    if(l1==l2 && l1==l3){
    printf("\ntriangulo equilatero!\n");
    }else if(l1!=l2 && l1!=l3 && l2!=l3){
    printf("\ntriangulo escaleno!\n");
    }else{
    printf("\ntriangulo isoceles!\n");
    }

    return 0;
}
