#include <stdio.h>
#include <string.h>

/**
@author Eduardo José
@since 12/10/19
@version 1.0.0
*/

int main(){

char str[20],letra;
int contador_de_vogais = 0;

printf("Entre com a letra para substituir:");
gets(&letra);

printf("Entre com os dados da string: ");
gets(&str);



for(int i = 0 ; i < strlen(str) ; i++){


    if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ){
        contador_de_vogais++;
        str[i] = letra ;

    }
}

printf("Sua nova string == > [%s] \n", str);
printf("Sua string tem == > [%d] vogais", contador_de_vogais);


return 0;
}
