#include <stdio.h>

int main(){

    float nota1, nota2, media, mediageral = 0;
    int x;
    
    for (x = 0; x<10; x++)
    
    {
        printf("\nCalculo da media do aluno %i", x+1);

        printf("\nDigite a primeira nota: ");
        scanf("%f",&nota1);

        printf("\nDigite a segunda nota: ");
        scanf("%f",&nota2);

        media = (nota1 + nota2) / 2;

        printf("\nA media do aluno %i: %.2f\n", x+1, media);
        mediageral = mediageral + media;

    }
    printf("\nA media da sala: %.2f\n", mediageral/10);   
}