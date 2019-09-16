#include <stdio.h>


/**
@author Eduardo José
@version 1.0.0
@since 13/09/19
*/


int main(){

int n1,n2,n3;

printf("Valor 1: ");
scanf("%i", &n1);

printf("Valor 2: ");
scanf("%i", &n2);

printf("Valor 3: ");
scanf("%i", &n3);

if(n1 > n2 && n1 > n3){

    if( n2 > n3){
        printf("%i %i %i", n3,n2,n1);
    }
        else{
        printf("%i %i %i", n2,n3,n1);
        }
}

if(n2 > n1 && n2 > n3){

    if( n1 > n3){
        printf("%i %i %i", n3,n1,n2);
    }
        else{
        printf("%i %i %i", n1,n3,n2);
        }
}

if(n3 > n2 && n3 > n1){

    if( n2 > n1){
        printf("%i %i %i", n1,n2,n3);
    }
        else{
        printf("%i %i %i", n2,n1,n3);
        }
}



}
