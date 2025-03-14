#include <stdio.h>

int main(){
  float salario, salarioBonus;
  int pontos, bonus=0;

  printf("DIgite o Salário do Funcionario:R$ ");
  scanf("%f", &salario);

  printf("Digite a pontuação do Funcionario: ");
  scanf("%i", &pontos);


  if (pontos >=1000 ){
  bonus = 500;
  salarioBonus = salario + bonus;
  printf("O salario do funcionario, mais o bonus é de:  %.2f\n", salarioBonus);
  }
  else if (pontos >=500 && pontos <=999)
  {
    bonus = 300;
    salarioBonus = salario + bonus;
    printf("O salario do funcionario, mais o bonus é de:  %.2f\n", salarioBonus);
  }

  else if (pontos >=100 && pontos <=499)
  {
    bonus = 100;
    salarioBonus = salario + bonus;
    printf("O salario do funcionario, mais o bonus é de:  %.2f\n", salarioBonus);
  }

  else if (pontos >=1 && pontos <=99)
  {
    bonus = 25;
    salarioBonus = salario + bonus;
    printf("O salario do funcionario, mais o bonus é de:  %.2f\n", salarioBonus);
  }
  
  else{
    printf("Valor Inexistente");
  }

}

