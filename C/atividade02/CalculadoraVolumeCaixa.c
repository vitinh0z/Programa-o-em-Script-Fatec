#include <stdio.h>

int main(){

float altura, comprimento, largura, volume;

printf("Digite o valor do Comprimento da Caixa: ");
scanf ("%f", &comprimento);

printf("\nDigite o valor do Altura: ");
scanf("%f", &altura);

printf("Digite valor da Largura: ");
scanf("%f", &largura);


volume = (comprimento * altura * largura);

printf("O volume da caixa é de %f", volume);


}