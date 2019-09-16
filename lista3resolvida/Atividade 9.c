#include <stdio.h>


/**
@author Eduardo José
@version 1.0.0
@since 13/09/19
*/


int main(){
char t1[10] , t2[20];
int t1_g,t2_g;

printf("Time 1: ");
scanf("%s", &t1);

printf("Time 2: ");
scanf("%s", &t2);

printf("Qtd de gol time 1: ");
scanf("%i", &t1_g);

printf("Qtd de gol time 2: ");
scanf("%i", &t2_g);

if(t1_g > t2_g){
    printf("Time 1 vencedor ( %s )", t1);
}
else if ( t1_g < t2_g){
    printf("Time 2 vencedor ( %s )", t2);
}
else{
    printf("Empate");
}


}
