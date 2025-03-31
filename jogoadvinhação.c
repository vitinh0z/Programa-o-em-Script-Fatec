#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    
srand(time(NULL));
  int escolhaDados, continuar, i, qntidadeRolar, resultadoD3, resultadoD4, resultadoD5, resultadoD6, resultadoD7, resultadoD8, resultadoD9, resultadoD10;
  
do{
  printf("Escolha o número de dados que deseja jogar: 1- D3, 2- D4, \n 3- D5, 4- D6, \n 5- D7, 6- D8, \n 7- D9, 8- D10 \n Opção: ");
  scanf("%d", &escolhaDados);

    printf("\nQuantas vezes gostaria de Rolar o dado? ");
    scanf("%d", &qntidadeRolar);


  switch(escolhaDados){
    
    case 1:

    for (i=0; i< qntidadeRolar; i++){
    resultadoD3 = rand() % 3 + 1;

        printf("D3: %d\n", resultadoD3);
    }
    break;

  


    case 2:
    for (i=0; i< qntidadeRolar; i++){
        resultadoD4 = rand() % 4 + 1;
            printf("D4: %d\n", resultadoD4);
    }
    break;  
    
    

    case 3:
    for (i=0; i< qntidadeRolar; i++){
        resultadoD5 = rand() % 5 + 1;
            printf("D5: %d\n", resultadoD5);
    }
    break;
    
    case 4:
    for (i=0; i< qntidadeRolar; i++){
        resultadoD6 = rand() % 6 + 1;
            printf("D6: %d\n", resultadoD6);
    }
    break;

    for (i=0; i< qntidadeRolar; i++){
    case 5:
        resultadoD7 = rand() % 7 + 1;
            printf("D7: %d\n", resultadoD7);
    }
    break;
    for (i=0; i< qntidadeRolar; i++){        
    case 6:
        resultadoD8 = rand() % 8 + 1;
            printf("D8: %d\n", resultadoD8);
    }
    break;

    for (i=0; i< qntidadeRolar; i++){
    case 7:
        resultadoD9 = rand() % 9 + 1;
            printf("D9: %d\n", resultadoD9);
    }
    break;
    
    for (i=0; i< qntidadeRolar; i++){
    case 8:
        resultadoD10 = rand() % 10 + 1;
            printf("D10: %d\n", resultadoD10);
    }
    break;


    default:
        printf("Opção Invalida");
    
    
  }

  if 

    printf("\n Deseja continuar? 1 - Sim 2 - Não \n Opção: \n ");
    scanf("%d", &continuar);

} while (continuar == 1);
  
}
