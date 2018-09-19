#include<stdio.h>
#include<locale.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<locale.h>

/**
Escreva um programa que peça para o usuário digitar caracteres até que o ENTER seja pressionado.
 Mostrar na tela somente os caracteres que forem letras maiúsculas,
 minúsculas, números, ou espaço.
**/
main(){
    char caracter;
    int cont_maiuscula=0;
    int cont_minuscula=0;
    int cont_numeros=0;
    int cont_espaco=0;
    int cont_enter=0;
    printf("Digite caracteres \n");
    do{

        caracter=getche();
        if(caracter>='a' && caracter <='z'){
            cont_minuscula++;
        }
        else if(caracter>='A' && caracter <='Z'){
            cont_maiuscula++;
        }
        else if(caracter>='0' && caracter <='9'){
            cont_numeros++;
        }
        else if(caracter==' '){
            cont_espaco++;
        }

    }while(caracter!=13);

    printf("Foi informado %i minusculas\n",cont_minuscula);
    printf("Foi informado %i maiuscula\n",cont_maiuscula);
    printf("Foi informado %i numeros\n",cont_numeros);
    printf("Foi informado %i vezes o espaco\n",cont_espaco);
}

