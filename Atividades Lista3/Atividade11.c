#include <stdio.h>


/**
@author Eduardo José
@version 1.0.0
@since 13/09/19
*/


int main(){

int h1,h2,m1,m2,aux_mn,aux_mv,aux_hv, aux_hn;

printf("Valor h1: ");
scanf("%i", &h1);

printf("Valor h2: ");
scanf("%i", &h2);

printf("Valor m1: ");
scanf("%i", &m1);

printf("Valor m2: ");
scanf("%i", &m2);

if( m1 < m2){
    aux_mn = m1;
    aux_mv = m2;
}
else{
    aux_mv = m1;
    aux_mn = m2;
}

if( h1 < h2){

    aux_hn = h1;
    aux_hv = h2;
}
else{
    aux_hv = h1;
    aux_hn = h2;
}

printf("Homem mais velho com mulher nova = %i \n", aux_hv + aux_mn);
printf("Homem mais novo com mulher mais velha = %i", aux_hn * aux_mv);



}
