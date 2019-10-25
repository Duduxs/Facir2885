#include <stdio.h>
#include <string.h>

/**
@author Eduardo José
@since 12/10/19
@version 1.0.0
*/

int main(){
#define TAMANHO 15

char str1[TAMANHO];
int tamanho_da_string;
printf("Diga seu primeiro nome: ");
gets(&str1);

tamanho_da_string = strlen(str1);

printf("Sua string tem %i letras", tamanho_da_string);
return 0;
}
