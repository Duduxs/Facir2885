#include <stdio.h>


/**
@author Eduardo José
@version 1.0.0
@since 13/09/19
*/


int main(){

int n1,n2;

printf("Valor 1: ");
scanf("%i", &n1);

printf("Valor 2: ");
scanf("%i", &n2);

if(n1 == n2){
    printf("Numeros iguais!");
}
else if(n1 > n2){
    printf("Primeiro e maior!");
}
else{
    printf("Segundo e maior!");
}


}
