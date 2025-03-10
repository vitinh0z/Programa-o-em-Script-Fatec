#include <stdio.h>

int main(){

    int numeroConta;
    float saldo, debito, credito, saldoAtual;

    printf("Digite o numero da conta: ");
    scanf("%d", &numeroConta);

    printf("Digite o saldo da conta: ");
    scanf("%f", &saldo);

    printf("Digite o valor do debito: ");
    scanf("%f", &debito);

    printf("Digite o valor do credito: ");
    scanf("%f", &credito);

    saldoAtual = saldo - debito + credito;

    if(saldoAtual >= 0){
        printf("Saldo positivo: %.2f\n", saldoAtual);
    
    }
    else{
        printf("Saldo negativo: %.2f\n", saldoAtual);
    }

}