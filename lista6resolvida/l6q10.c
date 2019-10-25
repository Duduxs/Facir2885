#include <stdio.h>
#include <string.h>

/**
@author Eduardo José
@since 12/10/19
@version 1.0.0
*/

int main(){

char str[20];

printf("Entre com os dados da string: ");
gets(&str);

int tamanho = strlen(str);

for(int i = tamanho ; i >= 0 ;  i--){

    printf("%c", str[i]);

}



return 0;

}
