let menu = prompt("Digite o número da operação desejada: \n '+' - Soma \n '-' - Subtração \n '*' - Multiplicação \n / '-' Divisão \n '5' - Sair \n Opção: ");
let num1 = Number(prompt("Digite o primeiro número: "));
let num2 = Number(prompt("Digite o Segundo número: "))
let retorno""
switch (menu){

    case '+':
        console.log(`\nA soma de ${num1} + ${num2} é igual a ${num1 + num2}\n `)
    break;

    case '-':
        console.log(`\nA subtração de ${num1} - ${num2} é igual a ${num1 - num2} \n`)
    break;

    case '*':
        console.log(`\nA multipliçação de ${num1} * ${num2} é igual a ${num1 * num2} \n`)
    break;

    case '/':
        console.log(`\nA divisão de ${num1} / ${num2} é igual a ${num1 / num2}\n `)
    break;

    default:
        console.log('Operação inválida')   
}  
 if (retorno === '2') {
        console.log('Saindo...');
        break;
    }
 while (true);
