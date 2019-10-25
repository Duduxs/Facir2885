#include <stdio.h>
#include <string.h>


/**
@author Eduardo José
@since 12/10/19
@version 1.0.0
*/

int main(){

char str[20];
int soma = 0;

printf("Entre com os dados da string: ");
gets(&str);

for(int i = 0 ; i < strlen(str) ; i++){

    str[i] += 1;


}
printf("Sua nova String == > %s" ,str);




return 0;
}
