#include <stdio.h>

int main(){

  float nota1, nota2, media, freq;

  printf("Entre com a primeira nota: ");
  scanf("%f", &nota1);
  printf("Entre com a segunda nota: ");
  scanf("%f", &nota2);
  printf("Entre com a frequencia: ");
  scanf("%f", &freq);
  media = (nota1 + nota2) / 2;

  if (media >= 6 && freq >= 75){
    printf("ALuno aprovado. Sua média foi: ", media);

  }
  else if (media>= 4 && media < 6 && freq >= 75){
    printf("Aluno de Exame. Sua média foi ", media);
  }

  else {
    printf ("Aluno reprovado ");

  }
}