#include <stdio.h>

int main(){

int horas;
float valorHora, salario, horasExtras, salarioSemanal;

printf("Digite o valor da hora trabalhada: ");
scanf("%f", &salarioSemanal);

printf("Digite o Salario pr hora do funcionario:R$ ");
scanf("%f", &salario);

if (salarioSemanal > 40 ){

    horasExtras = (salarioSemanal - 40) * 1.5 + (40 * salario);
}

printf("O Salario do funcionario com horas extras é de %.2f", horasExtras);


}   