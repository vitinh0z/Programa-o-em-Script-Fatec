#include <stdio.h>


int main(){
  float peso, altura, contaIMC;

  printf("Digite seu peso (KG): ");
  scanf("%f", &peso);

  printf("Digite sua altura (m): ");
  scanf("%f", &altura);

  contaIMC = peso / (altura * altura);

  if (contaIMC < 18.5){
    printf("Você é classificado como: Magreza\n");
  }
  else if (contaIMC >= 18.5 && contaIMC <= 24.9){
    printf("Você é classificado como: Normal\n");
  }
  else if (contaIMC >= 25 && contaIMC <= 29.9){
    printf("Você é classificado como: Sobrepeso\n");
  }
  else if (contaIMC >= 30 && contaIMC <= 39.9){
    printf("Você é classificado como: Obeso\n");
  }
  else if (contaIMC >= 40.0){
    printf("Você é classificado como: Obesidade Grave\n");
  }
  else {
    printf("Valor inserido inválido.\n");
    return 1;
  }

  return 0;
}
