#include <stdio.h>
#include <stdlib.h>


int main(){

    char nome [50], email[50], curso[50]; // fgets só pode com char
    int idade;

    printf("Entre com o Nome: ");
    fgets(nome, 50, stdin);
    printf("Entre com a idade:");
    scanf("%d", &idade);
    fflush(stdin);
    printf("Entre com o email: ");
    // obriga a paradas getchar(); 

    fgets(email, 50, stdin);
    printf("Entre com o curso: ");
    fgets(curso, 50, stdin);
   
    

    printf("Nome: %s\n", nome);
    printf("Email: %s\n", email);
    printf("Curso: %s\n", curso);
    printf("Idade: %d\n", idade);

}