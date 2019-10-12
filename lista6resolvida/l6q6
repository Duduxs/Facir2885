#include <stdio.h>

/**
@author Eduardo José
@since 12/10/19
@version 1.0.0
*/

int main(){
#define TAMANHO 15

char nome[TAMANHO], sexo;
int idade;

printf("Diga-me seu nome: ");
gets(&nome);

printf("Entre com o sexo (f ou m):");
scanf("%c", &sexo);

printf("Entre com a idade: ");
scanf("%i", &idade);

if( idade < 25 && sexo == 'f' || idade < 25 && sexo == 'F' ){
    printf("ACEITA! \n====%s====", nome);

}
else{
    printf("NAO ACEITA!");
}


return 0;
}
