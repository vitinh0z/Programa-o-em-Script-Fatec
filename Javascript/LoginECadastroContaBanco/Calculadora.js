let retorno;

do {
  let n1 = parseFloat(prompt("\nDigite o primeiro Número: "));
  let n2 = parseFloat(prompt("\nDigite o Segundo Número: "));

  let menu = prompt("\nDigite '+' para Somar\nDigite '-' para Subtração\nDigite '*' para Multiplicação\nDigite '/' para divisão\nOpção: ");

  switch (menu) {
    case "+":
      console.log(`A soma de ${n1} + ${n2} é ${n1 + n2} \n`);
      break;

    case "-":
      console.log(`A subtração de ${n1} - ${n2} é ${n1 - n2} \n`);
      break;

    case "*":
      console.log(`A multiplicação de ${n1} * ${n2} é ${n1 * n2} \n`);
      break;

    case "/":
    console.log(`A divisão de ${n1} / ${n2} é ${n1 / n2} \n`);
    break;
      
    default:
      console.log("Operação inválida! Escolha uma das opções indicadas.\n");
  }

  retorno = prompt("Gostaria de fazer novamente? \n'1' - Sim \n'2' - Não \nOpção: ");

} while (retorno === "1");  
