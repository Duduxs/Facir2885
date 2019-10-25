#include <stdio.h>
#include <string.h>

/**
@author Eduardo José
@since 12/10/19
@version 1.0.0
*/

int main(){

char str[20];
int contagem = 0;

printf("Entre com os dados da sua string: ");
gets(&str);

for(int i = 0 ; i < strlen(str) ; i++){

    if(str[i] == '1'){
        contagem++;
    }
}
printf("Sua string %s contem == [%d] 1 ",str,contagem);


return 0;
}
