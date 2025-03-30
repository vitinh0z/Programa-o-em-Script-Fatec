#include <stdio.h>
#include <stdlib.h>

int main(){`

  int escolhaDados, i, d3[2], d4[3], d5[4], d6[5], d7[6], d8[7], d9[8], d10[9];
  

  printf("Escolha o número de dados que deseja jogar: 1- D3, 2- D4, \n 3- D5, 4- D6, \n 5- D7, 6- D8, \n 7- D9, 8- D10");
  scanf("%d", &escolhaDados);

  switch(escolhaDados){
    case 1:
      for(i= 0; i< 2; i++){
        d3[i] = rand() % 3 + 1;
        printf("D3: %d\n", d3[i]);
      }
      break;
  }

  


  
  


}