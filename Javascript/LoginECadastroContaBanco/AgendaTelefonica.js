AgendaTelefonica
const readline = require ('readline');

 let agenda = [];

 function adcionarContato(){
  readline.question("Nome: ", (nome) => {
    readline.question("Telefone: ", (telefone) => {
      readline.question("Endereço", (endereco) =>{
        readlne.question("CEP: ",(cep) =>{

        })
      })
    })
  })

}
 console.log (agenda)