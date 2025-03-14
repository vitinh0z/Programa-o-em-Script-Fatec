int main(){
  float num1, num2;

  char op;

  printf ("Digite um numero, operador e numero: ");
  scanf("%f %c %f", &num1, &op, &num2);
  switch (op)
  {
  case '+': 
    printf("Soma dos número: %f", num1+num2);
    break;
    case '-':
      printf("Subtração dos número %f", num1-num2);
    break;
    case '*':
      printf("Multiplicação dos número: %f", num1*num2);
    break;
    case '/':
    printf("Divisão dos número: %f", num1/num2);
  break;

  default:
    printf("Opção Invalida");
    
  }
}