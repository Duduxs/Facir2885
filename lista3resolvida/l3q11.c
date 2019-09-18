#include <stdio.h>

/**
@author Eduardo José
@version 1.0.0
@since 13/09/19
*/

int main(){

int hv,hn,mv,mn,aux;

printf("Valores homens e mulheres: ");
scanf("%i %i %i %i", &hv, &hn, &mv, &mn);

if( hv < hn){
    aux = hv;
    hv = hn;
    hn = aux;
}
else if( mv < mn){
    aux = mv;
    mv = mn;
    mn = aux;
}

printf("Homem mais velho com mulher nova = %i \n", hn + mn);
printf("Homem mais novo com mulher mais velha = %i", hv*mv);



}
