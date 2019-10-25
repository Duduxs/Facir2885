#include <stdio.h>

/**
@author Eduardo José
@since 12/10/19
@version 1.0.0
*/

int main(){

char str1[15];

printf("Diga seu nome: ");
gets(&str1);

if(str1[0] == 'a' || str1[0] == 'A'){
    printf("Seu nome e %s", str1);
}
else{
    printf("Nome nao comeca com a");
}

return 0;
}
