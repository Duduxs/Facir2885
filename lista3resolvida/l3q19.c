#include <stdio.h>


/**
@author Eduardo José
@version 1.0.0
@since 13/09/19
*/


int main(){

for(int i = 1 ; i <= 100 ; i++){

    if(i % 2 == 0){
        continue;
    }
    printf("%i \n",i);
}

}
