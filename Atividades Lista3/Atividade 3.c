#include <stdio.h>


/**
@author Eduardo José
@version 1.0.0
@since 13/09/19
*/


int main(){

int qtd_atual, qtd_max, qtd_min, qtd_med;

printf("Diga-me a qtd atual: ");
scanf("%i", &qtd_atual);

printf("Diga-me a qtd max: ");
scanf("%i", &qtd_max);

printf("Diga-me a qtd min: ");
scanf("%i", &qtd_min);

qtd_med = (qtd_max + qtd_min )/2;


if(qtd_atual >= qtd_med){

    printf("Nao efetuar a compra!");
}
else{
    printf("Efetuar a compra!");
}


}
