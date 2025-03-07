#include <stdio.h>

int main(){

float temperaturaCelsius, contaversao;

printf("Digite a temperetura em celsius: ");
scanf("%f",&temperaturaCelsius);

contaversao = (temperaturaCelsius * 1,8) + 32;

printf("A temperatura %2.f é %2.f\n", temperaturaCelsius, contaversao);

}