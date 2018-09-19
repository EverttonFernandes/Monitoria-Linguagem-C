/*2

a.  (1,0) Se os valores de entrada forem: 2 4 3 4 5 5 -4
b.  (1,0) Se os valores de entrada forem: 1 1 1 2 2 3 -1

*/

#include <stdio.h>

int main(){
    int i, j, t=0, n, r;
    int vet[10];

    while (t < 10 && n >= 0){
        scanf("%i",&n);
        if (n >= 0){
            vet[t] = n;
            t++;
        }
    }

    for (i=0 ; i<t ; i++){
        r = 0;
        for (j=i+1 ; j<t ; j++){
            if (vet[i] == vet[j])
                r = 1;
        }
        if (r == 1)
            printf("%i ",vet[i]);
    }

    return 0;
}
