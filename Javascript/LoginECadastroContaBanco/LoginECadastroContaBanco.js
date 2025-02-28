const readlineSync = require("readline-sync");
const { cpf } = require ("cpf-cnpj-validator"); 

function login() {
  const agencia = readlineSync.question("Digite sua agência: ");
  const conta = readlineSync.question("Digite sua conta: ");

  if (agencia === "3277" && conta === "3266") {
    console.log("Acesso permitido");
  } else {
    let criarConta = readlineSync.keyInYNStrict("Agência ou conta incorreta. Gostaria de criar uma conta?");
    if (criarConta) {
      cadastro();
    } else {
      console.log("Operação cancelada.");
    }
  }
}

function validacaoCPF() {
  let cpfInput = readlineSync.question("Digite seu CPF: ");
  console.log("cpf.isValid(", cpfInput, ") =>", cpf.isValid(cpfInput));

  if (cpf.isValid(cpfInput)) {
    console.log("CPF válido");
    return cpfInput;
  } else {
    console.log("CPF inválido. Por favor, tente novamente.");
    return validacaoCPF();
  }
}

function cadastro() {
  console.log("Redirecionando para a página de criação de conta...");

  setTimeout(() => {
    let nome = readlineSync.question("Digite seu nome: ");
    let cpfValido = validacaoCPF(); // <-- chama a função
    let email = readlineSync.question("Digite seu email: ");

    let senha, confirmarSenha;
    do {
      senha = readlineSync.question("Digite sua senha: ", { hideEchoBack: true });
      confirmarSenha = readlineSync.question("Confirme sua senha: ", { hideEchoBack: true });
      if (senha !== confirmarSenha) {
        console.log("Senhas não coincidem. Tente novamente.");
      }
    } while (senha !== confirmarSenha);

    console.log("Conta criada com sucesso!");
    setTimeout(() => {
      console.log("Redirecionando para o login...");
      login();
    }, 2000);
  }, 3000);
}

login();
