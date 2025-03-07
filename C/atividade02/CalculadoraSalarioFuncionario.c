#include <stdio.h>

int main(){

float salarioIncial, SalarioNovo, porcentagem = 25%

printf("DIgite o salario do funcionario:R$");
scanf("%f", &salarioIncial);

SalarioNovo = (salarioIncial + 0.10) / 100;

SalarioNovo = salarioIncial * (1 + (porcentagem / 100));

printf("Valor final do Salario será de: %.2f\n", SalarioNovo);

}