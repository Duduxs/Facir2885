#include <stdio.h>


/**
@author Eduardo José
@version 1.0.0
@since 13/09/19
*/


int main(){

int numero_da_conta, saldo, debito, credito, saldo_atual;

printf("Diga-me o numero da conta: ");
scanf("%i", &numero_da_conta);

printf("Diga-me seu saldo: ");
scanf("%i", &saldo);

printf("Diga-me o valor do debito: ");
scanf("%i", &debito);

printf("Diga-me o valor do credito: ");
scanf("%i", &credito);

saldo_atual = (saldo - debito + credito);


if(saldo_atual >= 0 ){

    printf("Saldo positivo!");
}
else{
    printf("Saldo negativo!");
}


}
