#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    int i,y;
    int num1[100];
    int num[100];
    int raiz[100];

            do{
            printf("DIGITE UM VALOR MAIOR QUE ZERO\n");
            scanf("%i",&N);
            }while(N<=0);

        for(i=0;i<N;i++){
            do{
            printf("DIGITE UM POSITIVO VALOR PARA A RAIZ\n");
            scanf("%i",&num1[i]);
            }while(num1[i]<=0);

        }

for(y=0;y<N;y++){
    raiz[y]=0;
    num[y]=num1[y];
for(i=1;i<=num[y];i+=2){

    num[y]=num[y]-i;
    raiz[y]++;
   }
}

for(y=0;y<N;y++){
   printf("%i = %i\n",num1[y],raiz[y]);
}

    return 0;
}
