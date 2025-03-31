const botao1 = document.getElementById('botao1');
const botao2 = document.getElementById('botao2');
const botao3 = document.getElementById('botao3');
const mensagemDiv = document.getElementById('mensagem'); // Referência ao div onde a mensagem será exibida

// Adicionando eventos de clique para cada botã o
botao1.addEventListener('click', function(event) {
    mensagemDiv.textContent = "Botão 1 clicado"; // Exibe a mensagem na página
});

botao2.addEventListener('click', function(event) {
    mensagemDiv.textContent = "Botão 2 clicado"; // Exibe a mensagem na página
});

botao3.addEventListener('click', function(event) {
    mensagemDiv.textContent = "Botão 3 clicado"; // Exibe a mensagem na página
});
