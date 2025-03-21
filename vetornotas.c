#include <stdio.h>

int main(){

    float notas[5], mediaGeral;
    mediaGeral = 0;
    for (int i=0; i<5; i++){
        printf("Digite a nota do aluno: ");
            scanf("%f", &notas[i]);
    }

    for (int i=0; i<5; i++){
        mediaGeral = mediaGeral + notas[i];

        printf("\n Media das notas: %.2f", mediaGeral/5);
    }
}