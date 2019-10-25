#include <stdio.h>
#include <string.h>

/**
@author Eduardo José
@since 12/10/19
@version 1.0.0
*/
int main(){
#define TAMANHO 30
char str1[TAMANHO];
char str2[TAMANHO];
int i = 0;
printf("0 == Iguais  |  != 0 == Diferentes!\n\n");
printf("Entre com os valores das strings: ");
scanf("%s %s", &str1 , &str2);

for(i = 0 ; str1[i] != '\0' && str2[i] != '\0' ;i++)
    if(str1[i]!=str2[i])
        break;

printf("\nResultado = %d \n",str1[i] - str2[i]);
getch();

return 0;
}
