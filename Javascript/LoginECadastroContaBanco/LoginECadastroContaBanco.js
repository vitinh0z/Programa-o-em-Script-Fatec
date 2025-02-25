const readlineSync = require('readline-sync'); // utilizando readline para utilizar entrada de dados

let nome = readlineSync.question ('Digite seu nome: '); // readlineSync.question é tipo Input 
console.log(`Olá, ${nome}!`); // ${nome} é para pegar o nome do input e colocar no console

function login() { // funcition é usado para separar codigo por função. Nesse caso logina está dentro de fuction
    const agencia = readlineSync.question("Digite sua agência: ");
    const conta = readlineSync.question("Digite sua conta: ");

    if (agencia === "3277" && conta === "3266") {
        console.log("Acesso permitido");
    } else {
        let criarConta = readlineSync.keyInYNStrict("Agência ou conta incorreta. Gostaria de criar uma conta?"); // aqui ele abre opção y ou n que ja é nativa da biblioteca

        if (criarConta) { // se for sim, vai ser redirecionado para opção cadastro
            cadastro();

        } else {
            console.log("Operação cancelada.");
        }
    }
}

function cadastro() { // mesmo acontece com cadastro, que está dentro de function que sepera o codigo do login
    console.log("Redirecionando para a página de criação de conta...");

    setTimeout(() => { // aqui ta dando entrada para o tempo de 3 segundos

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
            }, 2000); // e aqui fecha
        } else {
            console.log("Erro: as senhas não coincidem.");
        }
    }, 3000);
}
login(); // e dps de completo o cadastro, ele volta para função login
