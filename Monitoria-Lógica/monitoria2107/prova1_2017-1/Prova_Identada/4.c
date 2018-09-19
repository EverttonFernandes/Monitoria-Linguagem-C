#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int Q;
    int ind=0;
    int masc=0;
    int fem=0;
    float media_masc=0;
    float media_fem=0;
    float salario[100];
    char sexo[100];
    float porc;
    printf("Q de pessoas entrevistadas\n");
    scanf("%i",&Q);

    for(i=0;i<Q;i++){
        do{
            printf("SALARIO\n");
            scanf("%f",&salario[i]);

        }while(salario[i]<=0);

    fflush(stdin);
    printf("GENERO: m = MASCULINO \t f = FEMININO\n");
    scanf("%c",&sexo[i]);
    system("cls");
    }

    for(i=0;i<Q;i++){

    if(sexo[i] =='m'){
    masc++;
     media_masc+=salario[i];
    }else if( sexo[i]=='f'){
    fem++;
     media_fem+=salario[i];
    }else{
    ind++;
    }
    }

    media_masc=media_masc/masc;
    media_fem=media_fem/fem;

    if(media_fem>media_masc){
    porc=media_fem/media_masc;
        printf("MULHERES\n");
        printf("%.2f\n",(porc-1)*100);
        printf("%i\n",ind);
    }else{
    porc=media_masc/media_fem;

        printf("HOMENS\n");
        printf("%.2f\n",(porc-1)*100);
        printf("%i\n",ind);
    }


    return 0;
}
