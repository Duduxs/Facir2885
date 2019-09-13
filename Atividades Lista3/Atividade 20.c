#include <stdio.h>


/**
@author Eduardo José
@version 1.0.0
@since 13/09/19
*/


int main(){

int soma, media, i,qtd;

for(i = 10 ; i <= 100 ; i+= 2){

soma+=i;
qtd++;
}
media = soma/qtd;
printf("%i", media);
}
