#include <stdio.h>


/**
@author Eduardo José
@version 1.0.0
@since 13/09/19
*/


int main(){

int n1,n2;

printf("n1: ");
scanf("%i", &n1);

printf("n2: ");
scanf("%i", &n2);

while(n2 == 0){
printf("n2: ");
scanf("%i", &n2);
}

printf("Didisao: %i", n1/n2);

}
