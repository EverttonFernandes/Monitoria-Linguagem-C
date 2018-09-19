#include<stdio.h>
#include<stdlib.h>

main(){
    int i=0,j=0;
    int tam=30;
    int consoantesDaPalavra1=0;
    int consoantesDaPalavra2=0;
    char palavra1[tam];
    char palavra2[tam];
    char letra;

    printf("Informe uma palavra: \n");
    do{
        letra=getche();
        palavra1[tam]=letra;
        i++;
    }while(letra!=13 && i<tam);

    printf("Informe outra palavra: \n");
    do{
        letra=getche();
        palavra1[tam]=letra;
        j++;
    }while(letra!=13 && j<tam);

    for(i=0; i<tam; i++){
        for(j=0; j<tam; j++){
            if(palavra1[i]==palavra2[j]){
                printf("IGUAIS");
                break;
            }
            else{
                printf("DIFERENTES");
                break;
            }
        }
    }
        /**for(i=0; i<palavra1[t1]; i++){
            if(palavra1[i]!='a' || palavra1[i]!='e' || palavra1[i]!='i' || palavra1[i]!='o' || palavra1[i]!='u'){
                consoantesDaPalavra1++;
            }
        }
        for(j=0; j<palavra2[t2]; j++){
            if(palavra2[j]!='a' || palavra2[j]!='e' || palavra2[j]!='i' || palavra2[j]!='o' || palavra2[j]!='u'){
                consoantesDaPalavra2++;
            }
        }
        printf("A palavra 1 tem %i consoantes \n",consoantesDaPalavra1);
        printf("E a palavra 2 tem %i consoantes \n",consoantesDaPalavra2);
    }**/
}
