#include <stdio.h>
#include <string.h>

/**
@author Eduardo José
@since 12/10/19
@version 1.0.0
*/


int main(){

char str[20];
int qtd_de_espacos = 0;

printf("Entre com os dados da string: ");
fgets(str,20,stdin);

for(int i = 0 ; i < strlen(str) ; i++){

    if(str[i] == ' '){
        qtd_de_espacos++;
        continue;
    }
    str[i - qtd_de_espacos] = str[i];

}

printf("Sua nova string ==> %s \n", str);



return 0;
}
