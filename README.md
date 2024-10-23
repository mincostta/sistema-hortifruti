# Sistema Básico de Caixa Hortifruti
Como projeto semestral da faculdade, foi solicitado um sistema de hortifruti feito em ambiente Console C. Incluí todos os produtos desejados em um arquivo de texto do bloco de notas (produtos.txt), o qual o código lê linha por linha e armazena cada produto em uma variável dentro do algoritmo, além de seus códigos e valores por kg. Para facilitar o trabalho, usei uma struct, e criei um elemento vetor dentro dela.

## Tecnologias Usadas
- **Linguagens**: C
- **Ferramentas**: Git

## Instruções de Uso
1. Certifique-se de que o arquivo 'produtos.txt' está dentro de pasta bin/debug.
2. Compile e execute o código.

## Funcionamento
Assim que o sistema é iniciado, caso o usuário deseje registrar uma compra, será necessário informar o código do produto. O sistema automaticamente detecta de qual produto se trata e seu peso por kg, somente através desse código fornecido pelo usuário. O usuário então fornece quanto daquele produto está sendo comprado, ou seja, o peso em gramas, e logo o sistema calcula o valor. É possível adicionar quantos produtos desejar e, após a compra ter sido finalizada, é possível iniciar uma nova, sem necessidade de reiniciar o console. Também há cálculo de troco.

## Evento de Clique no Botão

```javascript
    botao.addEventListener('click', ()=>{
    const pessoa1Input = document.getElementById('pessoa1');
    const pessoa2Input = document.getElementById('pessoa2');
    
    const pessoa1 = pessoa1Input.value;
    const pessoa2 = pessoa2Input.value;

    if (pessoa1.trim() == '' || pessoa2.trim() == '') {
        texto.innerText = "Digite os dois nomes necessários";
        resultado.style.display = 'none';
        coracao.src = './imgs/coração-inicial.png';
        botao.innerText = "Calcular";
    }

    else if (pessoa1 == pessoa2) {
        texto.innerText = "Os nomes não podem ser iguais";
        resultado.style.display = 'none';
        coracao.src = './imgs/coração-inicial.png';
        botao.innerText = "Calcular";
        pessoa1Input.value = '';
        pessoa2Input.value = '';
    }

    else {
        var porcentagem = Math.random();
        porcentagem = porcentagem * 100 + 1;
        porcentagem = Math.floor(porcentagem);

        const numero = porcentagem + "%";

        resultado.innerText = numero;
        resultado.style.display = 'block';

        texto.innerText = pessoa1 + " e " + pessoa2 + " têm " + porcentagem + "% de compatibilidade";

        pessoa1Input.value = '';
        pessoa2Input.value = '';

        if (porcentagem <= 25) {
            coracao.src = './imgs/coração-quebrado.png';
        }

        else if (porcentagem <= 40) {
            coracao.src = './imgs/coração-colado.png';
        }

        else if (porcentagem <= 60) {
            coracao.src = './imgs/coração-dois.png';
        }

        else if (porcentagem <= 80) {
            coracao.src = './imgs/coração-cheio.png';
        }

        else if (porcentagem <= 100) {
            coracao.src = './imgs/coração-anjo.png';
        }

        botao.innerText = "Refazer";
    }
});
```

## Licença
Este projeto é licenciado sob a Licença MIT. Veja o arquivo [LICENSE](https://github.com/mincostta/sistema-hortifruti/blob/main/LICENSE) para mais detalhes.
