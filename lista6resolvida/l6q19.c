#include <stdio.h>


/**
@author Eduardo José
@since 12/10/19
@version 1.0.0
*/


int main(){

char nome[10][25];
int idade[10], i = 0,jovens = 0, velhas = 0, qtd = 0, media;


for(i = 0 ; i < 10 ; i++){

    printf("Entre com o nome da %i pessoa: ", i+1);
    scanf("%s", &nome[i]);

    printf("Entre com a idade da %i pessoa: ", i+1);
    scanf("%d", &idade[i]);

    if(idade[i] < 0){
        break;
    }
    else{
        qtd+=idade[i];
    }

}

media = qtd/10;
printf("\n-------------------\n");
printf("PESSOAS MAIS VELHAS!\n");
printf("--------------------\n");
for( i = 0 ; i < 10 ; i++){
    if(idade[i] > media){
    printf("Nome %s  | Idade %i \n", nome[i], idade[i]);
    }
}
printf("\n-------------------\n");
printf("PESSOAS MAIS NOVAS!\n");
printf("--------------------\n");
for( i = 0 ; i < 10 ; i++){
    if(idade[i] < media){
        printf("Nome %s | Idade %i \n", nome[i], idade[i]);
    }
}


return 0;
}
