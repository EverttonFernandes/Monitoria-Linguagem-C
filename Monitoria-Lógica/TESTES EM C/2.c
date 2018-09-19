/**Elabore um programa que solicite valores inteiros e positivos para preencher uma matriz
de 5 x 5. Após o preenchimento da matriz, o programa deverá imprimir na tela:
a.  A soma dos valores contidos na linha 4.
b.  A soma dos valores contidos na coluna 2.
c.  A soma dos valores da diagonal principal.
d.  A soma de todos os valores da matriz.**/
#include<stdio.h>

main(){
    int mat[5][5],i,j,b,soma[4];
    printf("Informe os valores da matriz:\n");
    for(i=0;i<5;i++){/// estes dois for servem para inserir os valores na matriz 5x5
        for(j=0;j<5;j++){
            scanf("%i",&mat[i][j]);
            while(mat[i][j]<0){/// este while serve para validar os valores para positivo
                printf("\nValor invalido. Digite novamente: ");
                scanf("%i",&mat[i][j]);///aqui ele substitui o valor q tiver invalido
            }
        }
    }
    printf("\n\n");

    for(b=0;b<4;b++)
        soma[b]=0;/// este soma[b] serve para zerar o somatorio para não conter lixo de memoria
    for(i=0;i<5;i++){
        soma[2]+=mat[i][i];/// o soma[2] serve para somar os valores da diagonal principal
        for(j=0;j<5;j++){
            printf(" %i ",mat[i][j]);///somente mostra os valores da matriz no formato da matriz
            soma[3]+=mat[i][j];/// o soma[3] serve para somar todos os valores da matriz
            if(i==3)/// linha 4 mas na matriz ela é a 3 ex: linha 0, linha 1, linha 2, linha 3, linha 4 totalizando 5 linhas
                soma[0]+=mat[3][j];/// soma[0] serve para somar todos os elementos da linha quatro mas na matriz representa a linha 3
            if(i==1)/// coluna 2 mas na matriz ela é a 1 ex: coluna 0, coluna 1, coluna 2, coluna 3, coluna 4 totalizando 5 colunas
                soma[1]+=mat[j][1];/// soma[1] serve para somar todos os elementos da coluna 2 que na matriz ela representa a coluna 1
        }
            printf("\n\n");
    }
    for(i=0;i<4;i++)
        printf("\n resposta letra %c) = %i ",65+i,soma[i]);/// 65 mais i é para mostrar as letras das questões e a soma vai mostrar seus devidos resultados
}
