#include <stdio.h>


/**
@author Eduardo José
@version 1.0.0
@since 13/09/19
*/


int main(){
char nome[] = " ";
int qtd_adquirida,preco,total,total_a_pagar;

printf("Diga o nome: ");
scanf("%s", &nome);

printf("Qtd adquirida: ");
scanf("%i", &qtd_adquirida);

printf("preco unitario: ");
scanf("%i", &preco);

total = qtd_adquirida * preco;

if(qtd_adquirida <= 5){

printf("%i", total_a_pagar = total - 0.98);
}

else if( qtd_adquirida > 5 && qtd_adquirida <= 10){

printf("%i",total_a_pagar = total - 0.97);
}
else{
    printf("%i",total_a_pagar = total - 0.95);
}




}
