#include<stdio.h>

/**
Escreva um programa que peça para o usuário informar 2 valores.
Após isso mostre a soma, subtração, multiplicação e divisão
dos mesmos.
**/
main(){
    float soma,sub,mult,div;
    float n1,n2;

    printf("Informe dois valores: \n"); /// AQUI PEÇÕ OS VALORES
    scanf("%f",&n1);
    scanf("%f",&n2);

    soma = n1+n2;
    sub = n1-n2;
    mult = n1*n2;
    div = n1/n2;

    printf("%.2f + %.2f = %.2f \n",n1,n2,soma);
    printf("%.2f - %.2f = %.2f \n",n1,n2,sub);
    printf("%.2f * %.2f = %.2f \n",n1,n2,mult);
    printf("%.2f / %.2f = %.2f \n",n1,n2,div);
}
