#include <stdio.h>
#include <stdlib.h>

int main()
{

    float n1,n2,n3, media,rec;

    printf("Informe 3 notas!\n");
    scanf("%f %f %f",&n1,&n2,&n3);

    media=(n1+n2+n3)/3;

    if(media<6){

        printf("Nota abaixo de 6\n");
        printf("Informe a nota da recuperacao!\n");
        scanf("%f",&rec);

        if(rec>=6){
            printf("APROVADO\n");
        }else{
            printf("REPROVADO\n");
        }
    }
    else{
        printf("APROVADO\n");
    }
    return 0;
}
