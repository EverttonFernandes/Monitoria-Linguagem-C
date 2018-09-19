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





/**
 Escreva um programa que peça para o usuário digitar seu primeiro nome (caractere por caractere) até que o ENTER seja digitado
 ('13'). Então mostre na tela se o nome é válido. Considere o nome válido caso o primeiro caractere seja uma letra maiúscula,
  e todos os outros forem minusculas.

main(){
    char nome;
    int cont=0,i=0;

    printf("Digite seu primeiro nome:");

    do{
        nome = getche();
        if( i== 0 && nome>='A' && nome<='Z'){
            cont++;
        }
    else{
        if(i!=0 && nome>='a' && nome<='z'){
            cont++;
        }
    }
    i++;
    }while(nome!=13);
    /// Essa linha abaixo diminui 1 do tamanho do nome que foi digitado, pois o enter também conta
    i-=1;
    if(i==cont){
        printf(" \nValido");
    }
    else{
        printf(" \nInvalido");
    }
    ///printf("\n%i ",cont);
}
**/
/**
 Considerando um circuito elétrico simples, conforme mostrado na figura abaixo,
escreva um programa que pergunte para o usuário qual das três grandezas ele pretende calcular.
 Baseado na escolha feita, peça para ele informar as outras duas grandezas.
 Calcule e mostre na tela o resultado da operação.

 main(){

    setlocale(LC_ALL,"portuguese");

    char grandeza;
    int resistencia;
    int tensao;
    int corrente;
    int resultado_tensao;
    int resultado_corrente;
    float resultado_resistencia;

    printf("Digite o valor da resistencia: \n");
    scanf("%i",&resistencia);
    printf("Digite o valor da tensão: \n");
    scanf("%i",&tensao);
    printf("Digite o valor da corrente: \n");
    scanf("%i",&corrente);

    printf("Qual das 3 grandezas elétricas voce pretende calcular? Digite: \n R-Resistencia \n V-Tensão \n I-Corrente \n ");
    scanf(" %c",&grandeza);

        switch(grandeza){
            case 'V':
            resultado_tensao=(resistencia*corrente);
            printf("Tensão=Resistencia*Corrente \n tensão= %i*%i \n O resultado da tensão é: %i volts"
                   ,resistencia,corrente,resultado_tensao);
            break;

            case 'R':
            resultado_resistencia=(tensao/corrente);
            printf("Resistência=Tensão/Corrente \n Resistência= %i/%i \n Resistência é %.2f ohms \n"
                    ,tensao,corrente,resultado_resistencia);
            break;

            case 'I':
            resultado_corrente=(tensao/resistencia);
            printf("Corrente=Tensão/Resistência \n Corrente= %i / %i \n Corrente elétrica é %i âmperes \n"
                   ,tensao,resistencia,resultado_corrente);
            break;

            default:
                printf("Opção inválida!");
        }
 }
**/
/** Programa 2 que pede um valor e verifica se ele e primo
main(){

    int numero;
    int cont=0;
    int i;

    printf("Informe um numero e vamos descobrir se ele e primo: ");
    scanf("%i",&numero);

    for(i=1; i<=numero; i++){
        if(numero%i==0){
            cont++;
        }
    }
    if(cont==2){
        printf("O numero informado e primo! \n");
    }
    else{
        printf("O numero informado nao e primo! \n");
    }
}
**/

/** PROGRAMA 1 teste de mesa com atribuição, comandos de entrada e saída e estrutura de seleção(IF ELSE)
main(){
    int n1=10;
    int n2=3;
    int n3=7;
    int n4;

    scanf("%i",&n4);
    n1=n2;
    n2=n3;
    n3+=n2;
    n4+=n1+n2+n3;

    if(n4%2==0){
        printf("O total da soma e par \n");
    }
    else{
        printf("O total da soma e impar \n");
    }
    printf("N4: %i\n",n4);
}
**/
