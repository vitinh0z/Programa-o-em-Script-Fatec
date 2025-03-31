#include <stdio.h>
#include <stdlib.h>
int main(){

char animais[3][3][90];


int i, j;


for (i=0; i<3; i++){

    for (j=0; j<3; j++){

    printf("Digite o nome do animal da posição: [%d][%d]: ", i+1, j+1);
    fgets(animais[i][j], 90, stdin);
  

}

   

}
printf("Nome dos animais: \n");
for (i=0; i<3; i++){
    for (j=0; j<3; j++){
        printf("%s\n", animais[i][j]);
    }
    printf("\n");
}
}