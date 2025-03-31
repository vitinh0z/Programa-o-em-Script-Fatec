let menu = prompt("Digite o número da operação desejada: \n '+' - Soma \n '-' - Subtração \n '*' - Multiplicação \n / '-' Divisão \n '5' - Sair");
let num1 = Number(prompt("Digite o primeiro número: "));
let num2 = Number(prompt("Digite o Segundo número: "))

switch (prompt){

    case '+':
        console.log(`A soma de ${num} + ${num2} é igual a ${num1 + num2}`)
    break;

    case '-':
        console.log(`A subtração de ${num1} - ${num2} é igual a ${num1 - num2}`)
    break;

    case '*':
        console.log(`A multipliçação de ${num1} * ${num2} é igual a ${num1 * num2}`)
    break;

    case '/':
        console.log(`A divisão de ${num1} / ${num2} é igual a ${num1 / num2}`)
    break;

    case '5':
        console.log('Saindo...')
    break;

    default:
        console.log('Operação inválida')   
}