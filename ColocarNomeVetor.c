// #include <stdio.h>
//#include <stdlib.h>

//int main(){

//char vetor[10][50];
//int i;

//for (i=0; i<10; i++){
   // printf("Digite o nome do funcionario: ");
 //  fgets(vetor[i], sizeof(vetor[i]), stdin);

//}

//printf("\n Nome dos funcionarios: \n");
//for (i=0; i<10; i++){
//    printf("\n - %s", vetor[i]);
//}
  
//}

#include <stdio.h>

void print_bytes(int n, unsigned char *buffer) {
    // Preenche o buffer com os bytes do número n
    unsigned char *ptr = (unsigned char*)&n;  // Ponteiro para o número tratado como vetor de bytes
    for (size_t i = 0; i < sizeof(n); i++) {
        buffer[i] = ptr[i];  // Armazena o byte na posição do buffer
    }
}

int combine_bytes_to_int(unsigned char *combined_bytes, size_t size) {
    int result = 0;
    // Combina os bytes de volta para um inteiro
    for (size_t i = 0; i < size; i++) {
        result |= combined_bytes[i] << (i * 8);  // Realiza a combinação dos bytes
    }
    return result;
}

int main() {
    int num1, num2;
    unsigned char bytes_num1[sizeof(int)];  // Buffer para armazenar bytes de num1
    unsigned char bytes_num2[sizeof(int)];  // Buffer para armazenar bytes de num2
    unsigned char combined_bytes[sizeof(int) * 2];  // Buffer para armazenar os bytes combinados

    // Entrada de dados
    printf("Digite o primeiro número: ");
    scanf("%d", &num1);

    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    // Converte os números em bytes
    print_bytes(num1, bytes_num1);
    print_bytes(num2, bytes_num2);

    // Combina os bytes de ambos os números
    for (size_t i = 0; i < sizeof(int); i++) {
        combined_bytes[i] = bytes_num1[i];  // Copia os bytes de num1
        combined_bytes[i + sizeof(int)] = bytes_num2[i];  // Copia os bytes de num2
    }

    // Exibe os bytes combinados
    printf("Bytes combinados:\n");
    for (size_t i = 0; i < sizeof(int) * 2; i++) {
        printf("Byte %zu: 0x%02X\n", i, combined_bytes[i]);
    }

    // Transforma os bytes combinados de volta em um número inteiro
    int result = combine_bytes_to_int(combined_bytes, sizeof(int) * 2);

    // Exibe o resultado final (número inteiro)
    printf("O número resultante após combinar os bytes é: %d\n", result);

    return 0;
}
