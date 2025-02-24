const readlineSync = require('readline-sync');

// Exemplo: solicitando o nome do usuário
let nome = readlineSync.question('Digite seu nome: ');
console.log(`Olá, ${nome}!`);

// Exemplo de uso conforme o código anterior:
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

function cadastro() {
    console.log("Redirecionando para a página de criação de conta...");

    setTimeout(() => {
        let nome = readlineSync.question("Digite seu nome: ");
        let cpf = readlineSync.question("Digite seu CPF: ");
        let email = readlineSync.question("Digite seu email: ");
        let senha = readlineSync.question("Digite sua senha: ", { hideEchoBack: true });
        let confirmarSenha = readlineSync.question("Confirme sua senha: ", { hideEchoBack: true });

        if (senha === confirmarSenha) {
            console.log("Conta criada com sucesso!");
            
            setTimeout(() => {
                console.log("Redirecionando para o login...");
                login();
            }, 2000);
        } else {
            console.log("Erro: as senhas não coincidem.");
        }
    }, 3000);
}

// Inicia o fluxo de login
login();
