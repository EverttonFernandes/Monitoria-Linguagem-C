#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    int i,y;
    int num1;
    int num;
    int raiz;

    do{
        printf("DIGITE UM VALOR MAIOR QUE ZERO\n");
        scanf("%i",&N);
    }while(N<=0);

    for(y=0;y<N;y++){
        do{
            printf("DIGITE UM POSITIVO VALOR PARA A RAIZ\n");
            scanf("%i",&num1);
        }while(num1<=0);

        raiz=0;
        num=num1;
        for(i=1;i<=num;i+=2){
            num=num-i;
            raiz++;
        }
        printf("%i = %i\n",num1,raiz);
    }
    return 0;
}
