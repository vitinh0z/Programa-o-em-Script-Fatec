#include <stdio.h>

int main(){
  float valorMoeda, valorReal, umDolar=5.88, umaLibra=7.20, umEuro=6.10, umPeso=0.01;
  int menuEscolhaMoeda;
  printf("Digite valor do Real para ser convertido:R$ ");
  scanf("%f",&valorReal);

  printf("1 - Dolar \n 2 - Libra \n 3- Euro \n 4 - Peso");
  scanf ("%d", &menuEscolhaMoeda);

  switch (menuEscolhaMoeda)
{
case 1: 
  valorMoeda = valorReal/umDolar;
  printf("O valor de R$ %.2f é de U$ %.2f\n ",valorReal, valorMoeda);
  break;
case 2:
  valorMoeda = valorReal/umaLibra;
  printf("O valor de R$ %.2f é de GBP %.2f\n ",valorReal, valorMoeda);
  break;
case 3:
  valorMoeda = valorReal/umEuro;
  printf("O valor de R$ %.2f é de EUR %.2f\n ",valorReal, valorMoeda);
  break;
case 4:
  valorMoeda = valorReal/umPeso;
  printf("O valor de R$ %.2f é de ARS %.2f\n ",valorReal, valorMoeda);
  break;


default:
  printf("Opção Invalida\n");

}
}