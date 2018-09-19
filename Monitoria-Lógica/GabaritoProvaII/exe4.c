/*

Pacman é um jogo muito conhecido, onde o personagem tenta comer a
maior quantidade possível de bolinhas, tendo ao mesmo tempo que fugir
de vários fantasmas. Dessa vez, nosso personagem quer carregar a
comida coletada para casa, mas o encontro com um fantasma, ao invés de
terminar o jogo, faz com que toda a comida coletada seja roubada.
Neste problema os fantasmas não se movem, e o jogador sempre faz o
Pacman percorrer o seguinte caminho (observe também o desenho):

1.  O Pacman começa no canto superior esquerdo do tabuleiro.
2.  O Pacman percorre toda a linha, da esquerda para direita, até chegar ao lado direito do tabuleiro.
3.  O Pacman desce uma posição e percorre toda a linha, desta vez da direita para a esquerda, até chegar ao lado esquerdo do tabuleiro.
4.  Ao chegar ao lado esquerdo, desce uma posição e percorre toda a linha, da esquerda para direita.
5.  As etapas 2, 3 e 4 se repetem até que todo o tabuleiro tenha sido percorrido.

Você̂ deve escrever um programa que imprima na tela a quantidade de
comida que o Pacman irá levar, considerando que ele percorre todo o
tabuleiro. A entrada do programa é composta de um inteiro N, que
define o tamanho do tabuleiro do jogo, o qual é quadrado (uma matriz
com o mesmo número de linhas e colunas). Depois disso, os valores que
irão preencher o tabuleiro (a matriz), seguindo a seguinte convenção:

- O valor 0 significa uma posição vazia
- O valor 1 significa uma posição com comida
- O valor 2 significa uma posição com fantasma

#Entrada
5
0 1 1 1 0
0 0 1 1 2
0 0 2 1 1
2 1 1 1 1
0 0 1 1 1
#Saída
3

#Entrada
3
0 1 0
1 2 2
1 1 1
#Saída
45

*/

#include <stdio.h>

int main(){

    int n,comida = 0;
    int i,j;
    printf("Defina o tamanho da matriz: \n");
    scanf("%i",&n);/// exemplo se for digitado 5, a matriz sera 5x5

    int tabuleiro[n][n];

    for (i = 0; i < n; i++){
        printf("Preenchendo a linha %i\n",i); /// preenche a primeira linha da matriz, depois a 2º,3º,4º e 5º como descrito no exemplo
        for (j = 0; j < n; j++){
            printf("[%i][%i] = ",i,j); ///vai mostrando a linha e a coluna da matriz
            scanf("%i", &tabuleiro[i][j]);/// preenche a matriz com os valores 0,1 ou 2
        }
    }

    for (i = 0; i < n; i++){
        if(i % 2 == 0){
            for (j = 0; j < n; j++){
                if(tabuleiro[i][j] == 1){ /// caso for encontrado dentro da matriz o valor 1, o contador de comidas incrementa
                    comida++;
                }
                if(tabuleiro[i][j] == 2){ /// caso for 2, significa que algum inimigo foi encontrado então ZERA o contador comidas
                    comida = 0;
                }
            }
        }
        else{ /// percorre a matriz de trás para frente
            for (j = n - 1; j >= 0; j--){
                if(tabuleiro[i][j] == 1){
                    comida++; /// caso for encontrado dentro da matriz o valor 1, o contador de comidas incrementa
                }
                if(tabuleiro[i][j] == 2){
                    comida = 0; /// caso for 2, significa que algum inimigo foi encontrado então ZERA o contador comidas
                }
            }
        }
    }

    printf("%i\n", comida);

    return 0;
}
