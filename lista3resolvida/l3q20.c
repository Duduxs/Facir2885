#include <stdio.h>


/**
@author Eduardo José
@version 1.0.0
@since 13/09/19
*/


int main(){

int soma = 0 , media, i,qtd = 0;

for(i = 10 ; i <= 100 ; i+= 2){
soma+=i;
qtd++;
}

media = soma/qtd;
printf("%i", media);
}
