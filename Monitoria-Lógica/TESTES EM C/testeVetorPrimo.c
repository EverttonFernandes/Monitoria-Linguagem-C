#include <stdlib.h>
#include <stdio.h>

int main(){

    int i, j;
    int Vetor[10];
    int primo;

    for (i = 0; i < 10; i++){
        printf("Digite o valor da posicao %d do vetor: ", i + 1);
        scanf("%d", &Vetor[i]);
    }

    for (i = 0; i < 10; i++){
        for (j = 2;j < Vetor[i]; j++){
            primo=1;
            if ((Vetor[i] % j) == 0)
            primo = 0;
        }
            if (primo)
            printf("\nO numero %d, na posicao %d, eh primo.",i+1, Vetor[i]);
    }

    printf("\n\n");
    system("PAUSE");
    return 0;
}
