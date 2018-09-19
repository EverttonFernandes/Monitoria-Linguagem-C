#include<stdio.h>
#include<locale.h>
/** Faça um programa que peça para o usuário informar 10 números,
 após isso faça a soma total de todos os valores que são impares, ao fim mostre a soma total dos mesmos. **/

 main(){
    /** FIZ ESTE PROGRAMA USANDO FOR, WHILE E DO WHILE PARA QUE VOCÊS POSSAM OLHAR CADA UMA DAS FORMAS
    TESTEM UM POR UM DEIXANDO SEM COMENTÁRIOS A FORMA QUE VOCÊS DESEJAM ANALISAR **/
    setlocale(LC_ALL,"portuguese");
    int numero;
    int i=0;
    int somaImpares=0;

    /**for(i=0; i<10; i++){ /// USANDO FOR
        printf("Informe o %i° valor: \n",i+1); /// PEDE O NUMERO
        scanf("%i",&numero);/// GUARDA E JÁ VERIFICA TUDO AO MESMO TEMPO, SEE ELE É IMPAR OU NÃO E JÁ VAI PEDINDO E ACUMULANDO NA SOMA
        if(numero%2!=0){
            somaImpares += numero;
        }
    }**/

    /**while(i<10){ /// USANDO WHILE
        printf("Informe o %i° valor: \n",i+1);
        scanf("%i",&numero);
        if(numero%2!=0){
            somaImpares += numero;
        }
        i++;
    }**/
    do{ /// USANDO DO WHILE
        printf("Informe o %i° valor: \n",i+1); /// pede um numero, DEPOIS PEDE OUTRO, E OUTRO E OUTRO E E ASSIM SUCESSIVAMENTE
        scanf("%i",&numero); /// guarda este numero PARA FAZER A VERIFICAÇÃO, DEPOIS PEGA O PRÓXIMO E VERIFICA, E ASSIM POR DIANTE
        if(numero%2!=0){
            somaImpares += numero; /// CASO O NUMERO SEJA IMPAR, ACUMULA NA SOMA
        }
        i++; /// i era 0, passa a ser um, pede o valor novamente, verifica se é impar... depois o i vira 2 e assim sucessivamente até ser menor que 10
    }while(i<10);

    printf("A soma total dos impares é: %i ",somaImpares);
 }
