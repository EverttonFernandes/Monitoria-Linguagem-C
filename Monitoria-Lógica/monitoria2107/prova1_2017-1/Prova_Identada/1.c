#include <stdio.h>
/** Supondo que na primeira vez os valores de entrada são 3 e 3
b) os valores de entrada são 2 e 4
 **/
int main(){
    int a,b,i,aux1,aux2,s;
    scanf("%i",&a);
    scanf("%i",&b);
    aux1=a;
    for(i=1;i<b;i++){
        s=0;
        aux2=a;
        while(aux2>0){
            s=s+aux1;
            aux2--;
        }
        aux1=s;
    }
    printf("%i\n",aux1);
    return 0;
}
