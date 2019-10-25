#include <stdio.h>

int parada = 0;

int main(){


    printf("Contando... %i \n", parada);

    parada++;

    if(parada != 11){

        main();
    }
    return 0;
}
