#include <stdio.h>


/**
@author Eduardo José
@version 1.0.0
@since 13/09/19
*/


int main(){

float salario_fixo,valor_de_vendas;

printf("Diga-me seu salario fixo: ");
scanf("%f", &salario_fixo);

printf("Diga-me o valor das vendas efetuadas: ");
scanf("%f", &valor_de_vendas);


if(valor_de_vendas <= 1500){

    printf("Seu salario e: %.2f", salario_fixo*1.03);
}
else{
    printf("Seu salario e: %.2f", (salario_fixo*1.03)*1.05);
}

}
